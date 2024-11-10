#include <iostream>
#include <string.h>
using namespace std;

string satr(string s1 , string s2) {
    if (s1.substr(s1.size()-1,1)==s2.substr(0,1)) {
        s1.erase(0,1);
    }
    return s1+s2;
}
///**********************  1-misol  *********************


/*
string doublechar(string str) {
    string s="";
  for(int i =0; i<str.size();++i) {
      s+=str[i];
      if (!isalnum(str[i])) {
          s+=str[i];
      }

  }

  return s;


}
*/


///**********************  2-misol  *********************


/*
string doublec(string str) {
    string s="";
    for(int i =0; i<str.size();++i) {
        s+=str[i];
        if (str[i]=='c'||str[i]=='C') {
            s+=str[i];
        }

    }

    return s;


}
*/


///**********************  3-misol  *********************


/*
string satr (string s1, string s2) {
int n1 = s1.size();
int n2 = s2.size();
    string s = "";
if(n1>n2) {
 s.append(s2);
 s.append(s1);
 s.append(s2);
}
    else {
        s.append(s1);
        s.append(s2);
        s.append(s1);
    }
return s;

}

*/
///**********************  4-misol  *********************

/*

string newline(string s1, int n1, string s2, int n2) {

    string res1 = s1.substr(0, n1);
    string res2 = s2.substr(s2.size() - n2, n2);
    string natija = res1 + res2;
    return natija;
}

  */


///**********************  5-misol  *********************


/*
bool qidiruv( string str1, string str2) {
    return str1.find(str2) <= str1.size();
}


*/


///**********************  6-misol  *********************


///**********************  7-misol  *********************


/*
string delet(string s1,  string s2) {
int n = s2.size();
    for (int i =0; i<s1.size();++i) {

        if(s1.substr(i,n)==s2) {
            s1.erase(i,n);
        }


    }
return s1;

}
*/

///**********************  8-misol  *********************


/*

string add(string str, string s1, string s2) {

int n = s1.size();
    string natija ="";
    for(int i =0 ; i<str.size(); ++i) {

     if(str.substr(i,n)==s1 ){
str.erase(i,n);
        natija.append(str,0,i);
         natija.append(s2);
         natija.append(str,i,str.size());
     }


    }
    return natija;
}

*/


///**********************  9 -misol  *********************


/*
string name(string str) {
    string natija = "Hello ";
    natija.append(str);
    natija.append(" !");
    return natija;
}
*/


///**********************  10-misol  *********************


/*
string qoshish(string s1, string s2) {

    string natija = "";

    natija.append(s1);
    natija.append(s2);
    natija.append(s2);
    natija.append(s1);
    return natija;

}
*/


///**********************  11-misol  *********************


///**********************  17-misol  *********************


/*
string add( string s1, string s2) {
    s1.erase(0,1);
    s2.erase(0,1);
    s1.append(s2);
    return s1;
}
*/


///**********************  18-misol  *********************


/*
string soz (string s) {
    s.append(s,0,2);
    s.erase(0,2);
    return s;
}
*/


///**********************  19-misol  *********************


/*
string harf (string s , bool frond) {
    string natija = "";
    if ( frond ) {
        natija.append(s, 0,1);
    }
    else {
        natija.append(s,s.size()-1,1);
    }
    return natija;
}
*/


///**********************  20-misol  *********************


/*
string newword ( string str, int n) {

    string s ="";
    s.append(str, 0 ,n);
    s.append(str, str.size()-n ,n);

    return s;
}

*/


int main() {
    /*
    string str;
    cout << "Satr kiriting: ";
    getline(cin, str);


    int a, b;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    string f="";
    for (int i =a; i<a+b; ++i) {
        f +=str[i];
    }

cout<<f<< endl;
*/
}
