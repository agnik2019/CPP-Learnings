#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout<<"Display of Base"<<endl;
    }
};
class Derived:public Base{
public:
    void show()
    {
        cout<<"show of derived"<<endl;
    }
    
};

int main() {
    // insert code here...
    //Base b;
    //b.display();
    Derived d;
    d.display();
    d.show();
    return 0;
}
