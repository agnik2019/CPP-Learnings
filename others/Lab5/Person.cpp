#include <iostream>
using namespace std;

class Person {
	
	private:
		string name;

	public:
		string getName() {return name;}
		void setName(string name) {
			this->name = name;
		}

		virtual string introduce() = 0; 

};
