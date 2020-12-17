#ifndef VECTORTEMPLATE_H
#define VECTORTEMPLATE_H

template <typename T>
class VECTOR {
private:
    T first, second, sum;
public:
    VECTOR() { first = second = sum = 0; }
    VECTOR(T t1, T t2) {
        first = t1;
        second = t2;
        sum = first + second;
    }
    T get() { return sum; }
    bool operator==(VECTOR<T>& t) { return this->get() == t.get(); }
    bool operator>(VECTOR<T>& t) { return this->get() > t.get(); }
    bool operator<(VECTOR<T>& t) { return this->get() < t.get(); }
};

#endif // VECTORTEMPLATE_H
