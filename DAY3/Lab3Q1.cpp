#include<iostream>
#include<string>

using namespace std;

class Rectangle{
	
	private :
		
		int length;
		int width;
		string colour;

		Rectangle(){
			length = 0;
			width = 0;
		}		
	
	public :
		
		Rectangle(int len,int wid,string colour);
		
		
		int getArea(){
			
			return length*width;
		}
		
		int compare(Rectangle rect1){
			int c =0;
			if (getArea() == rect1.getArea()){
				 c = 0;
			}
			else if (getArea() > rect1.getArea()){
				c = 1;
			}
			else 
				c = -1;
			
			return c;
		}
		
		string print(){
			
			string c="Length : ";
			c.append(to_string(length));
			c.append(" Width : " ); 
			c.append(to_string(width));
			c.append(" Area : ");
			c.append(to_string(getArea()));
			c.append(" Colour :");
			c.append(colour);
			c.append("\n");	
			
			return c;
		}
};

Rectangle::Rectangle(int len,int wid,string col){
	
	length = len;
	width = wid;
	colour = col;	

}

int main(){
	
	int len1,wid1,len2,wid2;
	string col1,col2;
	cout << "Enter length and width and color of Rectangle 1" << endl;
	cin >> len1;
	cin >> wid1;
	cin >> col1;
	cout << "Enter length and width of Rectangle 2" << endl;
	cin >> len2;
	cin >> wid2;
	cin >> col2;
	if (len1>0 && wid1>0 && len2>0 && wid2>0){
		Rectangle myRect(len1,wid1,col1);
		cout << "Rectangle 1 : " << endl;
		cout << myRect.print();
		//cout << "Area of Rectangle 1: " << myRect.getArea() << endl;
		Rectangle yourRect(len2,wid2,col2);
		//cout << "Area of Rectangle 2: " << yourRect.getArea() << endl;
		cout << "Rectangle 2 : " << endl;
		cout << yourRect.print();
		int cmp = myRect.compare(yourRect);
		if(cmp==0)
			cout << "Equal" << endl;
		else if (cmp == 1)
			cout << "Rectangle 1 is greater than rectangle 2" << endl;
		else 
			cout << "Rectangle 1 smaller than rectangle 2" << endl;	
	}
	else{
		cout << "Wrong input " << endl;
	}
	
	
	return 0;

}
