#include <iostream>
using namespace std;





string str(string str) {
string sum ="";

    for(int i = 0 ; i< str.size(); ++i) {
        if(isupper(str[i])) {
            sum+=str[i];
        }
    }
    string natija="";
   natija+=sum[sum.size()-1];
   natija+=sum[sum.size()-2];

return natija;


}


///1-misol

int maxx(int a, int b, int c, int d, int e) {
    int natija = a;
    if(natija<b) natija = b;
    if(natija<c) natija = c;
    if(natija<d) natija = d;
    if(natija<e) natija = e;
    return natija;
}
///2-misol


double modul( double x) {
    int natija;
    if(x<0) {
        natija = x * -1;
    }
    else {
        natija = x;
    }
    return natija;
}

///3-misol


bool chekkdigit  (string str) {
    bool natija = false;
    for (int i = 0 ; i< str.size(); ++i ) {
        if(!isalnum(str[i])) {
            natija=true;
            break;
        }

    }
    return natija;
}

///4-misol


char chekdigit(string str) {
    bool chek = false;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i]
            == '7' || str[i] == '8' || str[i] == '9' || str[i] == '0') {
            chek = true;
            cout << boolalpha << chek << endl;
            }
    }
    return chek;
}







///5-misol

bool findUppercase(string str) {
    bool chek = false;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            chek = true;

        }
    }
    return chek;
}



///6-misol


string upperCaselatter(string str) {
    string a;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            a += str[i];
        }
    }
    return a;
}




///7-misol


string belgilikkatekshir(string str) {
    string a = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] > 32 && str[i] < 48 || str[i] > 57 && str[i] < 65) {
            a += str[i];
        }
    }
    return a;
}



///8-misol

int masofa(int a, int b) {
    int natija = 0;
    for (int i = a + 1; i < b; i++) {
        natija += i;
    }
    return natija;
}


///9-misol



void reverseString ( string str) {

    string s="";
    for( int i = str.size()-1; 0<=i; i--) {

        s += str[i];
    }
    cout << s << endl;

}



///10-misol

bool mediumNum( int a) {
    int sum = 0, num = 0;
    for (int i = 1 ; i<=a; ++i) {
        cout << " Enter num : " ;
        cin >> num;
        sum+=num;
    }
    return sum;
}








///12-misol




void vaqt(int a) {
    int natija = a/60/60;
    int natija2 = a/60%60;
    int natija3 = a%60;
    cout << "soat "<< natija<<"    daqiqa "<<natija2<<"   sekund "<< natija3<<endl;

}


///13-misol

int maxnum(int a) {
    int natija = 0;
    int sum;
    for ( int i = 0; a>0 ; ++i) {
        sum=a%10;
        if (natija<sum) {
            natija = sum;
        }
        a=a/10;
    }
    return natija;
}


///14-misol



int minnum(int a) {

    int natija = a%10;
    int sum;
    for ( int i = 0; a>0 ; ++i) {
        sum=a%10;
        if (natija>sum) {
            natija = sum;
        }
        a=a/10;
    }
    return natija;
}





//16-misol






void uzunlik(double x) {


    cout << x*100*100  << " mm " << x*100  <<" sm " << x*10 << " dm "<< x/1000 << " km "<< endl;
}


///17-misol

char findchar(string str, char c){
string s = " siz qidirgan belgi yoq ";
    for (int i = 0 ;i<str.size(); ++i) {
        if ( c == str[i]) {
            s = " siz qidirgan belgi bor";
        }
    }
    cout << s << endl;
}





///18-misol


char belgi(string str, char c){
    char natija = '-1';

for (int i = 0 ;i<str.size(); ++i) {
    if ( c == str[i]) {
        natija = str[i];
    }
}
    return natija;

}





///19-misol

int ekub(int a, int b) {
    int natija;
    for (int i = 1; i<=a; ++i) {
        if ( a%1==0 && b%i==0) {
            natija =i;
        }
    }
    return natija;
}




///20-misol

int ekuk(int a, int b) {
int natija;
    int f = max(a,b);
    for( int i = f; i>0; i++) {
        if (i % a == 0  &&  i % b == 0) {
            natija = i;
            break;
        }
    }

    return natija;
}





///*************************   19-slayd *************************************************

 ///1-misol
 int misol ( int n, int n1) {
     int yigindi = n * n1;
     return yigindi;
 }
 double misol ( double a, double b) {
     double summa = a + b;
     return summa;
 }



  /// 2-misol
  int cast ( string str ) {
      return stoi (str);
  }
  string cast (int str) {
      return to_string(str);
  }



 /// 4-misol
 float add(float a, float b) {
     return a + b;
 }

float add(float a, float b, float c) {
    return a + b + c;
}

string add(string a, string b) {
    return a + b;
}

/// 5-misol


/// 6-misol

double calculate( double a, double b) {
    return a +b;
}
double calculate( double a, double b, double c) {
    return a*b*c;
}

  ///7-misol

  int mini(int a, int b) {
      return (a < b) ? a : b;
  }

int mini(int a, int b, int c) {
    return min(a, min(b, c));
}

int mini(int a, int b, int c, int d) {
    return min(a, min(b, min(c, d)));
}

int mini(int a, int b, int c, int d, int e) {
    return min(a, min(b, min(c, min(d, e))));
}

  /// 8-misol

int multiplication(int n) {
    int product = 1;
    for (int i = 1; i <= n; ++i) {
        product *= i;
    }
    return product;
}
int multiplication(int a, int b) {
    int product = 1;
    for (int i = a; i <= b; ++i) {
        product *= i;
    }
    return product;
}
int multiplication(int a, int b, int c) {
    return a * b * c;
}

  ///9-misol

  int residual(int n) {
      return n % 10;
  }
double residual(double n) {
    return n - static_cast<int>(n);
}


///10-misol



void repeat (int a) {
    for( int i = 0; i<a; i++) {
        cout << a << " ; ";
    }
}
void repeat(int a, int b) {
    for (int i = 0; i<b; i++) {
        cout << a << " ; ";
    }
}



///11-misol


int daraja(int a, int b) {
    int sum=1;
    for(int i = 0 ; i<b; i++) {
        sum*=a;
    }
    return sum;
}
float daraja ( float a, float b) {
    return abs(a-b);
}


bool yetti( int a) {
    bool b = false;
    int natija = 0;
    while( a>0 ) {
        natija = a%10;
        if ( natija == 7) {
            b = true;
            break;
        }
        a/=10;
    }
    return b;
}


int teskari(int a) {
    int natija=0;
    while (a>0) {
        natija *= 10;
        natija += a%10;
        a/=10;
    }
    return natija;
}
string teskari(string str) {
    string natiaj="";
for (int i = str.size()-1; i>=0;--i) {
    natiaj+=str[i];
}
    return natiaj;
}

int main() {

string str="hello";
    cout << teskari(str);






}
