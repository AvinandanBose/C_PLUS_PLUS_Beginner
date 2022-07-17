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
int IsPrime(int);
 
int main(){
    int range ; 
    cout << "Enter the range : ";
    cin >> range;
    for(int i= 2; i<=range; i++){
        if(IsPrime(i) && IsPrime(i+2)){
            cout << "(" << i << "," << i+2 << ")" << "\n";
        }
    }
    return 0;
}

int IsPrime(int num)
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
    if(flag==0){
        return num;
    }
    return 0;
}