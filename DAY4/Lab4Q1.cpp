#include <iostream>
#include <string>
using namespace std;

class Employee{

	private :
		string name;
		int gender;
		
		Employee(){}
	
	public:
		
		Employee(string name, bool gender){
			
			this->name = name;
			this->gender = gender;
		
		}
		
		Employee(string name, int gender,bool updated){
			
			this->name = name;		
			this->gender = gender;
		}
		
		string getName(){
			return name;
		}
		//before 2014
		bool getGender(){
			
			bool result = false;
			if (gender == 1)
				result = true;
			return result;	
			
		}
		//after 2014
		int getGender(bool updated){
			
			int result = 0;
			
			if(gender == 1)
				result = 1;
			else if (gender == -1)		
				result = -1;
			//cout << result;
			return result;
		}
		//before 2014
		string print(){
		
			string res = "My name is " ;
			res.append(name);
			res.append(" . I am ");
			if(getGender())
				res.append("female");
			else
				res.append("male");
				
			return res;
		}
		//after 2014
		string print(bool updated){
		
			string res = "My name is " ;
			res.append(name);
			res.append(" . I am ");
			if(getGender(1)==0)
				res.append("male");
			else if (getGender(1)==-1)
				res.append("transgender");
			else 
				res.append("female");	
			res.append(" .");	
			return res;
		
		}
};


int main(){

	Employee me("ABC",-1,true);
	//me.getGender(1);
	cout << me.print(1) << endl;




	return 0;

}
