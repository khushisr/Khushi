#include<iostream>
using namespace std;
void sum();
int main()
{
    cout<<"enter the number";
    sum();
    sum();

    sum();

    return 0;
}
void sum()
{
    int a,b,sum;
    cin>>a>>b;
    sum=a+b;
    cout<<sum<<"\n";
}