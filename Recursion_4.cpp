/***** ****
 * Count of Digits
 * ******/
#include <iostream>
using namespace std;
int  CountOfDigits(int, int);
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of digits: " << CountOfDigits(n,0) << endl;
    
    return 0;
}
int CountOfDigits(int n, int sum){
    if(n == 0){
        return sum;
    }
    CountOfDigits(n/10, sum+1);
   
    
}