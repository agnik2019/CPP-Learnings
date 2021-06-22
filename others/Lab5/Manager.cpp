#include "Clerk.cpp"

class Manager : public Clerk {

	public:
		Manager(string name) : Clerk(name) {
			this->setDesignation("MANAGER");
		}

		string approveInvoice() {
			return "approval limit = $500";
		}

};




