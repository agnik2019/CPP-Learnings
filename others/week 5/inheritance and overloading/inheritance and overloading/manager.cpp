//
//  manager.cpp
//  inheritance and overloading
//
//  Created by Agnik Saha on 10/20/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//

#ifndef PERSON_CPP
    #define PERSON_CPP
    #include "Person.cpp"
#endif
#include "clerk.cpp"
class Manager : public Clerk{
    
    public :
    
        Manager(string name) : Clerk(name){
            this->designation = "Manager";
        }
        string approveInvoice()
        {
            return "the invoice is $500";
        }

};

