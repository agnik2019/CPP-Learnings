#include<iostream>
using namespace std;

class Clerk{

	public: 
	string name;
	string designation;
	
	
	Clerk(string name){
		this->setName(name);
		this->designation = "Clerk";
	}
	
	
	void setName(string name){
		this->name = name;
	
	}

	void setDesignation(string designation){
		this->designation = designation;
	}
	
	string getName(){
		return name;
	}
	
	string getDesignation(){
		return designation;
	}
	
	string introduce(){
		
		string s;
		s.append("Hello!\nMy name is ");
		s.append(getName());
		s.append("\nMy designation is ");
		s.append(getDesignation());	
		return s;
	}
	
	bool approveInvoice(double amount){
		bool result = false;
		if (amount <= 100){
			result =true;
		}
		return result;	
	}
	
};


int main(){

	Clerk myClerk("ABC");
	cout << myClerk.introduce();
	if(myClerk.approveInvoice(192))
		cout << "\nApproved" ;
	else 
		cout << "\nNot approved" ;
	return 0;
}
