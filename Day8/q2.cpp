//
//  q2.cpp
//  lab 8
//
//  Created by Agnik Saha on 11/5/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//

#include <iostream>
#include<algorithm>
using namespace std;

enum VehicleType {SCOOTER, AUTO, CAR, BUS};

class Vehicle {

public:
VehicleType type;

Vehicle() {
this->type = SCOOTER;
}
Vehicle(VehicleType type) {
this->type = type;
}


VehicleType getType() {
return type;
}



string getTypeString() {
string result = "";

switch (this->type) {
case BUS: result = "bus"; break;
case CAR: result = "car"; break;
case AUTO: result = "auto"; break;
case SCOOTER: result = "scooter"; break;
default: result = "Vehicle not found";
}
return result;
}



};

bool compare (Vehicle v1,Vehicle v2) {
bool result = false;
if (v1.type > v2.type)
result = true;
return result;
}


int main() {

Vehicle myBus(BUS);
Vehicle myCar(CAR);
Vehicle myScooter(SCOOTER);
Vehicle myAuto(AUTO);
Vehicle myArray[4];
myArray[0]=myBus;
myArray[1]=myCar;
myArray[2]=myScooter;
myArray[3]=myAuto;

sort(myArray,myArray+4,compare);
cout<<"The increasing order of vehicle ";
for(int i=0;i<4;i++)
cout<<myArray[i].getTypeString()<<" ";

return 0;
}
