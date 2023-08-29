#include<iostream>
using namespace std;
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x=50,y=70;
    swap(&x,&y);
    cout<<" swapping are \n"<<"A="<<x<<"\n"<<"B="<<y<<endl;
    return 0;
}

