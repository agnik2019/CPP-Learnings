# include<iostream>
# include<fstream>
using namespace std;

int main()
{
	ifstream infile;
	int n=0;
	string country[15],temp;
    infile.open("countries.txt");
	if(infile){
		while (!infile.eof()) {
		   		getline(infile,country[n]);
				n++;
				//cout << country[i] << endl;
		 }
		 /*for(i=0;i<14;i++)
		{	
			cout << i;
			cout << country[i] << endl;
		}*/	
		 for(int i=0;i<n;i++)
		 {
			for(int j=0;j<n-1;j++)
			{
				if(country[j][0]<country[j+1][0])
				{
					temp = country[j];
					country[j] = country[j+1];
					country[j+1] = temp;
				}
			}	
		}	
		//cout << temp;
		for(int i=0;i<n;i++)
		{	
			//cout << i;
			cout << country[i] << endl;
		}	
		 infile.close();
	}
	else{
		cout << "Unable to open file";
	}
}

