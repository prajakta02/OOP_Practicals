#include <iostream>

using namespace std;
class complex
{
    int real,img;
public:
    void get()
    {
        cout<<"\n Enter real and imaginary parts";
        cin>>real>>img;
    }
    complex operator+(complex c2)
    {
        complex a;
        a.real=real+c2.real;
        a.img=img+c2.img;
        return a;
    }
    complex operator-(complex c2)
    {
        complex a;
        a.real=real-c2.real;
        a.img=img-c2.img;
        return a;
    }
    complex operator*(complex c2)
    {
        complex a;
        a.real=(real*c2.real)-(c2.img*img);
        a.img=(img*c2.real)+(c2.img*real);
        return a;
    }
    void put()
    {
        cout<<real<<"+"<<"i"<<img;
    }
    void operator++()
    {
        real++;
        img++;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    c3=c1+c2;
    c3.put();
    cout<<"\n ";
    c3=c1-c2;
    c3.put();
    cout<<"\n ";
    c3=c1*c2;
    c3.put();
    cout<<"\n ";
    ++c3;
    c3.put();
    return 0;
}
