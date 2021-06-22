#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() { 

	int i=3; 
	vector<int> v(i); // Declare a vector of 3 elements. 
	v[0] = 7; 
	v[1] = v[0] + 3; 
	v[2] = v[0] + v[1]; 
	for (int i=0;i<3;i++) 
		cout << "[" << i << "]=" << v[i] << endl;
	 
}
