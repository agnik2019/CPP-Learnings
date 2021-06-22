//
//  Hardware.cpp
//  Lab #6 - Interface and Abstract Class
//
//  Created by Agnik Saha on 10/31/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//
#include <iostream>
#ifndef RESOURCE_CPP
    #define RESOURCE_CPP
    #include "Resource.cpp"
#endif

const string SERVER = "server";
const string DESKTOP = "desktop";
const string LAPTOP = "laptop";

class Hardware : public Resource {

    private:
        string type; // SERVER, DESKTOP, LAPTOP
        string id;

    public:
        Hardware(string type,string id) {
            this->type = type;
            this->id = id;
        }

    string getDesc() {
        return type;
    }
    
    string getId() {
        return id;
    }
};

