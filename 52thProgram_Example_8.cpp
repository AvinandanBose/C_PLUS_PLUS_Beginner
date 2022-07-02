/*Sum of all digits upto a given range*/
#include<iostream>
using namespace std;
int main(){
    int range, sum = 0;
    cout<<"Enter a range :" ;
    cin >> range;
    for(int i =1; i<=range;i++){
        sum = sum + i;
    }
    cout << "Sum upto a given a range:" << range << "="<< sum << endl; 
    return 0;
}