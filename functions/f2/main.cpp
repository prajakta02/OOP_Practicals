#include <iostream>

using namespace std;
class number
{
    int a,b;
    public:
    int add()
    {
        int sum;
        a=5;
        b=10;
        sum=a+b;
        return sum;
    }
    int add(int p,int q)
    {
        int sum;
        sum=p+q;
        return sum;
    }


};

int main()
{
    int c;
    number obj;
    cout<<"\n Calling function without parameter";
    c=obj.add();
    cout<<"\n addditon is="<<c;
    cout<<"\n calling function with parameter 20,30";
    c=obj.add(20,30);
    cout<<"\n addition is="<<c;
  return 0;
}
