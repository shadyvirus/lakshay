#include<iostream>
using namespace std;

int add(int x,int y)
{
    //saksham 1337
    int z;
    z=x+y;
    return z;
}
int main()
{
    int a,b,c;
    cout<<"Enter the numbers you want to add:";
    cin>>a;
    cin>>b;
    c=add(a,b);
    cout<<"your number is:"<<c;
    return 0;
}
