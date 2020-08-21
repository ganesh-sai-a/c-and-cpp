#include<iostream>
#include<cstdlib>
using namespace std;
class caluculator
{
    int x,y;
    public:
    caluculator()
    {
       cout<<"\nEnter value of x :";
       cin>>x;
       cout<<"Enter value of y :";
       cin>>y;
    }
    void sum()
    {
        cout<<"\n\nSum of x and y is :"<<x+y;
    }
    void diff()
    {
        cout<<"\n\nDifference of x and y is :"<<x-y;
    }
    void pro()
    {
        cout<<"\n\nProduct of x and y is :"<<x*y;
    }
    void quo()
    {
        cout<<"\n\nQuotient of x and y is :"<<x/y;
    }
    void rem()
    {
        cout<<"\n\nReminder of x and y is :"<<x%y;
    }
    ~caluculator()
    {
        cout<<"\n\nDestructor called!!\n\n";
    }
};
int main()
{
    int opt1,opt2;
    while(1)
    {
        cout<<"\nSelect an option\n1. Add\n2. Subtract\n3. Product\n4. Quotient\n5. Reminder\n";
        cin>>opt1;
        caluculator obj;
        if(opt1==1)
        obj.sum();
        else if(opt1==2)
        obj.diff();
        else if(opt1==3)
        obj.pro();
        else if(opt1==4)
        obj.quo();
        else if(opt1==5)
        obj.rem();
        else
        cout<<"\nInvalid Input";
        cout<<"\n\nDo you want to perform another operation";
        cout<<"\nSelect an option\n1. Yes\t2. No\n";
        cin>>opt2;
        if(opt2==2)
        {
            exit(0);
        }
    system("CLS");
    }
    return 0;
}
