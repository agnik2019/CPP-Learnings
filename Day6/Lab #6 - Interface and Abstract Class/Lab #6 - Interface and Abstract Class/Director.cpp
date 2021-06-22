//
//  Director.cpp
//  Lab #6 - Interface and Abstract Class
//
//  Created by Agnik Saha on 10/31/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//

#include "Manager.cpp"
class Director : public Manager{
    public:
        Director(string name,string id) : Manager(name,id) {
            
        }
    string getDesc() {
        return "Director";
    }
        string approveInvoice() {
            return "approval limit = $1000";
        }
};
