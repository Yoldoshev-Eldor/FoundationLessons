#include <iostream>
using namespace std;



int misol (string str) {
    int sanoq;

    for(int i = 0 ; i<str.size() ; ++i) {
        if(isupper(str[i])) {
            sanoq++;
        }
    }
    return sanoq;
}



bool ispalindrom(int a) {
    bool natija = false;

    if (a/100 == a%10) {
        natija = true;
    }
    return natija;
}


///1-misol


int katta(int a, int b, int c, int d, int e) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;
    return max;
}


///2-misol


double modul(double a) {
    if (a < 0) {
        cout << a * -1 << endl;
    } else {
        cout << a << endl;
    }
}


///3-misol


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


///4-misol


string findnumber(string str) {
    string a = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i]
            == '7' || str[i] == '8' || str[i] == '9' || str[i] == '0') {
            cout << str[i];
        }
    }
}


///5-misol


char findUppercase(string str) {
    bool chek = false;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            chek = true;
            cout << boolalpha << chek << endl;
        }
    }
    if (!chek) {
        cout << boolalpha << chek << endl;
    }
}


///6-misol


string upperCaselatter(string str) {
    string a;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            a += str[i];
        }
    }
    cout << a;
}


///7-misol


string belgilikkatekshir(string str) {
    string a = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] > 32 && str[i] < 48 || str[i] > 57 && str[i] < 65) {
            a += str[i];
        }
    }
    cout << a;
}


///8-misol

int masofa(int a, int b) {
    int natija = 0;
    for (int i = a + 1; i < b; i++) {
        natija += i;
    }
    cout << natija << endl;
}


int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int natija = masofa(a, b);
    cout << natija << endl;
}
