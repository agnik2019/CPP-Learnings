# include <iostream>
using namespace std;

int main(){
	
	const float DISC_1=0.2,DISC_2=0.3,DISC_3=0.4,DISC_4=0.5,COST_PER_UNIT=99;
	int units;
	float price=0,cost;
	cout << "Enter number of units sold : ";
	cin >> units;
	cost = units*COST_PER_UNIT;
	if (units <=0){
		cout << "Invalid input\n" ;
	}
	else if (units>=10 && units<20)
		price=cost-(cost*DISC_1);
	else if(units>=20 && units<50)
		price=cost-cost*DISC_2;
	else if(units>=50 && units<100)
		price=cost-cost*DISC_3;
	else if(units>=100)
		price=cost-cost*DISC_4;
	else
		price=cost;
	
	cout << "Total price is  $" << price ;		
	return 0;
}
