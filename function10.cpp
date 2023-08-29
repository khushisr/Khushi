#include<iostream>
using namespace std;
void odd(int x);
void even(int x);
int main()
{
    int i;
    do{
        cout<<" please enter number ";
        cin>>i;
        odd(i);
    } while (i!=0);
    return 0;
}
void odd ( int x)
{
       if ((x%2)!=0)
      cout<<" it is odd"<<endl;
       else even (x);
}
void even ( int x)
{
 if((x%2)==0) 
 cout<<" it is even"<<endl;
 else odd (x);
}



