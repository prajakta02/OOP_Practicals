#include <iostream>

using namespace std;                //very very important
class number
{
    int a,b;
public:
    int c;
    number()
     {
         cout<<"\n I am default constructor";
         a=10;
         b=20;
         c=30;
     }
     friend class ABC;
};
class ABC
{
    public:
    void display(number obj)
    {
        cout<<"\n a="<<obj.a;
        cout<<"\n b="<<obj.b;
        cout<<"\n c="<<obj.c;
    }
};
int main()
{
    number obj1;
    ABC obj2;
    obj2.display(obj1);
    return 0;
}
