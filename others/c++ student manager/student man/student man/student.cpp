#include<iostream>
#include<string>
#include<array>
#include<fstream>
//Including the program containing Student Class
using namespace std;
//Author: Agnik Saha
//date:29.08.2019
class Student                      //Class Definition
{
    
    //Defining attributes and Member Functions
public:
    int rollno;
    string name;
    long long mobile_no;
    string emailadd;
    float attendance;
    
    int check_email(string s)
    //for checking email address syntax
    {
        for(int i=0;i< s.size();i++)
        {
            if(s[i]=='@')
            {
                for(int j=i;j<s.size();j++)
                {
                    if(s[j]=='.')
                        return 1;
                }
            }
            
        }
        return 0;
    }
    void getName()
    {
        getline(cin,name);
        cout << "Enter name:" << endl;
        //cin >> name;
        getline(cin,name);
        
    }
    void setemail(){
        string m;
        cout << "Enter new email address:" << endl;
        cin >> m;
        if(check_email(m)){
            emailadd=m;
            cout << "Email Address updated successfully!" << endl;}
        
        else{
            cout << "Enter valid email address!" << endl; return;}
        
        
    }
    void setMobileNo()
    {
        long m;
        cout << "Enter new mobile no:" << endl;
        cin >> m;
        mobile_no=m;
        cout << "Mobile No updated successfully!" << endl;
    }
    int getAttendance()
    {
        float at;
        cout << "Enter attendance:" << endl;
        cin >> at;
        if(at<=1.0){
            attendance=at; return 1;}
        else
        {
            cout << "Invalid Attendance!" << endl; return 0;}
    }
    void setRoll()
    {
        int r;
        cout << "Enter new roll" << endl; cin >> r;
        rollno=r;
    }
    void getMobileNo()
    {
        cout << "Enter Mobile Number:" << endl;
        cin >> mobile_no;
    }
    int getemail()
    {
        string email; cout << "Enter email:" << endl;
        cin >> email;
        if(check_email(email)){
            emailadd=email;return 1;}
        else{
            cout << "Enter valid email address!" << endl; return 0;}
    }
    
    void setattendance()
    {
        float at;
        cout << "Enter new attendance:" << endl;
        attendance=at;
    }
    void getRoll()
    {
        cout << "Enter Roll No:" << endl;
        cin >> rollno;
    }
    void print(){ cout << name+","+to_string(rollno)+","+to_string(mobile_no)+","+emailadd+","+to_string(attendance) << endl;}
    //display function for Student class object
    Student(string n,int roll,long mob, string email, float att){ name=n;rollno=roll;mobile_no=mob;emailadd=email;attendance=att;}
    //Student Class Constructor
    Student(){ name=" "; rollno=0; mobile_no=0; emailadd=" "; attendance=0.0;}
    //Default Constructor of Student Class
};






