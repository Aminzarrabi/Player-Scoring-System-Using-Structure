#include <iostream>
using namespace std;
int i,n,x,ma=0,mi=1000,e=1,c,mode;
struct counter
{
    string name,fname;
    int point;
};
void input(counter a[],int &n)
{
    cout<<"Enter thr limit ? ";
    cin>>mode;
    for(i=0;i<n;i++)
    {
        cout<<"Player name : ";
        cin>>a[i].name;
        cout<<"Player last-name : ";
        cin>>a[i].fname;
        cout<<"Player point : ";
        cin>>a[i].point;
        cout<<"\n";
    }
}
void print(counter a[],int &n)
{
    cout<<"Name             "<<"Point";
    for(i=0;i<n;i++)
    {
        cout<<"\n\n";
        cout<<a[i].name<<" "<<a[i].fname<<"      "<<a[i].point;
    }    
}
void change1(counter a[],int &n)
{
    for(i=0;i<n;i++)
        cout<<i+1<<"."<<a[i].name<<"\n";
    cout<<"Which player ? ";
    cin>>x;
    if(x>n)
        cout<<"ERROR";
    else
    {
        cout<<"How much point do you want to add ? ";
        cin>>i;
        a[x-1].point+=i;      
    }
    if(a[x-1].point>=100)
        cout<<"\n{ "<<a[x-1].name<<" "<<a[x-1].fname<<" has reached the limit ! }\n";
}
void change2(counter a[],int &n)
{
    for(i=0;i<n;i++)
        cout<<i+1<<"."<<a[i].name<<"\n";
    cout<<"Which player ? ";
    cin>>x;
    if(x>n)
        cout<<"ERROR";
    else
    {
        cout<<"How much point do you want to reduce ? ";
        cin>>i;
        a[x-1].point-=i;      
    }
}
void first(counter a[],int &n)
{
    for(i=0;i<n;i++)
    {
        if(a[i].point>=ma)
        {    
            ma=a[i].point;
            c=i;
        }
    }
    cout<<"The First Player is "<<a[c].name<<" "<<a[c].fname<<" with "<<a[c].point<<" point";
}
void last(counter a[],int &n)
{
    
    for(i=0;i<n;i++)
    {
        if(a[i].point<=mi)
        {
            mi=a[i].point;
            c=i;
        }
    }
    cout<<"The Last Player is "<<a[c].name<<" "<<a[c].fname<<" with "<<a[c].point<<" point";
}
int main()
{
    cout<<"\nHow many players ? ";
    cin>>n;
    cout<<"\n";
    counter a[n];
    input(a,n);
    while(e!=0)
    {
    cout<<"\n-------------------\n";
    cout<<"{ The limit is "<<mode<<" }\n";
    cout<<"1.Print\n";
    cout<<"2.Add\n";
    cout<<"3.Reduce\n";
    cout<<"4.First Player\n";
    cout<<"5.Last Player\n";
    cout<<"6.Exit";
    cout<<"\n-------------------\n";
    cout<<"What is your request ? ";
    cin>>e; 
    if(e==1)
        print(a,n);
    if(e==2)
        change1(a,n);
    if(e==3)
        change2(a,n);
    if(e==4)
        first(a,n);
    if(e==5)
        last(a,n);
    if(e==6)
    {
        cout<<"End"; 
        break;
    }
    }
    return 0;
}


