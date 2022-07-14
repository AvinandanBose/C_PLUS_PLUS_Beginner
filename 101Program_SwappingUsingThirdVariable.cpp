#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping, first number is "<<a<<" and second number is "<<b;
    return 0;
}