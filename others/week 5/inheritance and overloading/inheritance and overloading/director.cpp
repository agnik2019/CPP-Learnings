//
//  director.cpp
//  inheritance and overloading
//
//  Created by Agnik Saha on 10/20/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.

#ifndef PERSON_CPP
    #define PERSON_CPP
    #include "Person.cpp"
#endif
#include "manager.cpp"
#include "Contractor.cpp"
using namespace std;

class Director : public Manager
{
    public:
        Director(string name):Manager(name){
            this->designation="DIRECTOR";
        }
        string approveInvoice()
        {
            return "the invoice is $1000";
        }
};
int main(){

    Clerk myClerk("Smith");
    cout << myClerk.introduce() << endl;
    Manager myManager("Sharukh");
    cout << myManager.introduce() << endl;
    Director myDirector("Prabhas");
    cout << myDirector.introduce() << endl;
    Contractor myC("YYY");
    cout << myC.introduce() << endl;
    return 0;

}
