#include <iostream>
using namespace std;

enum VehicleType {SCOOTER, AUTO, CAR, BUS};

class Vehicle {
		
	private:
		VehicleType type;

	public:
		Vehicle(VehicleType type) {
			this->type = type;
		}

		Vehicle() {
			this->type = SCOOTER;
		}		

		VehicleType getType() {
			return type;
		}

		bool operator > (Vehicle vOther) {
			bool result = false;
			if (this->type > vOther.getType())
				result = true;			
			return result;
		}
	
		string getTypeString() {
			string result = "";
			
			switch (this->type) {
				case BUS: result = "bus"; break;
				case CAR: result = "car"; break;
				case AUTO: result = "auto"; break;
				case SCOOTER: result = "scooter"; break;
				default: result = "Vehicle not found";
			}			
			return result;
		}

		friend ostream& operator<<(ostream &out, const Vehicle& v) {
			string result = "";
			
			switch (v.type) {
				case BUS: result = "bus"; break;
				case CAR: result = "car"; break;
				case AUTO: result = "auto"; break;
				case SCOOTER: result = "scooter"; break;
				default: result = "Vehicle not found";
			}

			out << result;
			return out;
		}
	
};




/*
int main() {

	Vehicle myBus(BUS);
	Vehicle myCar(CAR);
	cout << myBus.getTypeString() << endl;

	if (myBus > myCar) {
		cout << "larger" << endl;
	} else {
		cout << "not larger" << endl;
	}


	return 0;
}
*/
