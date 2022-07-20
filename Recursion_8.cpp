#include<iostream>
using namespace std;
int prime(int, int);
int main()
{
    int range, p;
    cout << "Enter a range: ";
    cin >> range;
   cout << "Prime numbers in the " << range << "are: " <<"\n";
   for(int i = 2; i <= range; i++){
    p = prime(i, i/2);
    if(p == 1){
        cout << i << "\n ";
    }
   }
    return 0;
}
int prime(int n, int i)
{
    if (i ==1){
        return 1;

    }
        
    else if (n % i == 0)
    {
        return 0;
    }
  return prime(n,i-1);
        
}