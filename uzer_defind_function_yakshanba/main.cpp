#include <iostream>
using namespace std;





///6-misol



void teskari(string str) {
    string s="";
    for( int i = str.size()-1; 0<=i; i--) {

        s += str[i];
    }
    cout << s << endl;
}


//12-misol




void vaqt(int a) {
  int natija = a/60/60;
  int natija2 = a/60%60;
  int natija3 = a%60;
    cout << "soat "<< natija<<"    daqiqa "<<natija2<<"   sekund "<< natija3<<endl;

}



//16-misol






void uzunlik(double x) {


    cout << x*100*100  << " mm " << x*100  <<" sm " << x*10 << " dm "<< x/1000 << " km "<< endl;
}



int main() {








}
