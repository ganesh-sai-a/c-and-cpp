#include<iostream>
#include<cstring>
using namespace std;
class vandc
{
    char x[30];
    public:
    void str(char x[])
    {
        cout<<"\nEnter a string :";
        cin>>x;
    }
};
void count(char x[])
{
    int a,l,count=0,b;
    l=strlen(x);
    for(a=0;a<l;a++)
    {
        b=x[a];
        if(b==97||b==101||b==105||b==111||b==117||b==65||b==69||b==73||b==79||b==85)
        count++;
    }
    cout<<"\nNo. of Vowles :"<<count;
    cout<<"\nNo. of Consonants :"<<l-count;
}
int main()
{
   char x[30];
   vandc obj;
   obj.str(x);
   count(x);
   return 0;
}
