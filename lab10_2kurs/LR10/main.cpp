#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
void Sort(T* array, int n) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(array[j] > array[j + 1]){
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
}

template <typename T>
T Min(T t1, T t2) {
    if(t1 < t2)
        return t1;
    return t2;
}

template <typename T>
T Sum(T* array, int n) {
    T result = 0;
    for(int i = 0; i < n; i++)
        if(array[i] > 0)
            result += array[i];
    return result;
}



int main()
{
    int n = 5;
    int* a = new int[n] {6, 3, 2, 1, 5};

    //тесты минимума
    assert(1 == Min(1, 10));
    assert(-10 == Min(-1, -10));
    assert(5.5 == Min(10.0, 5.5));

    //тест сортировки
    int* b = new int[n] {1, 2, 3, 5, 6};
    Sort(a, n);
    for(int i = 0; i < n; i++)
        assert(a[i] == b[i]);

    //тест суммы
    int* c = new int[n] {-1, -2, -3, 4, -5};
    assert(4 == Sum(c, n));
    return 0;
}
