/*********
 * 
 * Count Number of Digits using Functions 
 * 
 * ****************************************************************/
#include <iostream>
using namespace std;
int countDigits(int);     // function declaration
int main(){
    int num;
    cout << "Enter a number:" << "\n";
    cin >> num;
    int s = countDigits(num);
    cout<< "Number of Digits in: " << num << "is:" <<s <<"\n";

}

int countDigits(int i)
{
    int s = 0;
    while (i != 0)
    {
        // a = a%10(is un-necessary just for showing mod op)
        i = i / 10;
        s = s + 1;
    }
    return s;
}