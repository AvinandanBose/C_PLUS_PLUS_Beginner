#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,temp, digit;
    cout<<"Enter the number: ";
    cin>>n;
    temp=n;

    while(n!=0)
    {
        digit = n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<"Sum of digits of "<<temp<<" is "<<sum;
    return 0;
}