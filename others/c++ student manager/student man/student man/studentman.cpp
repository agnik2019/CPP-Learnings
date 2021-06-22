
//  studentman.cpp
//  Created by Agnik Saha on 8/29/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
#include<iostream>
#include<string>
#include<array>
#include<fstream>

#include "student.cpp"
//Written Agnik Saha
class StudentManager
//Student Manager Class Definition
{
    
    //The attributes and member functions of this class
public:
    array<Student, 100> s;
    int size=0;string email;
    void getStudentInput()
    {
        Student st;
        st.getName();
        st.getRoll();
        st.getMobileNo();
        int f=st.getemail();
        if(f==0)
            return;
        f=st.getAttendance();
        if(f==0)
            return;
        s[size++]=st;
        
    }
    
    
    void sortbyRoll() //use buble sort for sorting
    {
        int len=sizeof(s)/sizeof(s[0]);
        
        for(int i=0; i<(len-1); i++)
        {
            for(int j=0; j<(len-i-1); j++)
            {
                if(s[j].rollno>s[j+1].rollno)
                {
                    int    temp=s[j].rollno;
                    s[j].rollno=s[j+1].rollno;
                    s[j+1].rollno=temp;
                }
            }
        }
        for(int i=0;i<len;i++)
        {
            if(s[i].name!=" ")
                s[i].print();
        }
    }
    
    void sortbyAttendance()  //use buble sort for sorting
    {
        int len=sizeof(s)/sizeof(s[0]);
        for(int i=0; i<(len-1); i++)
        {
            for(int j=0; j<(len-i-1); j++)
            {
                if(s[j].attendance>s[j+1].attendance)
                {
                    int    temp=s[j].attendance;
                    s[j].attendance=s[j+1].attendance;
                    s[j+1].attendance=temp;
                }
            }
        }
        for(int i=0;i<len;i++) //this for loop for displaying
        {
            if(s[i].name!=" ")
                s[i].print();
        }
        
    }
    
    void printAttendanceReport(string filename,bool sortBy) //to write in file
    {
        ofstream outfile;
        int len=sizeof(s)/sizeof(s[0]);
        outfile.open(filename);
        if(sortBy == true){
            
            sortbyRoll();
            for(int i=0;i<len;i++)
            {
                if(s[i].name!=" ")
                    outfile << s[i].name+","+to_string(s[i].rollno)+","+to_string(s[i].mobile_no)+","+s[i].emailadd+","+to_string(s[i].attendance) << endl;
            }
            outfile.close();}
        else
        {
            sortbyAttendance();
            for(int i=0;i<len;i++)
            {
                if(s[i].name!=" ")
                    outfile << s[i].name+","+to_string(s[i].rollno)+","+to_string(s[i].mobile_no)+","+s[i].emailadd+","+to_string(s[i].attendance) << endl;
            }
            outfile.close();
        }
    }
    
};   //end of StudentManager class

int main()
{
    StudentManager mgr;
    //Student Manager class object
    int ch;
    
    //Menu-driven user input
    do
    {
        cout << "0.  Enter Student Details\n"
        "1.  Update Student Mobile Number\n"
        "2.  Update Student Email Address\n"
        "3.  Print Attendance Report by Roll Number\n"
        "4.  Print Attendance Report by Attendance\n"
        "5.  Print Attendance Report by choice\n"
        "6.  Exit" << endl;
        cin >> ch;
        
        //Different Switch cases
        switch(ch)
        {
            case 0:{
                mgr.getStudentInput();break;}
            case 1:
            {
                int r,f=0;
                cout << "Enter Roll no of student:" << endl;
                cin >> r;
                int len= sizeof(mgr.s)/sizeof(mgr.s[0]);
                for(int j=0; j < len; j++)
                {
                    if(mgr.s[j].rollno==r){ f=1;
                        mgr.s[j].getMobileNo();cout << mgr.s[j].mobile_no << endl; break;}
                    
                }
                if(f==0) cout << "Invalid Roll No." << endl;
                break;
            }
            case 2:
            {
                int r,f=0;
                cout << "Enter Roll no of student:" << endl;
                cin >> r;
                int len= sizeof(mgr.s)/sizeof(mgr.s[0]);
                for(int j=0; j < len; j++)
                {
                    if(mgr.s[j].rollno==r){ f=1;
                        mgr.s[j].getemail();cout << mgr.s[j].emailadd << endl; break;}
                    
                }
                if(f==0) cout << "Invalid Roll No." << endl;
                break;
            }
            case 3:
                mgr.sortbyRoll();break;
            case 4:
                mgr.sortbyAttendance(); break;
            case 5:{
                int c; string file,z;
                cout << "Enter 1 for Roll and 0 for Attendance" << endl;
                cin >> c;
                getline(cin,z);
                cout << "Enter name of the file:" << endl;
                getline(cin,file);
                if(c==1)
                    mgr.printAttendanceReport(file,true);
                else
                    mgr.printAttendanceReport(file,false);
                break;}
            case 6:
                exit(1);
                
        }
        
    }while(ch!=6);
    
    return 0;
}
