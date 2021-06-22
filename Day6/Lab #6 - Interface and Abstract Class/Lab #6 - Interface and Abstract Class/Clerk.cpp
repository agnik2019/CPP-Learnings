//
//  main.cpp
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

class Clerk: public Person {

    private:
        string designation;

    public:
        Clerk(string name,string id) {
            this->setName(name);
            this->setId(id);
        }

        string getDesc() {
            return "Clerk";
        }

        string approveInvoice() {
            return "approval limit = $100";
        }

        string introduce() {
            string result = "hello, ";
            result.append("name = ").append(getName());
            result.append(", ");
            result.append("designation = ").append(getDesc());

            return result;
        }
     
};
