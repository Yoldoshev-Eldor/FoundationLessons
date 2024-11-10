#include <iostream>
#include <ctype.h>
#include <math.h>

using namespace std;

int main() {






    char n = 'a';
    cin>>n;

   if (64<n && 91>n) {
       n= n + 32;
       cout <<  n << endl;
   }
    else if (96<n && 123>n) {
        n = n - 32;
        cout << n << endl;
    }





}
