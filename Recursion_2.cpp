/***** ****
 * Sum of Numbers
 * ******/
#include <iostream>
using namespace std;
void sumOfNumbers(int ,int, int);
int main(){
    int range;
    cout << "Enter a range: ";
    cin >> range;
     sumOfNumbers(1,range,0);
    return 0;
}
void sumOfNumbers(int i, int range, int sum){
    if(i==range){
        sum = sum + i;
        cout<<sum<<endl;
        return ;

    }
    sum = sum+i;
    sumOfNumbers(i+1,range,sum);
}