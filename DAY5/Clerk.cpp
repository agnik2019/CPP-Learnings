#ifndef PERSON_CPP
	#define PERSON_CPP
	#include "Person.cpp"
#endif
class Clerk : public Person{

	public: 
	string designation;
	
	
	Clerk(string name){
		this->setName(name);
		this->designation = "Clerk";
	}

	void setDesignation(string designation){
		this->designation = designation;
	}
	
	string getDesignation(){
		return designation;
	}
	
	string introduce(){	
		string s;
		s.append("\nHello!\nMy name is ");
		s.append(getName());
		s.append("\nMy designation is ");
		s.append(getDesignation());	
		return s;
	}
	
	bool approveInvoice(double amount){
		bool result = false;
		if (amount>=0 && amount <= 100){
			result =true;
		}
		return result;	
	}
	
};


/*int main(){

	Clerk myClerk("ABC");
	cout << myClerk.introduce();
	if(myClerk.approveInvoice(192))
		cout << "\nApproved" ;
	else 
		cout << "\nNot approved" ;
	return 0;
}*/
