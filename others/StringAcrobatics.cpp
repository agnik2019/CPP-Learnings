// sample code taken from http://www-h.eng.cam.ac.uk/help/tpl/languages/C++/1BComputingOO/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool myFavouriteChar(char c) {
		bool result = false;
		if (c=='g')
			result = true;
		return result;
}

int main() {
  	string s = "a long string";

	// replacing characters
	replace(s.begin(), s.end(), 's', 'S');
	cout << s << endl;

	// now reverse the whole string from the beginning to the end
  	reverse(s.begin(), s.end());
  	cout << s << endl;
 
	// count the number of times 'n' appears in the string s
	cout << "n is in string s "  << count(s.begin(), s.end(), 'n') << " times" << endl;

	// count my favourite character
	cout << count_if(s.begin(), s.end(), myFavouriteChar) << " times" << endl;

	string::iterator it;
  	it = find (s.begin(), s.end(), 'w');
  	if (it == s.end())
    	cout << "w not found " << endl;
  	else
    	cout << "w is in string s " << endl;


}
