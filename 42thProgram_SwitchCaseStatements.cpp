#include<iostream>
using namespace std;
int main(){
   char a ;
   cout << " Enter A/B/C :" <<"\n";
    cin >> a;
    switch(a){
        case 'A':
            cout << "A is selected" <<"\n";
            break;
        case 'B':
            cout << "B is selected" <<"\n";
            break;
        case 'C':
            cout << "C is selected" <<"\n";
            break;
        default:
            cout << "Invalid input" <<"\n";
            break;
    }
    return 0;
}