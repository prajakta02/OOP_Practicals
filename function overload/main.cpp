#include <iostream>

using namespace std;
void add()
{
    int sum;
    int a=10;
    int b=20;
    sum=a+b;
    cout<<"\n sum="<<sum;
}
void add(int p,int q)
{
    int r;
    r=p+q;
    cout<<"\n Sum="<<r;
}
void add(float p ,int q )
{
    float r;
    r=p+q;
    cout<<"\n Sum="<<r;
}

int main()
{    int a=10,b=20;
     float c=30.26;
    add();
    add(a,b);
    add(c,b);
    return 0;
}
