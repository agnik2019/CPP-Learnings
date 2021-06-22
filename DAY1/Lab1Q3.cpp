# include<iostream>
# include<string>
using namespace std;

int main()
{
	
	int attempt,guesses=0,num;
	num=(rand() % 10) + 2;
	//cout << num;
	while(1)
	{
		cout << "Enter your guess: " ;
		cin >> attempt;
		guesses++;
		if(attempt<num)
			cout << "Guess is low!";
		else if (attempt>num)
			cout << "Guess is high!";
		else{
			cout << "Guess is correct. Number of attempts : " << guesses << " !\n" ;
			break;
		}
	} 

	return 0;
}
