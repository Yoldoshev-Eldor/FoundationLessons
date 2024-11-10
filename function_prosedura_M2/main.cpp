#include <iostream>
using namespace std;

bool isPalindrom(int n) {

    int temp = n; // 7

    int res = 0; // 7

    while (n > 0) {
        res *= 10;
        res += (n % 10);
        n /= 10;
    }

    if ( res == temp ){
        return true;
    }
    else {
        return false;
    }

}



bool sanoq(string str) {
    int sanoq1=0,sanoq2=0;
    bool natija=false;
    for(int i = 0 ; i< str.size(); i++) {
        if(isupper(str[i])) {
            sanoq1++;
        }
        else if(islower(str[i])) {
            sanoq2++;
        }
    }
    if(sanoq1 == sanoq2) {
        natija = true;
    }
    return natija;
}



int sanoq2(string str) {
    int sanoq1=0;

    for(int i = 0 ; i< str.size(); i++) {
        if(!isalnum(str[i])) {
            sanoq1++;
        }
    }
    return sanoq1;
}



int misol (int a, int b){

    int natija = a+b;
    return natija;


}
double misol( double a, double b) {
    double natija = a*b;
    return natija;
}




int main(){

cout << misol(12.1,3.2)<< endl;
}

