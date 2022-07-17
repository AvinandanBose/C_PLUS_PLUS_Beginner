/*********
 * Prime Numbers through Functions 
 * ****************************************************************/
#include <iostream>
using namespace std;
int isPrime(int);
int main(){
    int range;
    cout << "Enter a range:" << "\n";
    cin >> range;
    for(int i =2; i<=range; i++){
        int prime = isPrime(i);
        if(prime ==0){
            cout << i << "\n";
        }
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