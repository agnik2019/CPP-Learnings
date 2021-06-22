//  main.cpp
//  l8q3
//
//  Created by Agnik Saha on 10/30/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Rectangle {
     private:
      int length;
      int width;
    public:
     // default constructor
    Rectangle()  {
          length = 0;
           width = 0;
        }
    // param constructor
          Rectangle ( int len, int wid)
          {
            length = len;
             width = wid;
          }
         int getArea()
          {
              return length*width;
          }
  };
class Square: public Rectangle
{
    public:
    Square():Rectangle(){
    
    }
    Square(int len) : Rectangle (len, len)
    {
        
    }
};
bool compare ( Rectangle* v1,Rectangle* v2)
{
    bool result = false;
    if (v1->getArea() < v2->getArea())
    result = true;
    return result;
}
int main()
{
    Rectangle myRect1(2,3);
    Rectangle myRect2(4,5);
    Rectangle myRect3(6,5);
    Square mySquare1(5);
    Square mySquare2(4);
    Square mySquare3(8);
    vector<Rectangle*> myVector;
    myVector.push_back(&myRect1);
    myVector.push_back(&myRect2);
    myVector.push_back(&myRect3);
    myVector.push_back(&mySquare1);
    myVector.push_back(&mySquare2);
    myVector.push_back(&mySquare3);
    sort(myVector.begin(), myVector.end(),compare);
    cout<<"The increasing order of vehicle ";
    for(int i=0;i<6;i++)
        cout<<(*myVector[i]).getArea()<<" ";
      return 0;
 }
