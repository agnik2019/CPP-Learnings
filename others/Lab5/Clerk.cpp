#include <iostream>
#ifndef PERSON_CPP
	#define PERSON_CPP
	#include "Person.cpp"
#endif
using namespace std;

class Clerk: public Person {

	private:
		string designation;		

	public:
		Clerk(string name) {
			this->setName(name);
			this->designation = "CLERK";
		}				

		string getDesignation() {
			return designation;
		}

		void setDesignation(string designation) {
			this->designation = designation;
		}
		
		virtual string approveInvoice() {
			return "approval limit = $100";
		}

		string introduce() {
			string result = "hello, ";
			result.append("name = ").append(getName());
			result.append(", ");
			result.append("designation = ").append(designation);

			return result;
		}
	
};





