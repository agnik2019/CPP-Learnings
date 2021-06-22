//
//  Person.cpp
//  Lab #6 - Interface and Abstract Class
//
//  Created by Agnik Saha on 10/31/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//

#include <iostream>
using namespace std;
#ifndef RESOURCE_CPP
    #define RESOURCE_CPP
    #include "Resource.cpp"
#endif
class Person : public Resource{
    
    private:
        string name;
        string id;

    public:
        
        
        string getName() {return name;}
        void setName(string name) {
            this->name = name;
        }
        string getId() {return id;}
        void setId(string id) {
            this->id = id;
        }
     /*  Person(string name,string id)
        {
            setName(name);
            setId(id);
        } */

        virtual string introduce() = 0;

};
