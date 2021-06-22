//
//  Resource.cpp
//  Lab #6 - Interface and Abstract Class
//
//  Created by Agnik Saha on 10/31/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//

#include<iostream>
using namespace std;
class Resource{

    public:
     virtual string getId()=0;
     virtual string getDesc()=0;
};
