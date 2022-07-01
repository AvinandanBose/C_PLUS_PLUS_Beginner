/* *************
Factorial of a number
fact(0) = 1 
fact(1) = 1 
fact(2) = fact(1) x 2 = 2 
fact(3) =  fact(2) x 3 = 6 
fact(4) = fact(3)x 4 = 24 
........etc.
********************************/
#include <iostream>
using namespace std;
int main(){
    int fact = 1; 
    int range ;
    cout<<"Enter a range :" ;
    cin >> range ;
    cout << "Factorial of 0 is: 1"<<"\n";
    for(int i=1; i<=range; i++){
        fact = fact * i;
        cout<<"Factorial of:" << i << "is:" << fact <<"\n";
    }
    return 0;
}
