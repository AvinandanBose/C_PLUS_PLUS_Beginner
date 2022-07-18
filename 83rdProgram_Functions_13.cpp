#include<iostream>
using namespace std;
void swapp(int , int);
int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"Before Swapping: a="<<a<<" b="<<b<<"\n";
    swapp(a,b);
      
   
}
void swapp(int a, int b){
   a = a^b;
   b = a^b;
   a = a^b;
    cout<<"After Swapping: a="<<a<<" b="<<b<<"\n";;
}