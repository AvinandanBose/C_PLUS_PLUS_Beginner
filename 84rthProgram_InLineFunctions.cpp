#include<iostream>
using namespace std;
inline float square(float x){
    return x*x;
}   //inline function
int main(){
    float x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Square of the number is: "<<square(x)<<"\n";
    return 0;
}