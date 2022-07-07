#include<iostream>
using namespace std;
int main()
{
    int p,r,t,s;
    cout<<endl<<"Enter the principle:";
    cin>>p;
    cout<<endl<<"Enter the rate of intreset:";
    cin>>r;
    cout<<endl<<"Enter the time periods:";
    cin>>t;
    s = (p*r*t)/100;
    cout<<endl<<"Simple Intrest is:"<<s;
    return 0;
}