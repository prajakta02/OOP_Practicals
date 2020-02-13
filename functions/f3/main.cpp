#include <iostream>

using namespace std;
void fun(int &a)
{
    cout<<"\n Inside fun a="<<a;
    a=500;
    cout<<"\n Inside fun a="<<a;
}

int main()
{
    int c=10;
    cout<<"\n Inside main before fun c="<<c;;
    fun(c);
    cout<<"\n Inside main before fun c="<<c;
    return 0;
}
