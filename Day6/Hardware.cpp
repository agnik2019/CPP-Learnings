#include <iostream>
#ifndef RESOURCE_CPP
	#define RESOURCE_CPP
	#include "Resource.cpp"
#endif

const string SERVER = "server";
const string DESKTOP = "desktop";
const string LAPTOP = "laptop";

class Hardware : public Resource {

	private:
		string type; // SERVER, DESKTOP, LAPTOP
		string id;

	public:
		Hardware(string id, string type) {
			this->id = id;
			this->type = type;
		}

	string getDesc() {
		return type;
	}
	
	string getId() {
		return id;
	}
};
