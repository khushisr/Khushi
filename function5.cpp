#include<iostream>
using namespace std;
//void swap( int &a ,int &b );

void swap( int *a,int *b)
{
  int temp;
  temp =*a;
  *a=*b;
 *b=temp;
}
int main()
{
 int a=20;
  int b=50;
  swap(&a,&b);
  cout<<" before swapping values are \n"<<"a="<<a<<"b="<<b<<endl;
  return 0;


}
