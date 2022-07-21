#include<iostream>
using namespace std;
int main(){
    float f = 10.5f; 
    int i = f; // implicit conversion
    cout<<"The value of i is "<<i<<"\n";
    int j = f/3;// implicit conversion
    cout<<"The value of j is "<<j<<"\n";
    return 0;
}