# include <iostream>
using namespace std;
int count_vowels(string str);
int  count_consonants(string str);
int main()
{
	cout << "A) Count the number of vowels in the string" << endl;
	cout << "B) Count the number of consonants in the string" << endl;
	cout << "C) Count both the vowels and consonants in the string" << endl;
	cout << "D) Enter another string" << endl;
	cout << "E) Exit" << endl;
	string k,ch,str;	
	while(1)
	{	
		cout << "Enter choice : " << endl;
		cin >> ch;
		
		getline(cin, k);
		if(ch=="A"){
			cout << "Enter a string" << endl;
			getline(cin, str);	
		 	cout << "Number of vowels : " << count_vowels(str) << endl ;
		}
		else if (ch=="B"){
			cout << "Enter a string" << endl;
			getline(cin, str);	
		 	cout << "Number of consonants : " << count_consonants(str) << endl ;
		}
		else if(ch=="C"){
			cout << "Enter a string" << endl;
			getline(cin, str);	
		 	cout << "Number of vowels : " << count_vowels(str) << endl ;
		   	cout << "Number of consonants : " << count_consonants(str) << endl ;
		}
		else if(ch=="D"){
		}
		else if(ch=="E")
			break;
		else 
			cout << "Wrong input" << endl ;
	}

	return 0;
}

int count_vowels(string str)
{
		int count=0;
		string c;
		for(int i=0;i<str.length();i++)
		{
			c=str[i];//cout<< i;
			if (c == "a" || c == "e" || c == "i" || c == "o" || c == "u" || c == "A" || c == "E" || c == "I" || c == "O" || c == "U")
			count++;
		}
		return count;
}

int count_consonants(string str)
{
		int count=0;
		string c;
		for (int i=0;i<str.length();i++)
		{
			c = str[i];
			if( ( int(str[i]) >=97 && int(str[i]) <=122 ) || (int(str[i])>=65 && int(str[i])<=90) )
			{
				if (c == "a" || c == "e" || c == "i" || c == "o" || c == "u" || c == "A" || c == "E" || c == "I" || c == "O" || c == "U")
				{
					cout << "";						
				}
				else{
					count++;
				}
			}
		}
		return count;
}
			

