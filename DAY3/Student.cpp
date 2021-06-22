#include<iostream>
#include<string>

using namespace std;

class Student{
	
	private :
		
		string name;
		int roll;
		//string mobileNumber;
		//string email;
		double attendance;	
	
	public:
	 
	 Student (){}
	 
	 Student(string name,int roll,double attendance){
	 	this->name = name;
	 	this->roll = roll;
	 	this->attendance = attendance;
	 
	 }
		
		string getName(){
			
			return name;	
			
		}
		
		void setName(string name){
			this->name = name;
		}
		
		int getRoll(){
		
			return roll;
		}
		
		void setRoll(int roll){
		
			this->roll = roll;
		}
		
		
		double getAttendance(){
		
			return attendance;
		}
		
};	
/*Student::Student(string n,int r,float atten){
	
	name =n;
	roll = r;
	//mobile = mobileNumber;
	//email = emailA;
	attendance = atten;
}*/
