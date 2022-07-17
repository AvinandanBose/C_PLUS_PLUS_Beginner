/****************************************************************
 * Factorial of a number using Function
 * ****************************************************************/
#include <iostream>
using namespace std;
int factorial(int);
int main(){
    int range;
    cout << "Enter a range:" << "\n";
    cin >> range;
    if(range>=0){
        for(int i =0; i<=range; i++){
            int fact = factorial(i);
            cout << "Factorial of the number:" << i << "is:" << fact << "\n";
        }
    }
    else{
        cout << "Factorial of the number is:"
             << "Not possible"
             << "\n";
    }
  

    
    return 0;
}
int factorial(int num){
    int fact = 1;
    for(int i = 1; i<=num; i++){
        fact = fact*i;
    }
    return fact;
}