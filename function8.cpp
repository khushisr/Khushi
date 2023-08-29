#include<iostream>
using namespace std;
void factorial();
int main()
{
cout<<"enter number ";
factorial();
factorial();
return 0;

}
void factorial()
{
    int fact=1,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of "<<n<<"is "<<fact;
}