/****************************************************************
 * Calculation of Power
 **********************************************************/

#include<iostream>
using namespace std;
int power(int ,int);
int main(){
    int n,e;
    cout << "Enter a base: ";
    cin >> n;
    cout << "Enter a exponent: ";
    cin >> e;
    cout << " Base = " <<n << " Exponent = " <<e <<" and power is: "<< power(n,e) << endl;
    return 0;
}
int power(int n, int e){
    if(e == 0){
        return 1;
    }
    return n*power(n,e-1);
}