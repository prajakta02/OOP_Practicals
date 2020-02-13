#include <iostream>

using namespace std;
class gparent
{
    int x;
protected:
    int y;
public:
    int z;
    gparent()
    {
        cout<<"Default Gchild constructor";
        x=10;
        y=20;
        z=30;

    }
    int getx()
    {
        return x;

    }
};
class parent:public gparent
{
    int d;
protected:
    int e;
public:
    int f;
    parent()
    {
        cout<<"\n parent construct";
         d=2;
         e=3;
         f=4;
    }
    void show()
    {
        cout<<"\n x="<<getx();
        cout<<"\n y="<<y;
        cout<<"\n z="<<z;
    }
    int getd()
    {
        return d;
    }
};
class child:public parent
{
int h;
public:
    child()
    {
        h=25;
        cout<<"\n Child Constuct";
    }
    void show()
    {
        cout<<"\n d="<<getd();
        cout<<"\n e="<<e;
        cout<<"\n f="<<f;

    }




};

int main()
{
    child obj;
    obj.show();
    obj.parent::show();

    return 0;
}
