#include <iostream>

using namespace std;
class number
{
    int a,b;
public:
    void fun()                  //Function without parameter
    {

    a=5;
    b=10;
    }
    void funwithparameter(int p,int q)          //Function with parameter
    {
        a=p;
        b=q;
    }
    void display()
    {
        cout<<"\n a="<<a;
        cout<<"\n b="<<b;
    }
};

int main()
{
    number obj;
    cout<<"\n Calling function without parameter";
    obj.fun();
    obj.display();
    cout<<"\n Calling function with parameter 20,30";
    obj.funwithparameter(20,30);
    obj.display();
    return 0;
}
