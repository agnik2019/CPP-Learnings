#include<iostream>
#include<string>
#include<array>
#include<fstream>
//Including the program containing Student Class
using namespace std;
//Written By Agnik Saha

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
    //Function for checking email address syntax
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
    
    
    void sortbyRoll()
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
    
    void sortbyAttendance()
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
        for(int i=0;i<len;i++)
        {
            if(s[i].name!=" ")
                s[i].print();
        }
        
    }
    
    void printAttendanceReport(string filename,bool sortBy)
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
    
};

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




