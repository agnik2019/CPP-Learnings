#include<iostream>
#include<fstream>
#include "NewStudent.cpp"

using namespace std;

class StudentManager{
    
    public :
    
        Student myList[10];
    
    
    
    Student getStudentInput(){
    	//myList[0].setName("XY");
    	Student s;
    	string name,email,mobile;int roll; float att;
    	cout << "Enter your name : " ;
    	cin >> name;
    	while(s.setName(name)){
    		cout << "Incorrect Format.\nEnter name again : " ;
    		cin >> name;
    		s.setName(name);
    	}
    	
    	cout << "Enter Roll Number : " ;
    	cin >> roll;
    	while(s.setRoll(roll)){
    		cout << "Incorrect Format.\nEnter roll again : " ;
    		cin >> roll;
    		s.setRoll(roll);
    	
    	}
    	
    	cout << "Enter Attendance : " ;
    	cin >> att;
    	while(s.setAttendance(att)){
    		cout << "Incorrect Format.\nEnter attendance again : " ;
    		cin >> att;
    		s.setAttendance(att);
    	
    	}
    	
    	/*cout << "Enter Mobile Number : " ;
    	cin >> mobile;
    	while(s.setMobileNumber(mobile)){
    		cout << "Incorrect Format.\nEnter Mobile Number again : " ;
    		cin >> mobile;
    		s.setMobileNumber(mobile);
    	
    	}
    	
    	cout << "Enter Email Id : " ;
    	cin >> email;
    	while(s.setEmailId(email)){
    		cout << "Incorrect Format.\nEnter Email Id again : " ;
    		cin >> email;
    		s.setEmailId(email);
    	
    	}*/
    	
    	
    	return s;
    
    
    }
    
    
    void sortByRoll(){
    
        //cout << myList[0].getRoll();
        
        //Student sortListRoll[10];
        
        int i,j;
        int n=4;
        
        Student temp;
        
        for(int i=0;i<n;i++){
 	       cout << myList[i].getRoll()<<endl;
        }
        //cout << "Break\n\n" << endl;
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++){
            	//cout << this->myList[j+1].getRoll()<<endl;
                if(this->myList[j].getRoll() > this->myList[j+1].getRoll()){
                    temp = myList[j];
                    myList[j] = myList[j+1];
                    myList[j+1] = temp;
                }
            }
        }
        /*for(int i=0;i<n;i++){
        	cout << "";
 	       //cout << myList[i].getRoll()<<endl;
        }*/
        
        //return myList;
    }
    
    void sortByAttendance(){   
    //Student sortListRoll[10];
        
        int i,j;
        int n=4;
        
        Student temp;
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++){
            	//cout << *(sptr+j)->getRoll()<<endl;
                if(myList[j].getAttendance() > myList[j+1].getAttendance()){
                    temp = myList[j];
                    myList[j] = myList[j+1];
                    myList[j+1] = temp;
                }
            }
        }
        /*for(int i=0;i<n;i++){
        cout << "";
        //cout << myList[i].getAttendance () << endl;
        }    */   
    
    }  
	
	
	
	
	bool printAttendance(string filename,bool sortby){
		
		ofstream myfile;
		myfile.open(filename);
		if(myfile){
			int n=4;
			if(sortby){
				sortByRoll();
			}
			else{
				sortByAttendance();
			}
			myfile << "Name\tRoll Number\tAttendance" << endl; 
			for (int i=0;i<n;i++)
			{
				myfile << myList[i].getName() << "\t\t" << myList[i].getRoll() << "\t\t\t" <<  myList[i].getAttendance() << endl ;
			}	
		return true;
		
		}
		else{
			return false;
		}
		
	
	}
	
	
	void updateMobileNumber(int n,int roll,string num){
		int i,flag=0;
		//cout << "Enter Roll Number of Student : " ;
		for( i=0;i<n;i++){
			if(myList[i].getRoll()==roll){
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout << "Roll Number not present in database" << endl;
		}
		else{
			cout << "Roll Number matched!" << endl;
			flag=0;
			while(myList[i].setMobileNumber(num)==0){
				cout << "Enter mail id again" << endl;	
				cin >> num;
				myList[i].setMobileNumber(num);
					
			}
			cout << "Mobile Number updated! " << endl;
			
		}
	}
	
	
	void updateEmailId(int n,int roll,string num){
		int i,flag=0;string email;
		//cout << "Enter Roll Number of Student : " ;
		for( i=0;i<n;i++){
			if(myList[i].getRoll()==roll){
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout << "Roll Number not present in database" << endl;
		}
		else{
			cout << "Roll Number matched!" << endl;
			flag=0;
			while(myList[i].setEmailId(num)==0){
				cout << "Enter mail id again" << endl;	
				cin >> num;
				myList[i].setEmailId(num);
					
			}
			cout << "Email Id updated! " << endl;
			
		}
	}
	
	
};


int main(){

    StudentManager myMgr;
    int n = 0;
    /*Student student2("AB",43,0.7);
    Student student1("CD",32,0.9);
    Student student3("EF",56,1);
    Student student4("GH",78,0.8);
    
    Student myList[10];
    
    myMgr.myList[0] = student1;
    myMgr.myList[1] = student2;
    myMgr.myList[2] = student3;
    myMgr.myList[3] = student4;
    myMgr.myList[4] = myMgr.getStudentInput();*/
    
    
    cout << "\t\t\tStudent Management System" << endl;
    
    int ch=-1;string numb,email,filename;;
    while(ch!=5){
		cout << "Enter 0 to enter student details" << endl;
		cout << "Enter 1 to Update Student Mobile Number" << endl;
		cout << "Enter 2 to Update Student Email Id" << endl;
		cout << "Enter 3 to print Attendance Report By Roll Number" << endl;
		cout << "Enter 4 to print Attendance Report By Attendance" << endl;
		cout << "Enter 5 to exit" << endl;
		cout << "Enter your choice : " ;
    	cin >>ch;
    	switch(ch){
    	
    		case 0 : myMgr.myList[n++] = myMgr.getStudentInput();
    				cout << "Student details registered! " << endl;
    				break;
    		case 1: cout << "Enter roll number of Student : " ;
					int roll; cin >> roll;
		    		cout << "Enter updated mobile number" << endl;
    				cin >> numb;
    				myMgr.updateMobileNumber(n,roll,numb);
    				break;
    		case 2: cout << "Enter roll number of Student : " ;
					cin >> roll;
		    		cout << "Enter updated Email Id" << endl;
    				cin >> email;
    				myMgr.updateEmailId(n,roll,email);
    				break;
    		case 3: cin >> filename;
    				myMgr.printAttendance(filename,true);
    				break;
    		case 4: cin >> filename;
    				myMgr.printAttendance(filename,false);
    				break;
    		case 5: cout << "Exiting system .." << endl;
    		break;
    		default : cout << "Wrong input" << endl;
    	}  
    }
    
    /*cout << "Hello" << endl;
    cout << myMgr.myList[0].getName() << endl;
    
 //   myMgr.sortByRoll();
    cout << endl;
 	myMgr.sortByAttendance();
 //  myMgr.getStudentInput();
    
 	bool print = myMgr.printAttendance("Attendance.txt",true);
    
    if(print){
    
    	cout << "Written to file " << endl;
    }
    
    else{
    
    	cout << "Wrong File Name" << endl;
    }
    cout << myMgr.myList[0].getName() << endl;
    
    //cout << myMgr.m*/
    return 0;

}
