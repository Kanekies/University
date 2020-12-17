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

vector<string> split_string(const string& line, const string& delimeter){
    vector<string> tokens;
    size_t previous = 0, position = 0;
    do
    {
        position = line.find(delimeter, previous);
        if (position == string::npos)
            position = line.length();
        string token = line.substr(previous, position - previous);
        if (!token.empty())
            tokens.push_back(token);
        previous = position + delimeter.length();
    }
    while (position < line.length() && previous < line.length());
    return tokens;
}

Transport Transports::readFromFile(string fileName){
    Transport *result = new Transport();
    int index = -1;
    while(true){
        try {
            cout <<  "Enter index: ";
            cin >> index;
            break;
        }  catch (exception& ex) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << ex.what() << endl;
            continue;
        }
    }
    if(isAvailable(fileName, index)){
        ifstream fin;
        fin.open(fileName);
        if(fin.fail())
            throw "Cannot read file with name: " + fileName;
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
    else {
        throw "Not available index";
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
        while(true){
            try {
                cout <<  "Enter \"" << i << "\" distance: ";
                cin >> distance;
                break;
            }  catch (exception& ex) {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << ex.what() << endl;
                continue;
            }
        }
        while(true){
            try {
                cout <<  "Enter \"" << i << "\" time: ";
                cin >> time;
                break;
            }  catch (exception& ex) {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << ex.what() << endl;
                continue;
            }
        }
        this->transports.push_back(*(new Transport(id, distance, time)));
    }
}

void Transports::readAllFromFile(string fileName){
    string line;
    ifstream fin;
    fin.open(fileName);
    if(fin.fail())
    {
        throw "Cannot read file with name: " + fileName;
    }
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
    for_each(this->transports.begin(), this->transports.end() - 1, [&](Transport t){ fout << t.get_info() << endl; });
    fout << this->transports[this->transports.size() - 1].get_info();
    fout.close();
}

void Transports::writeToFile(string fileName, Transport t){
    ofstream fout;
    fout.open(fileName);
    fout << t.get_info();
    fout.close();
}
