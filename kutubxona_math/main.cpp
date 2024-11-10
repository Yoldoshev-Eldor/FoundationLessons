#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main() {





    /*
int a;
    cin >> a;
    int natija;
    int onlar, birlar;
    onlar = a/10;
    birlar = a%10;
    natija = max(onlar,birlar);
    cout << natija;
*/



/*
    char n;
    cout << " Charni kiriting: ";
    cin >> n;


    if ( isalnum( n )) {
        cout << " raqam "<< endl;
    }


    else {
        cout << "raqam emas"<< endl;
    }
*/


/*
    char n;
    cout << " char kiriting: ";
    cin>> n;


    if ( islower(n)) {
        cout << " kichik harf "<<endl;
    }
    else if ( isupper(n)) {
        cout << " katta harf "<<endl;
    }
    else if ( isdigit(n)) {
        cout << " raqam "<<endl;
    }
    else if ( !isalnum(n)) {
        cout << " belgi "<<endl;
    }

*/



/*
int sanoq = 0;
    string str = "hello";
    int uzunlik =str.size();
    for(int i = 0 ; i<uzunlik ;i++) {


        if ( isalpha((str[i]))) {

            sanoq++;
        }
    }
cout << sanoq;
*/




//1-misol





    /*
int a,b,c,d,e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    int natija = min(a,min(b,(min(c,(min(d,e))))));
    cout <<" Natija: "<< natija<< endl;
*/









///2-misol





/*

    int a,b,c,d,e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    int natija = max(a,max(b,(max(c,(max(d,e))))));
    cout <<" Natija: "<< natija<< endl;

*/





//3-misol




/*
int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;


    int res = abs(c-a);
    int res2 = abs(b-a);
    int natija;
    if (res>res2) {
        cout << " A nuqtaga eng ayqin masofa:  "<<" b nuqta"<<endl;
    }
    else if(res == res2) {
        cout << " ikkala masofa teng ";
    }
else {
    cout << " A nuqtaga eng ayqin masofa:  "<<" c nuqta"<<endl;
}
*/






//4-misol



/*
    double a ;
cout << " sonni kiriting: ";cin>>a;
  if ( floor(a)==a && a>0) {
      cout << " Natural son: "<< endl;
  }
    else {
        cout <<" Natural son emas "<< endl;
    }
*/






//5-misol



    /*

string str;
    getline(cin,str);



    cout << str.size();
*/





//6-misol



/*
string str;
    getline(cin,str);
int sanoq=0;
for(int i = 0 ; i<str.size();i++) {
    if (isdigit(str[i])) {
        sanoq++;
    }
}
cout << sanoq;
*/




//7-misol





/*
    string str;
    getline(cin,str);
    int sanoq=0;
    for(int i = 0 ; i<str.size();i++) {
        if (isupper(str[i])) {
            sanoq++;
        }
    }
    cout << sanoq;
*/





//8-misol



/*
    string str;
    getline(cin,str);
    int sanoq=0;
    for(int i = 0 ; i<str.size();i++) {
        if (islower(str[i])) {
            sanoq++;
        }
    }
    cout << sanoq;
*/



//9-misol



/*
    string str;
    getline(cin,str);
    int sanoq=0;
    for(int i = 0 ; i<str.size();i++) {
        if (!isalnum(str[i])) {
            sanoq++;
        }
    }
    cout << sanoq;
*/






//10-misol










//11-misol




    /*
    string str,a;
    getline(cin,str);

    for(int i = 0 ; i<str.size();i++) {
        if ( isalpha(str[i])=='a' )
         {


             a = '*';
         }
        a=i;
cout << a;

        }
*/



//12-misol



/*
    string str;
    getline(cin,str);
    int sanoq=0;
    for(int i = 0 ; i<str.size();i++) {
        if ( str[i]== 'a'  )
         {
           str[i ] = 'b';
        }
        else if(str[i]== 'b') {
            str[i ] ='a';
        }
        cout << str[i];
    }

*/





//13-misol




    /*
    string str;
    getline(cin,str);
    int sanoq=0;
    for(int i = str.size();  i>=0 ; i--) {

           cout << str[i];

    }
*/


//14-misol


    /*
    string str;
    getline(cin,str);
    int sanoq=0;
    for(int i = 0 ; i<str.size();i++) {
        if ( isdigit(str[i]))
        {
            cout << str[i];
        }

    }
*/





//15-misol





    /*

    string str,a;
    getline(cin,str);
    int sanoq=0;
    for(int i = 0 ; i<str.size();i++) {
        if ( isupper(str[i]))
        {
            str[i] = tolower(str[i]);
            cout << str[i];
        }
        else if (islower(str[i])) {
       str[i] =   toupper(str[i]);
            cout << str[i];

        }

 }
*/





//16-MISOL




    /*string str;
    cout << "So'z kiriting: ";
    getline(cin, str);

    int uzunlik = str.length();

    for (int i = 0; i < uzunlik; ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    cout << "Natija: " << str << endl;
    */


    ///17-misol






    /*


     string str;
    cout << "So'z kiriting: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); ++i) {
        str[i] = toupper(str[i]);
    }

    cout << "Natija: " << str << endl;

    */







//19-misol



/*
    string str;
    getline(cin,str);
    int sanoq=0;
    for(int i = 0 ; i<str.size();i++) {
        if ( (str[i]=='a')||(str[i]=='e' )||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')
      ||  (str[i]=='A')||(str[i]=='E' )||(str[i]=='I')||(str[i]=='O')||(str[i]=='U')
        ) {
            sanoq++;
        }
    }
    cout << sanoq;
*/



//20-misol


/*
    char c;
    cout << " birinta belgi kiriting: ";cin>>c;
    cout << " Natija : "<< ++c<< endl;
*/




























}
