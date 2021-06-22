# include<iostream>
# include <fstream>

using namespace std;

void printbar(ofstream &myfile,string store[],double sales[],int itr);
void getSales(double *ptr, int n);
double calcTotalSales(double * ptr, int size);
int main(){

	const string DATE="July 24 2019";
	string name_of_manager;
	cout << "Enter name of manager : " ;
	getline(cin,name_of_manager);
	int n=5;
	double sales[5];
	double *ptr = sales;
	string store[5]; 
	store[0] = "City Centre";
	store[1] = "Park Street";
	store[2] = "Rajarhat";
	store[3] = "South City";
	store[4] = "Dum Dum";
	ofstream myfile;
	getSales(ptr,n);	
	myfile.open("Sales_Report.txt");	
	if(myfile){

		myfile << "\nDate : " << DATE ;
		myfile << "\nName of Manager : " << name_of_manager << "\n" ;
		int large = sales[0],pos=0;
		for (int i=0;i<n;i++){
			printbar(myfile,store,sales,i);
			if(sales[i]>large){
				large=sales[i];
				pos=i;		
			}		
		}

		myfile << "\nThe top sales for the day is " << store[pos] << " with sales of $" << large ;

		myfile << "\nThe total sales on " << DATE << " is $" << calcTotalSales(ptr,n) << "\n" ;
	

		myfile.close();
	}
	else{
	
	cout << "Unable to open file" ;
	
	}
	return 0;
}

void printbar(ofstream &myfile, string store[],double sales[],int itr)
{
	
		myfile <<"\n\n" << store[itr] << " : ";
		for(int i=1;i<=sales[itr]/100;i++){
			myfile << "*" ;
		}	
		myfile << "\n" ;
}
double calcTotalSales(double * ptr, int n)
{
		double sum = 0;
		for (int i=0;i<n;i++){
			sum+= *(ptr + i);
		}
		return sum;
}

void getSales(double *ptr,int size)
{
	
	for (int i=0;i<5;i++){
			cout << "Enter sales of store " << i+1 << " : " ;
			cin >> *(ptr+i);		
		}


}
