//
//  q3.cpp
//  lab 8
//
//  Created by Agnik Saha on 11/5/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//
#include<iostream>
#include<string>
using namespace std;
class rectangle{
    private:
        int length;
        int width;
        string color;
    public:
        //default constructor
        rectangle(){
            length=0;
            width=0;
            color="red";
        }
        //param constructor
        rectangle(int len,int wid,string col);
        //methods
        int getArea(){
            return length*width;
        }
        int compare(rectangle r1){
            if(getArea() == r1.getArea())
                    return 0;
            else if(getArea() <r1.getArea())
                    return 1;
            else
                return -1;
            }
        string print(){
            return("\n the rectangle has length = "+to_string(length) + " width= "+to_string(width)+", its color is "+color + " and area is "+to_string(getArea())+"\n");
            }
};
        rectangle :: rectangle(int len,int wid,string col){
            length=len;
            width=wid;
            color=col;
        }
int main()
    {
        int l1,l2,w1,w2;
        string c1,c2;
        cout<<"Enter the length,width and colour of rectancle1: ";
        cin>>l1>>w1>>c1;
        cout<<"Enter the legth,width and colour of rectangle 2 : ";
        cin>>l2>>w2>>c2;
        if(l1<=0 ||l2<=0 ||w1<=0 ||w2<=0)

            cout<<"invalid input"<<endl;

        else{

            rectangle myrect1(l1,w1,c1);

            rectangle myrect2(l2,w2,c2);

            cout<<"area of rectangle1 "<<myrect1.getArea()<<endl;

            cout<<"area of rectangle2 "<<myrect2.getArea()<<endl;

            cout<<"comparison  "<<myrect1.compare(myrect2)<<endl;

            cout<<myrect1.print()<<endl;

            cout<<myrect2.print()<<endl;

        }

        return 0;

    }
