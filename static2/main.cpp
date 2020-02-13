#include <iostream>

using namespace std;
class number
{
    int a;
public:
    int b;
    static int c;
    number()            //Default constructor
    {
        cout<<"\n default constructor";
        a=5;
        b=10;

    }
    static void fun()
    {
        c=10;
    }
};
int number::c;

int main()
{
    number n1,n2;
    number::fun();
    cout<<"\n c="<<number::c;
    number::c=50;
    cout<<"\n c="<<number::c;
    return 0;
}
