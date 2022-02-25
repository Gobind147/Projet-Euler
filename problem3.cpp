#include <iostream>
using namespace std;

int main() {

  long long i, n = 600851475143;
    for (i = 3; i<n; i += 2)
        if (n % i == 0)
            n = n/i;
    
  cout << i;
  
  return 0;
}
