#include <iostream>
using namespace std;
int main()
{
    int n, sum = 2;
    int f1 = 1;
    int f2 = 2;
    while(f2 < 4000000)
    {
        n = f1 + f2;
        f1 = f2;
        f2 = n;
        if(f2 % 2==0)
        {
            sum = sum + n;
        }    
    }
    cout << sum;	
    return 0;
}
