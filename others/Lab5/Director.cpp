#include "Manager.cpp"
#include "Consultant.cpp"

class Director : public Manager{

	public:
		Director(string name) : Manager(name) {
			this->setDesignation("DIRECTOR");
		}

		string approveInvoice() {
			return "approval limit = $1000";
		}
};

int main() {

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

	return 0;
}
