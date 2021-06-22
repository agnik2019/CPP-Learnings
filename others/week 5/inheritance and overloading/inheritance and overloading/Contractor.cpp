//
//  Contractor.cpp
//  inheritance and overloading
//
//  Created by Agnik Saha on 10/31/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//

#ifndef PERSON_CPP
    #define PERSON_CPP
    #include "Person.cpp"
#endif
#include<iostream>
using namespace std;
class Contractor : public Person{
    public :
    Contractor (string name){
        this->setName(name);
    }
    
    
    string introduce(){
    
        string s;
        s.append("Hey!My name is ");
        s.append(getName());
        s.append("I am a consultant.");
        return s;
    }

};



