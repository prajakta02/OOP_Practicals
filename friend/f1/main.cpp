#include <iostream>

using namespace std;
class number
{
    int a,b;
public:
    int c;
    number()
    {
        cout<<"\n default constructor";
        a=10;
        b=20;
        c=500;
        cout<<"\n I am initialized as a="<<a<<"\t b="<<b<<"\t c="<<c;
    }
   friend void display(number obj);


};
        void display(number obj)
         {
             cout<<"\na="<<obj.a;
             cout<<"\n b="<<obj.b;
             cout<<"\n c="<<obj.c;
         }

int main()
{
     number obj;
     display(obj);
    return 0;
}
