
#ifndef PERSON_CPP
	#define PERSON_CPP
	#include "Person.cpp"
#endif
#include "Clerk.cpp"
class Manager : public Clerk{
	
	public :
	
		Manager(string name) : Clerk(name){
			this->designation = "Manager";	
		}
	
		bool approveInvoice(double amount){
			bool result = false;
			if (amount>=0 && amount <= 500)
				result = true;	
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
	
	Manager myManager("DEF");
	cout << myManager.introduce();
	if(myManager.approveInvoice(192))
		cout << "\nApproved" ;
	else 
		cout << "\nNot approved" ;	
		
		
			
		
	return 0;
}*/
