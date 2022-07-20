/*********
 * Print Number from 1 to range
 * ****************************************************************/
#include <iostream>
using namespace std;
void printNumber(int );
int main(){
    int range;
    cout << "Enter a range: ";
    cin >> range;
    printNumber(range);
    return 0;
}
void printNumber(int n){
    if(n == 0){
        return;
    }
    cout << n << endl;
    printNumber(n-1);
}