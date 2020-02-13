#include <iostream>
#include <cstring>

using namespace std;
class student
{

    int rno;
    string name;
    char clss[3];
    char div;
    float percent;
public:
    void get()
    {

        cout<<"\n Enter your name";//Insertion operator
        cin>>name;//extraction operator
        cout<<"\n Enter your roll no,class,division,percentage";
        cin>>rno>>clss>>div>>percent;


    }
    void put()
    {

        cout<<"\n Name="<<name;
        cout<<"\n Roll no="<<rno;
        cout<<"\n Class="<<clss;
        cout<<"\n Division="<<div;
        cout<<"\n Percentage="<<percent;

    }




};

int main()
{
    int i,n;
    cout<<"\n Enter total number of entries";
    cin>>n;
    student obj[n];
    for(i=0;i<n;i++)
    {

        obj[i].get();
        obj[i].put();
    }
    return 0;
}
