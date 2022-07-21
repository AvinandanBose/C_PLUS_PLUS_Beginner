#include<iostream>
using namespace std;
void funA(double,double);
void funB(double, double);
int main(){
    funA(20.0, 21.0);
    return 0;
}
void funA(double x, double y){
    if(x>1){
        cout <<x << " " <<y << endl;
        funB(x+y,y-x);
        
    }
}
void funB(double x, double y){
    if(x>1){
        
        cout <<x << " " <<y << endl;
         funA(x*y, y/x);
        
    }
}