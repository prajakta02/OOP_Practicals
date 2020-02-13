#include <iostream>

using namespace std;

int main()
{
    enum day{Mon=5,Tues,Wed};               //Enumerated Data Type
    day today,tomorrow;
    today=Tues;
    tomorrow=Wed;
    cout<<"Today="<<Tues<<endl;
    cout<<"Tomorrow="<<tomorrow;
    return 0;
}
