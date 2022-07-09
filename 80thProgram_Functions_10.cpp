/**********
Twin Prime: A twin prime is a prime and having a difference of 2 between the two prime 
numbers. For example, 5 is a twin prime with 7.
Hence : (3,5),(5,7),(11,13),(17,19),
(23,25),(29,31),(41,43),(47,49),(53,55),(59,61),(71,73),(101,103) etc.
are all Twin Primes .
Note : (2,3 )are not at all twin primes as they differ by 1.
**********/
#include<iostream>
using namespace std;
int main()
{
  int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    int temp1 = num1;
    cout << "Enter the second number : ";
    cin >> num2;
    int temp2 = num2;
    int count = 0;
    int count1 = 0;
    while(temp1!=0){
        temp1 = temp1/10;
        count++;
    }
    while(temp2!=0){
        temp2 = temp2/10;
        count1++;
    }
    int k =0;
    for (int i=2;i<=count/2;i++){
        if(num1%i==0){
            k = k + 1;
            break;
        }
    }
    int k1 =0;
    for (int i=2;i<=count1/2;i++){
        if(num2%i==0){
            k1 = k1 + 1;
            break;
        }
    }
    if(k==0 && k1==0){
        if(num1-num2==2 || num2-num1==2){
            cout << "Twin Prime : " << num1 << " and " << num2 << endl;
        }
        else{
            cout << "Not a Twin Prime : " << num1 << " and " << num2 << endl;
        }
    }
    else{
        cout << "Not a Twin Prime : " << num1 << " and " << num2 << endl;
    }
     return 0; 
}

