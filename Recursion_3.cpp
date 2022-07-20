/***** ****
 * Sum of Digits
 * ******/
#include <iostream>
using namespace std;
int  SumOfDigits(int);
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of digits: " << SumOfDigits(n) << endl;
    
    return 0;
}
int SumOfDigits(int n){
    if(n == 0){
        return 0;
    }
    int digits = n %10;
    return digits + CountOfDigits(n/10);
}