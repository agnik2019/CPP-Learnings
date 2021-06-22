//
//  templetedFunc.cpp
//  template
//
//  Created by Agnik Saha on 11/5/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//
#include<iostream>
using namespace std;
#include "Vehicle.cpp"
template <class T>
T getLarger(T first,T second)
{
    T result;
    result = (first>second)?first:second;
    return result;
}

int main()
{
    Vehicle vFirst(Bus), vSecond(Car);
    Vehicle vResult = getLarger<Vehicle>(vFirst, vSecond);
    cout<<"Larger Vehicle = "<<vResult.gettypeStr() << endl;
    
    int iFirst=10, iSecond=100;
    int iResult = getLarger<int>(iFirst, iSecond);
    cout<<"\nlarger integer = "<<iResult<<endl;
    
    char cFirst='a', cSecond='w';
    char cResult = getLarger<char>(cFirst, cSecond);
    cout<<"\nlarger char = "<<cResult<<endl;
}
