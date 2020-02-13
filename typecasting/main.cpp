#include <iostream>

using namespace std;
int add(int p,float q)
{
    return(p+q);
}


int main()
{
    int a=10;
    float b=20.20;
    int c;
    c=add(a,b);
    cout<<"\n c="<<c;

        return 0;
}
