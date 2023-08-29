#include<iostream>
using namespace std;
void myfunction(int a);
int main()
{
int a=30;
myfunction(a);
cout<<" the value is"<<a;
return 0;
}
void myfunction(int a)
{
    a=60;
} 