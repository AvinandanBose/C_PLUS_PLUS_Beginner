/*************
 * Fibonacci sequence of a number : 
 * ---------------------------------
 * Fibonacci sequence is a series of numbers in which each number 
 * is the sum of the two preceding numbers.
 * 
 * F(0)=0 , F(1)=1 , F(2)= F(1) + F(0),
 * F(3) = F(2) + F(1), F(4) = F(3) + F(2), F(5) = F(4) + F(3), ...
 * *******/

    #include <iostream>
    using namespace std;
    int main()
    {
        int range;
        cout << "Enter a range :";
        cin >> range;
        int a = 0;
        int b = 1;
        int c = 0;
        cout << "Fibonacci sequence of " << range << " is :" << "\n";
        cout << a << "\n";
        cout << b << "\n";
        for (int i = 0; i < range; i++)
        {
            c = a + b;
            cout << c << "\n";
            a = b;
            b = c;
        }
        return 0;
    }

    /****************************************************************
     * Working:
     * ---------------------------------------------------------------
     * a = 0; b = 1 
     * c = 0;
     * int 0 to range say 3 :
     * c = 0+1 = 1 
     * a = 1 
     * b = 1  
     * 
     *int i = 1  
     * c = 1+1 =2 
     * a = 1
     * b = 2
     * 
     * int i = 2  
     * c = 1+2 =3 
     * a = 2
     * b = 3
     * 
     * ****************************************************************/