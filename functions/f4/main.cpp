#include <iostream>

using namespace std;
void fun(char *p)
{
    cout<<"\n Inside fun c="<<*p;
    *p=67;
    cout<<"\n INside fun c="<<*p;
}

int main()
{
    char c='A';
    cout<<"\n Inside main before fun c="<<c;
    fun(&c);
    cout<<"\n inside main after fun c="<<c;
       return 0;
}
