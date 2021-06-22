//
//  Manager.cpp
//  Lab #6 - Interface and Abstract Class
//
//  Created by Agnik Saha on 10/31/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//
#include "Clerk.cpp"
class Manager : public Clerk {
    public:
        Manager(string name, string id) : Clerk(name,id) {
            
        }
string getDesc() {
        return "Manager";
    }
string approveInvoice() {
            return "approval limit = $500";
        }
};




