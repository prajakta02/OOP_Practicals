#include <iostream>

using namespace std;
class number
{
    int a,b;
  public:
      void accept();                    // only Declaration

};
void number::accept()
{
    cout<<"\n Enter two numbers";
    cin>>a>>b;
    cout<<"a="<<a<<"\n b="<<b;
}

int main()
{
    number obj;
    obj.accept();

       return 0;
}
