#include <iostream>

using namespace std;
class Complex
{
    int real,img;
public:
    void get()
    {
        cout<<"Enter real and imaginary parts";
        cin>>real>>img;
    }
    Complex add(Complex c1,Complex c2)
    {
        Complex a;
        a.real=c1.real+c2.real;
        a.img=c1.img+c2.img;
    }
    void display()
    {
        cout<<real<<"+"<<"i"<<img;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.get();
    c2.get();
    c3=add(c1,c2);
    c3.display();

    return 0;
}
