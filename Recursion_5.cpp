/***** ****
 * Factorial of a number
 * ********************************/
#include<iostream>
using namespace std;
int calcFactorial(int );
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << calcFactorial(n) << endl;
    return 0;
}
int calcFactorial(int n){
    if(n==1 || n == 0){
        return 1;
    }
    return n*calcFactorial(n-1);
}