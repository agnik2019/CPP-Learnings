#include "Manager.cpp"

class Director : public Manager{

	public:
		Director(string name) : Manager(name) {
			this->setDesignation("DIRECTOR");
		}

		string approveInvoice() {
			return "approval limit = $1000";
		}
};


