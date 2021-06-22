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
		// constructor with parameters name and id		
/*		Clerk(string name, string id) {} */
		
		Clerk(string name) {
			this->setName(name);
			this->designation = "CLERK";
			//this->id = id; // compilation error, id is private attribute of Person
		}				

		// pure virtual method from Resource
		string getDesc() {
			return designation;
		}

		string getDesignation() {
			return designation;
		}

		void setDesignation(string designation) {
			this->designation = designation;
		}
		string approveInvoice() {
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





