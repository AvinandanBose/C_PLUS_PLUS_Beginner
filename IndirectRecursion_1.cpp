#include<iostream>
using namespace std;
void funA(double);
void funB(double);
int main(){
    funA(20.0);
    return 0;
}
void funA(double x){
    if(x>1){
        cout<<x <<"\n";
        funB(x -1);
    }
}
void funB(double x){
    if(x>0){
        cout<<x <<"\n";
        funA(x/2);
    }
}