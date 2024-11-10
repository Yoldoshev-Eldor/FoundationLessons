#include <iostream>
using namespace std;
int main() {

// 12-m   13-m

/*
int a = 1;
    int nat = 1;
    while (a < 11) {

        if ( a % 2 ==1) {
            nat *= a;


        }
        a++;

    }
    cout << nat << endl;

*/




    // 1-misol
/*
    int a=0;
    while (a<11) {
        cout << a << endl;
        a++;
    }
*/



    // 2-misol
/*
    int a;
    int b = 1;
    cout << " sonni kiriting "; cin >> a;
    while (b<11) {
        cout << a << " * " << b << " = "<<a*b<< endl;
        b++;
    }
*/


    // 3-misol

/*
    int a = 0;
    while ( a < 21) {
        if (a % 2 == 0) {
            cout << a << endl;
        }
        a++;
    }
*/


    // 4-misol

/*
    int a = 0;
    while ( a < 21) {
        if (a % 2 == 1) {
            cout << a << endl;
        }
        a++;
    }
*/


    // 5-misol

/*
    int a,b;
    cout << " a sonni kiriting: ";cin >> a;
    cout << " b sonni kiriting: ";cin >> b;
    int c = 0;
    a++;
    while (a<b) {
    c += a;
        a++;
    }
    cout << " Natija: "<< c<< endl;
*/



    // 6-misol

/*
    int a,b;
    cout << " a sonni kiriting: ";cin >> a;
    cout << " b sonni kiriting: ";cin >> b;
    int c = 1;
    a++;
    while (a<b) {
        c *= a;
        a++;
    }
    cout << " Natija: "<< c<< endl;

*/


    // 7-misol

/*
    int a,b;
    cout << " a sonni kiriting: ";cin >> a;
    cout << " b sonni kiriting: ";cin >> b;

    a++;
    while (a<b) {
      if(a%2==0) {
          cout << a << endl;
      }
        a++;
    }

*/




    // 8-misol



    /*
    int a,b;
    cout << " a sonni kiriting: ";cin >> a;
    cout << " b sonni kiriting: ";cin >> b;

    a++;
    while (a<b) {
      if(a%2==0) {
          cout << a << endl;
      }
        a++;
    }

*/





    // 9-misol



    /*
int a, b;
    int kopaytma = 0;
    int yigindi = 1;

    cout << " a sonni kiriting: "; cin >> a;
    cout << " b sonni kiriting: "; cin >> b;
    a++;
    while (a<b) {
        if (a % 2==0) {
            kopaytma += a;
        }
        if ( a % 2 == 1) {
            yigindi *= a;
        }
        a++;
    }
    cout << " yigindisi: "<< kopaytma << endl;
    cout << " kopaytmasi: "<< yigindi << endl;

*/


    // 10-misol

/*
    int a;
    cout << " a sonni kiriting:  "; cin >> a;
    int b = 1;
    while (b<=a) {
        if (a % b == 0) {
            cout << b << "  ";
        }
        b++;
    }

*/

    // 11-misol


    /*
    int a;
    cout << " a sonni kiriting: "; cin >>a;
    int natija = 1;
    int res;
    while (natija < a) {
        if ( a % natija != 0 ) {
            cout << natija << "  ";
            res += natija;
        }
        natija++;
    }
    cout << " Summa : " << res << endl;



*/


    // 12-misol

/*
int n;
    cout << "N : "; cin >> n;
    int i =1, sum;
    while (i<n) {

        if (n % i == 0) {
            sum += i;


        }

        i++;
    }
    if(sum == n) {
        cout << n << " soni mukammal son " << endl;
    }
    else {
        cout << n << " soni mukammal son emas "<< endl;
    }

*/


// 13 - masala

/*
    int n;
    cout << " biror son kiriting: "; cin >> n;
    int sum = 0;
while (n > 0) {
    sum += n % 10;
    n/=10;
}
    cout << " Natija : "<< sum << endl;

*/





    // 14-misol

/*
    int natija = 1;
    int res =  0;

    while (natija !=  0) {
        cout << " N = "; cin >> natija;
        res += natija;
    }
    cout << " S = " << res << endl;

*/


    // 16-misol






int num1,num2;

    cout << " Birinchi sonni kiriting: "; cin >> num1;//12
    cout << " ikkinchi sonni kiriting: "; cin >> num2;//24
int min;
    if (num1<num2) {
        min = num1;
    }
    else {
        min = num2;
    }
    int i=1, result;
    while (i<=min) {
        if (num1% i ==0 && num2 % i == 0) {
            result = i;
        }

        i++;
    }

    cout << " Natija : "<< result << endl;








    // 17-misol

/*
    int num1 , num2;
    cout << " birinchi sonni kiriting: " ; cin >> num1;
    cout << " ikkinchi sonni kiriting: " ; cin >> num2;

    int max;
    if (num1> num2) {
        max = num1;
    }

    else {
        max = num2;
    }
    int i = max;
    while (true) {
        if (i%num1==0 && i % num2 == 0) {
            cout << " Natija; " << i << endl;
            break;
        }
        i+=max;
    }

*/




    // 18-misol

/*
int n,k;
    cout << " Qiymat kiriting: "; cin >> n;
    cout << " Darajani kiriting: "; cin >> k;
    int i = 1, natija =1;

    while (i<=k) {
        natija *= n;


        i++;
    }
    cout << " Natija : " << natija << endl;

*/

    // 19-misol



    /*
    int a;
    int  start1 = 1;
    int res = 1;
    cout << " a sonni kiriting: "; cin >> a;
    cout << " S = ";
    while (start1  <=  a) {
        res *= start1;
        cout << start1 <<" * ";

        start1++;
    }
    cout << " S = " << res << endl;

*/




    // 20-misol



    /*
    int a;
    int  start1 = 1;
    int res = 1;
    cout << " a sonni kiriting: "; cin >> a;
    cout << " S = ";
    while (start1  <=  a) {
        res *= start1;
        cout << start1 <<" * ";

        start1++;
    }
    cout << " S = " << res << endl;

*/



}
