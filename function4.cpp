#include<iostream>
using namespace std;
void swap(int a, int b);

int main()
{
    int a=30,b=40;
    swap(a,b);

    cout<<"\nthe decleration a="<<a <<"b= "<<b;
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b= temp;
    cout<<"the swap a="<<a <<"b= "<<b;



}
