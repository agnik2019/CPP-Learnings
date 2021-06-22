#include <iostream>
#include "Director.cpp"
#include "Consultant.cpp"
#include "Hardware.cpp"
using namespace std;

const int NUM_RESOURCE = 10;

int main() {

	Hardware myHardware("H000000001", SERVER);
	Resource* pHardware = &myHardware;
	cout << pHardware->getDesc() << endl;	

	Clerk myClerk("anand");
	Resource* pClerk = &myClerk;
	cout << pClerk->getDesc() << endl;
	
	Consultant myConsultant("deepak");
	Resource* pConsultant = &myConsultant;
	cout << pConsultant->getDesc() << endl;

	Resource* resourceList[NUM_RESOURCE];
	resourceList[0] = pHardware;
	resourceList[1] = pClerk;
	resourceList[2] = pConsultant;
	for (int i=0; i<3; i++) {
		cout << resourceList[i]->getDesc() << endl;
	}

/*
	Clerk myClerk("anand");
	cout << myClerk.introduce() << endl;
	cout << myClerk.approveInvoice() << endl;

	Manager myManager("baishaiki");
	cout << myManager.introduce() << endl;
	cout << myManager.approveInvoice() << endl;

	Director myDirector("chandana");
	cout << myDirector.introduce() << endl;
	cout << myDirector.approveInvoice() << endl;

	Consultant myConsultant("deepak");
	cout << myConsultant.introduce() << endl;
*/
	return 0;
}
