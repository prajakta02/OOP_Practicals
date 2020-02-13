#include <iostream>

using namespace std;
class number
{
    int a;
public:
    int b;
    static int c;
    number()
    {
        cout<<"\n default constructor";
        a=5;
        b=20;
    }
    void display()
    {
        cout<<"\n a="<<a;
        cout<<"\n b="<<b;
        cout<<"\n c="<<c;
    }
};
int number::c;
int main()
{
    cout<<"\n c="<<number::c;
    number::c=77;
    cout<<"\n c="<<number::c;
    number n1,n2,n3;
    n1.b=100;
    n1.c=500;
    n1.display();
    n2.b=200;
    n1.c=700;
    n2.display();
    return 0;
}
