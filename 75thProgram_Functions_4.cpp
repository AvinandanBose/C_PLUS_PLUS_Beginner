/*********
 * Prime Numbers through Functions 
 * ****************************************************************/
#include <iostream>
using namespace std;
int isPrime(int);
int main(){
    int num;
    cout << "Enter a number:" << "\n";
    cin >> num;
    int prime = isPrime(num);
    if(prime ==0){
        cout << "The number is  prime" << "\n";
    }
    else{
        cout << "The number is not prime" << "\n";
    }
    
    return 0;
}

int isPrime(int num)
{
     int flag = 0;
    for (int i = 2; i <= num/2; i++)
   
    {
        if (num % i == 0)
        {
            flag = flag + 1;
            break;
        }
    }
    return flag;
}