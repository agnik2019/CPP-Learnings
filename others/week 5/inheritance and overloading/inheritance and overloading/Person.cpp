//
//  Person.cpp
//  inheritance and overloading
//
//  Created by Agnik Saha on 10/31/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//
#include <iostream>
using namespace std;
class Person{
    private:
        string name;
    public:
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
    virtual string introduce() = 0;
};
