#include<iostream>

#include "Student.cpp"

using namespace std;

class StudentManager{
	
	public :
	
		Student myList[10];
	
	void sortByRoll(Student* sptr){
	
		//cout << myList[0].getRoll();
		
		Student sortListRoll[10];
		
		int min_idx,i,j;
		int n=4,p,l;
    	
    	Student temp;
    	
    	for(int i=0;i<4;i++)
    	{
    		for(int j=0;j<n-i+1;j++){
    			if((sptr+j)->getRoll()>(sptr+j+1)->getRoll()){
    				temp = *(sptr+j);
    				*(sptr+j) = *(sptr+j+1);
    				*(sptr+j) = temp;
    			}
    		}
    	}
    	for(int i=0;i<n;i++){
    	cout << myList[i].getRoll()<<endl;
    	}
    	
    	//return myList;
	}
	
	void sortByAttendance(Student *sptr){
	
	//Student sortListRoll[10];
		
		//int min_idx,i,j;
		int n=4;//p,l;
    	
    	Student temp;
    	
    	for(int i=0;i<4;i++)
    	{
    		for(int j=0;j<4;j++){
    			if((sptr+j)->getAttendance()>(sptr+j+1)->getAttendance()){
    				temp = *(sptr+j);
    				*(sptr+j) = *(sptr+j+1);
    				*(sptr+j) = temp;
    			}
    		}
    	}
    	
    	for(int i=0;i<n;i++){
    		cout << myList[i].getAttendance()<<endl;
    	}
	
	
	}
	
	
	

};


int main(){

	StudentManager myMgr;
	
	Student student2("AB",43,0.7);
	Student student1("CD",32,0.9);
	Student student3("EF",56,0.8);
	Student student4("GH",78,0.5);
	
	Student myList[10];
	
	myMgr.myList[0] = student1;
	myMgr.myList[1] = student2;
	myMgr.myList[2] = student3;
	myMgr.myList[3] = student4;
	
	cout << "Hello" << endl;
	cout << myMgr.myList[0].getName() << endl;
	
	//myMgr.sortByRoll(myList);
	cout << endl;
	myMgr.sortByAttendance(myList);
	//myMgr.getStudentInput();
	
	cout << myMgr.myList[0].getName() << endl;
	
	//cout << myMgr.m
	return 0;

}
