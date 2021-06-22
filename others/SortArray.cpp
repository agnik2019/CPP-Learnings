#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int a[5]; 
	a[0] = 5; 
	a[1] = 3; 
	a[2] = 7; 
	a[3] = 9; 
	a[4] = 1; 
	
	sort(a, a+5); 

	for (int i = 0; i < 5; i++) cout << a[i] << endl;

}
