#include <iostream>
#ifndef PERSON_CPP
	#define PERSON_CPP
	#include "Person.cpp"
#endif
using namespace std;

class Consultant : public Person {

	public:
		Consultant(string name) {
			this->setName(name);
		}

		string introduce() {
			string result = "hello, ";
			result.append("name = ").append(getName());
			result.append(", consultant");
			return result;
		}

		// pure virtual method from Resource
		string getDesc() {
			return "Consultant";
		}
};
