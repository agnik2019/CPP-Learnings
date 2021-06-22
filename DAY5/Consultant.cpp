
#ifndef PERSON_CPP
	#define PERSON_CPP
	#include "Person.cpp"
#endif

class Consultant : public Person{

	public :
	Consultant (string name){
		this->setName(name);
	}
	
	
	string introduce(){
	
		string s;
		s.append("Hey!My name is ");
		s.append(getName());
		s.append("I am a consultant.");
		return s;
	}

};
