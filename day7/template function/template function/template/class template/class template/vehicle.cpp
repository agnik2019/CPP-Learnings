//
//  main.cpp
//  template
//
//  Created by Agnik Saha on 10/20/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//

#include<iostream>
using namespace std;

enum vehicletype{ Scooter, Auto, Car,Bus};

class Vehicle{
private:
    vehicletype vtype;
    
public:
    Vehicle()
    {
        this->vtype= Bus;
    }
    Vehicle(vehicletype vtype)
    {
        this->vtype=vtype;
    }
    vehicletype gettype()
    {
        return vtype;
    }
    string gettypeStr()
    {
        string result;
        switch (this->vtype){
            case Bus: result="bus"; break;
            case Auto: result="auto"; break;
            case Scooter: result="scooter"; break;
            case Car: result="car"; break;
            default: result="vehicle not found";
        }
        return result;
    }
    
    bool operator > (Vehicle vother)
    {
        if(this->gettype() > vother.gettype())
        {
            return true;
        }
        return false;
    }
    
};
/*int main()
 {
 Vehicle mybus(Bus);
 Vehicle myCar(Car);
 Vehicle myAuto(Auto);
 if(myCar > myAuto)
 cout<<"larger"<<endl;
 else
 cout<<"not larger"<<endl;
 } */
