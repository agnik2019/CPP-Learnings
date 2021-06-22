//
//  main.cpp
//  class template
//
//  Created by Agnik Saha on 10/20/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//


#include <iostream>
using namespace std;
#include"vehicle.cpp"
template <typename T>
class MyArray {
private:
    T *ptr;
    int size;
public:
    MyArray(T arr[], int s);
    void print();
    void sort();
};

template <typename T>
MyArray<T>::MyArray(T arr[], int s) {
    ptr = new T[s];
    size = s;
    for(int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T>
void MyArray<T>::print() {
    for (int i = 0; i < size; i++)
        cout<<" "<<*(ptr + i);
    cout<<endl;
}
template <typename T>
void MyArray<T> ::sort() {
    for (int i = 0; i < size - 1; i++)
        for (int j = size - 1; i < j; j--)
            if (ptr[j] < ptr[j - 1])
                swap(ptr[j], ptr[j - 1]);
}
int main()
{
    Vehicle myBus(Bus);
    Vehicle myCar(Car);
    Vehicle myAuto(Auto);
    Vehicle myScooter(Scooter);
    Vehicle *arr[4];
    arr[0]=&myBus;
    arr[1]=&myCar;
    arr[2]=&myAuto;
    arr[3]=&myScooter;
    MyArray<Vehicle> a(arr,4);
    a.print();
    a.sort();
    a.print();
    return 0;
}
