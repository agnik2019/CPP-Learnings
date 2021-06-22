
#include <iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
bool f(int x,int y)
{
    return x>y;
}
void vector_demo()
{
    vector<int> A={11,22,33,44,2,4,3};
    cout<<"second element of array "<< A[1]<< endl;
    sort(A.begin(),A.end()); //O(nlogn) 2,3,4,11,22,33,44
    cout<<"sorted array is ";
    for(int &x: A)
    {
      //  x++;
        cout<<x<<" "<<endl;
    }
    
    bool present = binary_search(A.begin(), A.end(), 3); //true
    present= binary_search(A.begin(), A.end(), 7); //false
    
    A.push_back(100);
    present= binary_search(A.begin(), A.end(), 100);  //true
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
            //2,3,4,11,22,33,44,100,100,100,100,100,123
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);  //>=
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100);   //>
    cout<< "lower bound of 100= "<<*it <<" upper bound of 100= "<< *it2 <<endl;
    cout<<it2-it << endl; //5,occurances of 100

    sort(A.begin(), A.end(), f);
    cout<<"sorted in reverse order: ";
    vector<int>::iterator itr;
    for(itr = A.begin(); itr!=A.end();itr++)
        cout<<*itr<<" ";
    cout<<endl;
}
void set_demo()
{
    set<int> S;
    S.insert(1);
    S.insert(1);
    S.insert(2);
    S.insert(2);
    S.insert(6);
    S.insert(-10); //nlogn
    S.insert(-1);
    for(int x: S)
        cout<< x<<" ";
    cout<<endl;
    
    auto it=S.find(-1);
    if(it == S.end())
        cout<<"not present"<<endl;
    else
        cout<<" present and the value is "<<*it<<endl;
    
    auto it3 = S.upper_bound(-1);
    auto it4 = S.upper_bound(-10);
    cout<< *it3<<" "<< *it4 <<endl;
        
}
void mapdemo()
{
    map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[10023] = 1;
    
    map<char, int > count;
    string x= "agnik saha";
    for(char c : x){
        count[c]++;
    }
    cout<<"no of occurances of a : "<< count['a']<<endl;
    cout<<"no of occurances of g : "<< count['g']<<endl;
    
}
int main()
{
    cout<< "1. demo of vector"<<endl<<endl;
    vector_demo();
    cout<<"*****************************************"<<endl<<endl;
    cout<< "2. demo of set"<<endl;
    set_demo(); //already sort the inserted elements and display
                //unique elements are displayed
    cout<<"******************************************"<<endl<<endl;
    cout<< "3. demo of map"<<endl;
    mapdemo();
    
}
