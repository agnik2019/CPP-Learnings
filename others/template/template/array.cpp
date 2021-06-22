#include <iostream>
#include "Vehicle.cpp"
using namespace std;
const int ARRAY_SIZE = 10;
template <class T> class MyArray {
private:
T theArray[ARRAY_SIZE];
int numElements = 0;
public:
MyArray() {}
bool add(T element) {
bool result = false;
if (numElements < ARRAY_SIZE) {
theArray[numElements] = element;
numElements++;
result = true;
}
return result;
}
// prints elements in MyArray
void print() {
for (int i=0; i<numElements; i++) {
cout << "[" << i << "] = " << theArray[i] << endl;
}
}
};
int main() {
MyArray<int> iArray;
iArray.add(1);
iArray.add(10);
iArray.add(100);
iArray.print();
MyArray<Vehicle> vArray;
vArray.add(Vehicle(Auto));
vArray.add(Vehicle(Bus));
vArray.add(Vehicle(Car));
vArray.print();
return 0;
}
