#include<iostream>
using namespace std;
int var( int a, int b)
{
    
    return(a+b);
}

int main()
{
    int a ,b;
    cout<<"enter the number\t";
    cin>>a>>b;
    cout<<"sum= "<<var(a,b);
    return 0;
}
