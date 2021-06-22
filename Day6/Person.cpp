#include <iostream>
#ifndef RESOURCE_CPP
	#define RESOURCE_CPP
	#include "Resource.cpp"
#endif
using namespace std;

class Person : public Resource {
	
	private:
		string name;
		string id;

	public:
		string getName() {return name;}
		void setName(string name) {
			this->name = name;
		}

		string getId() {
			return id;
		}			
		void setId(string id) {
			this->id = id;
		}

		virtual string introduce() = 0; 

};
