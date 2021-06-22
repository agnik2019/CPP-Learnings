# include<iostream>
# include<string>
using namespace std;

void printbar(string store[],int sales[],int itr);

int main(){

	const int N=10;
	const string DATE="July 24 2019";
	string name_of_manager;
	cout << "Enter name of manager : " ;
	getline(cin,name_of_manager);
	int sales[N],n,o[N];
	string store[5],k; 
	cout << "Enter number of regions " ;
	cin >> n;	
	getline(cin,k);
	for(int i=0;i<n;i++)
	{
		cout <<"Enter storename : ";
		getline(cin,store[i]);
		//cout << a[i];
	}	
	for (int i=0;i<n;i++){
		cout << "Enter sales of store " << i+1 << " : " ;
		cin >> sales[i];		
	}

	cout << "\n\nDate : " << DATE ;
	cout << "\nName of Manager : " << name_of_manager << "\n" ;
	int large = sales[0],pos=0,sum=0;
	for (int i=0;i<n;i++){
		printbar(store,sales,i);
		if(sales[i]>large){
			large=sales[i];
			pos=i;		
		}		
		sum+=sales[i];
	}

	cout << "\nThe top sales for the day is " << store[pos] << " with sales of $" << large ;

	cout << "\nThe total sales on " << DATE << " is $" << sum << "\n" ;
	
	return 0;
}

void printbar(string store[],int sales[],int itr)
{
	cout << store[itr] << " : ";
	for(int i=1;i<=sales[itr]/100;i++){
		cout << "*";
	}
	cout << "\n" ;

}
