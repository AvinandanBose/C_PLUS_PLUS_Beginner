#include<iostream>
using namespace std;
int main(){
    cout << "Enter a number: ";
    int num;
    int m;
    int s=0;
    cin >> num;
    while(num>0){
        m = num%10;
        num = num/10;
        s = s+1;
    }
    cout << "The number of digits in the number is: " << s << endl;
    return 0;
}
/*
Workings:
Suppose num =1234
1st process:
m = 1234%10 = 4
num = 1234/10 = 123
s = s+1 = 1
2nd process:
m = 123%10 = 3
num = 123/10 = 12
s = s+1 = 2
3rd process:
m = 12%10 = 2
num = 12/10 = 1
s = s+1 = 3
Therefore length of digit is : 3
*/