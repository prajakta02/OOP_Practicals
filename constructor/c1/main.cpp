#include <iostream>

using namespace std;
class number
{
    int a,b;
public:
    number()
    {
        cout<<"\n I am Default constructor";
        a=15;
        b=20;
    }
    void display()
    {
        cout<<"\n a="<<a;
        cout<<"\n b="<<b;
    }
    ~number()
    {
        cout<<"\n I am destructor";
    }
};

int main()
{
    cout<<"\n Before object creation";
    number obj;
    cout<<"\n After object creation";
    obj.display();

    return 0;
}
