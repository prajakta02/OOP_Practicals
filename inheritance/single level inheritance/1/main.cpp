#include <iostream>

using namespace std;
class parent
{
    int a;
protected:
    int b;
public:
    int c;
    parent()
    {
    cout<<"\n Default constructor";
    a=10;b=20;
    c=30;
    cout<<"\n a="<<a;
    cout<<"\n b="<<b;
    cout<<"\n c="<<c;
    }
    ~parent()
    {
        cout<<"\n Destructor";
    }
    int geta()
    {
        return a;
    }


};
class child:public parent
{
public:
    child()
    {
        cout<<"\n Child Constructor";
    }
    void display()
    {
        cout<<"\n I am Console Output";
        cout<<"\n a="<<geta();
        cout<<"\n b="<<b;
        cout<<"\n c="<<c;
    }
    ~child()
    {
        cout<<"\n Destructor child";
    }
};
int main()
{
    child obj;
    obj.display();
    return 0;
}
