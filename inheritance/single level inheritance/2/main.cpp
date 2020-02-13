#include <iostream>

using namespace std;
class base
{
    int x;
protected:
    int y;
public:
    int z;
    base()
    {
        cout<<"\n Default constructor";
        x=10;
        y=20;
        z=30;
    }
    int getx()
    {
        return x;
    }
};
class derived:protected base
{
    int d;
public:
    derived()
    {
        d=25;
        cout<<"\n Derived";
    }
    void show()
    {
        cout<<"\n x="<<getx();
        y=500;
        cout<<"\n y="<<y;
        z=100;
        cout<<"\n z="<<z;
    }

};

int main()
{
    derived dobj;
    dobj.show();
    base bobj;
    bobj.z=45;
    cout<<"\n Base obj z="<<bobj.z;
    return 0;
}
