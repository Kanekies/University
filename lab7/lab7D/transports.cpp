#include "transports.h"

Transports::Transports(){}

Transports::Transports(vector<Transport> transports){
    this->transports = transports;
}

bool isAvailable(string fileName, int index){
    if(index < 0)
        return false;
    ifstream fin(fileName);
    string temp;
    int counter = 0;
    while(!fin.eof()){
        getline(fin, temp);
        counter++;
    }
    if(index < counter)
        return true;
    return false;
}

vector<string> split_string(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos-prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());
    return tokens;
}
Transport Transports::readFromFile(string fileName){
    Transport *result = new Transport();
    cout << "Enter index of \"Transport\": ";
    int index = -1;
    cin >> index;
    if(isAvailable(fileName, index)){
        ifstream fin;
        fin.open(fileName);
        for(int i = 0; i <= index; i++){
            string line;
            getline(fin, line);
            if(i == index){
                vector<string> temp = split_string(line, " ");
                result = new Transport(temp[0], stod(temp[1]), stoi(temp[2]));
            }
        }
        fin.close();
    }
    return *result;
}

void Transports::readAllFromConsole(){
    cout << "Enter quantity of \"Transport\": ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string id;
        double distance;
        int time;
        cout << "Enter \"" << i << "\" id: ";
        cin >> id;
        cout << "Enter \"" << i << "\" distance: ";
        cin >> distance;
        cout << "Enter \"" << i << "\" time: ";
        cin >> time;
        this->transports.push_back(*(new Transport(id, distance, time)));
    }
}

void Transports::readAllFromFile(string fileName){
    string line;
    ifstream fin;
    fin.open(fileName);
    this->transports.clear();
    while(!fin.eof()){
        getline(fin, line);
        vector<string> temp = split_string(line, " ");
        Transport transport(temp[0], stod(temp[1]), stoi(temp[2]));
        this->transports.push_back(transport);
    }
}

void Transports::writeAllToConsole(){
    for_each(this->transports.begin(), this->transports.end(), [&](Transport t){ cout << t.get_info() << endl; });
}

void Transports::writeAllToFile(string fileName){
    ofstream fout;
    fout.open(fileName);
    for_each(this->transports.begin(), this->transports.end() - 1, [&](Transport t)
    {
        fout << t.get_info() << endl;
    });
    fout << this->transports[this->transports.size() - 1].get_info();
    fout.close();
}

void Transports::writeToFile(string fileName, Transport t){
    ofstream fout;
    fout.open(fileName);
    fout << t.get_info();
    fout.close();
}
