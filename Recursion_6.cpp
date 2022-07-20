/***** ****
 * Fibonacci Series
 * *****/

#include <iostream>
using namespace std;
void fibonacci(int, int, int);
int main(){
    int a =0, b = 1, range;
    cout << "Enter a number: ";
    cin >> range;
    cout << "Fibonacci series upto " << range << "\n";
    cout<< a<<"\n";
    cout<< b<<"\n";
    fibonacci(a,b,range-2); //as 0 and 1 already over.
    
    return 0;
}
void fibonacci(int a, int b, int range){
    if(range == 0){
        return;
    }

    int c = a+b;
    if(c>0){
        cout<< c<<"\n";

    }
    
    fibonacci(b,c,range-1);
}
