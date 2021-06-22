//
//  ERP.cpp
//  Lab #6 - Interface and Abstract Class
//
//  Created by Agnik Saha on 10/31/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//
#include <iostream>
#include "Director.cpp"
#include "Consultant.cpp"
#include "Hardware.cpp"
using namespace std;
const int NUM_RESOURCE = 10;
int main() {
    string id1,id2,id3;
    Hardware myHardware(SERVER,"H000000001");
    Resource* pHardware = &myHardware;
    Clerk myClerk("anand","C000000001");
    Resource* pClerk = &myClerk;
    Consultant myConsultant("deepak","D000000001");
    Resource* pConsultant = &myConsultant;
    Manager myManager("baishaiki","E000000001");
    Resource* pManager = &myManager;
    Resource* resourceList[NUM_RESOURCE];
    resourceList[0] = pHardware;
    resourceList[1] = pClerk;
    resourceList[2] = pConsultant;
    resourceList[3] = pManager;
    for (int i=0; i<4; i++) {
        cout << resourceList[i]->getDesc() << endl;
    }
   
    cout << "Enter the Resource id to print its description: ";
    cin >> id1;
    for(int j=0;j<4;j++)
    {
        if(id1 == resourceList[j]->getId())
                cout<< resourceList[j]->getDesc() << endl;
        
    }
    return 0;
}
