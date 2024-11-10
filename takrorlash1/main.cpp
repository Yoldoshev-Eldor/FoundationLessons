#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << " a sonni kiriting: " ; cin >> a;
    cout << " b sonni kiriting: " ; cin >> b;
    cout << " c sonni kiriting: " ; cin >> c;
    if ( a != b && a != c && b !=c) {
        cout << " Ntaija :  "<< a*b*c << endl;
    }
    else if (a == b ) {
        cout << c << endl;
    }
    else if (b == c) {
        cout << a << endl;
    }
    else if ( c == b) {
        cout << a << endl;
    }
    else if ( a == c) {
        cout << b << endl;
    }
    else if ( a == b && a == c && b == c) {
        cout << 0<< endl;
    }
}
