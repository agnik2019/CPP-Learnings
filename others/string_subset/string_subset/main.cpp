//
//  main.cpp
//  string_subset
//
//  Created by Agnik Saha on 8/14/20.
//  Copyright © 2020 Agnik Saha. All rights reserved.
//

#include <iostream>
#include<vector>
#include<set>
using namespace std;
void solve(string ip,string op,vector<string> &s1)
{
    
    if(ip.length() == 0)
    {
        //cout<<op<<" ";
        s1.push_back(op);
        
        return;
    }

    
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1,s1);
    solve(ip,op2,s1);
    return;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    string ip;
    set<string> s2;
    vector<string> s1;
    cin>>ip;
    string op="";
    solve(ip,op,s1);
    for(auto i: s1)
        s2.insert(i);
    cout<<"print all subsets "<<endl;
    for(auto k : s1)
        cout<< k<< " ";
    cout<<endl;
    cout<<"print only unique subsets "<<endl;
    for(auto j : s2)
        cout<< j<< " ";
    return 0;
}
