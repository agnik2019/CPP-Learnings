//
//  main.cpp
//  gender
//
//  Created by Agnik Saha on 10/20/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//

#include<iostream>
#include<string.h>
using namespace std;

/*                ************* Author: Agnik Saha
 Roll: 203 ***************    */
class Employee{
    private :
    string name;
    int gender;
    bool gen;
    
    
    public :
    Employee(string name, int gender){    //parameterized constructor
        this->name=name;
        this->gender=gender;
    }
    Employee(string name, bool gender){    //parameterized constructor
        this->name=name;
        this->gender=gender;
    }
    string getname()     //getName():String
    {
        return name;
    }
    bool getgender()        // getGender():boolean
    {
        bool r = true;    //true means female (1)
        if (gender== 0)
            r=false;        //false means male(0)   accoding to question
        return r;
    }
    
    int getgender(bool updated)   //overloading of getgender by one parameter bool updated
    {
        return gender;
        
    }
    
    
    string print()
    {                    //print only male and female
        string li= "Hello, My name is ";
        li.append(getname());
        li.append(" , I am ");
        if (getgender())
            li.append("female.");
        else
            li.append("male.");
        return li;
    }                    //before 2014
    
    //From 2014, India officially recognises a third gender.
    string print(bool updated)
    {        //print  male,female and transgender    OVERRIDE OF print() method
        string str= "Hello, My name is ";
        str.append(getname());
        str.append(" , I am ");
        if (getgender(true)==0)
            str.append("male.");
        else if (getgender(true)==1)
            str.append("female");
        else
            str.append("transgender");
        return str;
        
    }
    
};   //End of class employee

int main(){
    
    cout<<"After 2014"<<endl;
    Employee ag("Agnik",0);
    Employee de("deepika",1);
    Employee rh("rahl",-1);
    Employee ab("shahrukh",false);
    Employee ab1("katrina",true);
    
    cout<<ag.print(true)<<endl;
    cout<<de.print(true)<<endl;
    cout<<rh.print(true)<<endl;
    cout<<"before 2014"<<endl;
    cout<<ab.print()<<endl;
    cout<<ab1.print()<<endl;
    return 0;
}
