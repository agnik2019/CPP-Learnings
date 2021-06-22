#ifndef PERSON_CPP
	#define PERSON_CPP
	#include "Person.cpp"
#endif
#include "Manager.cpp"
#include "Consultant.cpp"
using namespace std;

class Director : public Manager{

	public:
		
		Director(string name) : Manager(name) {
			this->designation = "Director";
		}
		
		bool approveInvoice(double amount){
			bool result = false;
			if (amount>=0 && amount <= 1000)
				result = true;	
			return result;
		}
};


int main(){

	Clerk myClerk("ABC");
	cout << myClerk.introduce() << endl;
	Manager myManager("DEF");
	cout << myManager.introduce() << endl;
	Director myDirector("DEF");
	cout << myDirector.introduce() << endl;
	Consultant myConsultant("GHI");
	cout << myConsultant.introduce() << endl;
	
	double amount;
	cout << "\nEnter amount" ;
	cin >> amount;
	
	//int flag=0;
	
	cout << myClerk.introduce() << endl;
	if(myClerk.approveInvoice(amount))
	{
		cout << "Your Invoice is approved" ;
	}
	else {
		cout << "I am unable to approve. Redirecting to Manager." << endl;
		cout << myManager.introduce() << endl;
		if(myManager.approveInvoice(amount))
			cout << "Your Invoice is approved" ;
		else{
			cout << "I am unable to approve. redirecting to Director. " << endl;
			cout << myDirector.introduce() << endl;
			if(myDirector.approveInvoice(amount)){
				cout << "Your Invoice is approved" ;
			}
			else{
				
				cout << "Your Invoice is not approved :-( " ;
			}
		}
		
		
		
		
		
	}
		
	
	
	
		
	return 0;

}
