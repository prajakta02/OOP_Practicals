#include <iostream>

using namespace std;
class number
{
    int a,b;
public:
    number()
    {

        cout<<"\n I am default constructor";
        a=15;
        b=20;
    }
    number(int a1,int b1)
    {
        cout<<"\n I am parameterized constructor 2";
        a=a1;
        b=b1;
    }
    number(int c1)
    {
        cout<<"\n I am one parameter constructor";
        a=c1;
        b=1000;
    }
    number(number &n1)
    {
        a=n1.a;
        b=n1.b;
    }
    ~number()
    {
        cout<<"\n I am destructor called for object with a="<<a<<"\n b="<<b;
    }






     void display()
     {
         cout<<"\n a="<<a;
         cout<<"\n b="<<b;
     }
};

int main()
{
    cout<<"\n before object creation";
    number obj;
    cout<<"\n After object creation";
    obj.display();
    cout<<"\n before object creation";
    number obj1(20,30);
    cout<<"\n After object creation";
    obj1.display();
    cout<<"\n before object creation";
    number obj2(70);
    cout<<"\n After object creation";
    obj2.display();
    cout<<"\n Calling copy constructor";
    number obj3(obj1);
    obj3.display();



    return 0;
}
