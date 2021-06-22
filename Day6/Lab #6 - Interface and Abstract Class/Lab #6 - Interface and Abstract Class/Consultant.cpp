//
//  Consultant.cpp
//  Lab #6 - Interface and Abstract Class
//
//  Created by Agnik Saha on 10/31/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//
#include <iostream>
#ifndef PERSON_CPP
    #define PERSON_CPP
    #include "Person.cpp"
#endif
using namespace std;
class Consultant : public Person {
    public:
        Consultant(string name, string id) {
            this->setName(name);
            this->setId(id);
        }
        string introduce() {
            string result = "hello, ";
            result.append("name = ").append(getName());
            result.append(", consultant");
            return result;
        }
        // pure virtual method from Resource
        string getDesc() {
            return "Consultant";
        }
};
