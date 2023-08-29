#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<" enter the numbers ";
    cin>>a>>b>>c>>d;
    if ((a>b) && (a>c) && (a>d))
     cout<<" a  is greater";
    else if ((b>a) && (b>c) && (b>d))
        cout <<" b is greater "<<b;
    else if ( c>a || c> b || c>d)
    cout<< " c is greater"<< c;
    else 
    cout << "d is greater";
    return 0;
}