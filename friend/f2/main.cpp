#include <iostream>

using namespace std;
class number
{
    int a,b;
public:
    int c;
    number()
    {
        cout<<"\n default constructot";
        a=10;
        b=20;
        c=30;

    }
    friend class num;
};
class num
{
public:
    void display(number ob)
    {
        cout<<"\n a="<<ob.a;
        cout<<"\n b="<<ob.b;
        cout<<"\n c="<<ob.c;

    }
};
int main()
{
    number obj;
    num obj1;
    obj1.display(obj);
    return 0;
}
