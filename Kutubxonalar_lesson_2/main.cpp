#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;
int main() {









/*
double a;

    cout << " sonni kiriting: "; cin>>a;

    if (floor(a)==a) {

        cout << " son kasr son emas.";
    }

else {
    cout << " son kasr son";
}

*/




/*

    for(int i = 0; i<101;i++) {


        cout << sqrt(i)<< endl;
    }

*/









/*
string text;
    getline(cin,text);


    for(int  i = 0; i<text.size(); ++i) {
        if (isdigit(text[i])) {
         cout << text[i];
        }
    }
*/

/*
    string text;
    getline(cin,text);

int sanoq=0, sanoq2=0;
    for(int  i = 0; i<text.size(); ++i) {
        if (islower(text[i])) {

            sanoq++;
        }
        if (isupper(text[i])) {

            sanoq2++;
        }
    }
    if (sanoq==sanoq2) {
        cout << "Teng "<<endl;
    }


else {
    cout << " teng emas ";
}
*/



/// ------------------TXT FAYL MISOLLARI------------------------------------


//***************************************************************************

//***************************************************************************





    //**************************  1- MISOL ******************************************



    /*
int a;
    cout << " 4 xonali son kiriting: ";
    cin>>a;

    int birlar, onlar, yuzlar,minglar;

    birlar =(a/1)%10;
    onlar=(a/10)%10;
    yuzlar =(a/100)%10;
    minglar = (a/1000)%10;


    if(birlar == 3 || onlar == 3 || yuzlar == 3 || minglar == 3) {
        cout << " 3 raqami ishtirok etgan...";
    }
else {
    cout << " 3 raqami ishtriok etmagan...";
}
*/






  //**************************  2- MISOL ******************************************




    /*

int a,b,c,d,e;
    int musbat=0,manfiy=0,nol=0;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    if(a>0) { musbat++;
    }

   else if(a<0) {
       manfiy++;
   }
    else if (a==0) {
        nol++;
    }


    if(b>0) { musbat++;
    }

   else if(b<0) {
       manfiy++;
   }
    else if (b==0) {
        nol++;
    }


    if(c>0) { musbat++;
    }

   else if(c<0) {
       manfiy++;
   }
    else if (c==0) {
        nol++;
    }


    if(d>0) { musbat++;
    }

   else if(d<0) {
       manfiy++;
   }
    else if (d==0) {
        nol++;
    }


    if(e>0) { musbat++;
    }

   else if(e<0) {
       manfiy++;
   }
    else if (e==0) {
        nol++;
    }


    cout << nol << " tasi nol"<< endl;
    cout << musbat << " tasi musbat"<< endl;
    cout << manfiy << " tasi manfiy"<< endl;
*/







  //**************************  3 - MISOL ******************************************






/*
    int a,b,c;

    cin>>a;
    cin>>b;
    cin>>c;

    if(a==b && a==c) {
        cout <<" = ";
    }
    else if(a !=b && b!=c && a!=c) {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }

    else if (a!=b) {
        cout << a << endl;
        cout << b << endl;
    }
     else if (a!=c) {
        cout << a << endl;
        cout << c << endl;
    }
      else if (b!=c) {
        cout << b << endl;
        cout << c << endl;
    }
*/







  //**************************  4- MISOL ******************************************





    /*
    int a,b;
    cin>>a;
    cin>>b;

    int res = a+b;

    if (res>10 && res<20) {
        cout << 20 << endl;
    }
else {
    cout << res<< endl;
}
*/







  //**************************  5- MISOL ******************************************






    /*
    int a;
    cout << " 4 xonali son kiriting: ";
    cin>>a;

    int birlar, onlar, yuzlar,minglar;

    birlar =(a/1)%10;
    onlar=(a/10)%10;
    yuzlar =(a/100)%10;
    minglar = (a/1000)%10;


    if( onlar == 3 ||  minglar == 3) {
        cout << " minglar yoki onlar xonasida 3 raqami ishtirok etgan...";
    }
    else {
        cout << " 3 raqami ishtriok etmagan...";
    }
*/









    // *************                   ********** *************                  ****************************


// ------------------------------- for while --------------------












  //**************************  1 - MISOL ******************************************





    /*
for (int i = 0; i<=100; i++) {
    if(i%2==1) {
        cout << i << " ; ";
    }
  if(i%2==0) {
      cout << i << " ; "<< endl;
    }



}
*/







  //**************************  2 - MISOL ******************************************






    /*
int a, sanoq=0;

while (true) {
    cout << " son kiriting: ";
    cin>>a;
if(a>0) {
    sanoq+=a;
}
    if(a==0) {
        break;
    }

}

cout << sanoq << endl;
*/









  //**************************  3 - MISOL ******************************************






    /*
    int n = 1;

    while (n <= 9) {
        int m = 1;
        while (m <= 9) {
            cout << n << " * " << m << " = " << n * m << endl;
            m++;
        }
        cout << endl;
        n++;
    }

*/






  //**************************  4 - MISOL ******************************************







    /*
for ( int i = 10 ; i <100; i++) {

if (i%10== 8 || i/10==8)

cout << i << endl;
}
*/




  //**************************  5 - MISOL ******************************************



    /*
    int a, b;

    cout << "a sonini kiriting: ";
    cin >> a;
    cout << "b sonini kiriting (b > 0): ";
    cin >> b;

    if (b > 0) {
        int count = 0;
        while (count < b) {
            cout << a << " ";
            count++;
        }
        cout << endl;
    } else {
        cout << "b soni 0 dan katta bo'lishi kerak." << endl;
    }

*/



  //**************************  6 - MISOL ******************************************






/*
int sum;
for(int i =10; i<=100;i++) {
    if (i%3==0 && i%5 != 0) {
        sum+=i;
    }
}
cout << sum << endl;
*/




// ------------------------      ctype math ---------------------------







  //**************************  1 - MISOL ******************************************



    /*
string str;
int sanoq = 0;
    getline(cin,str);

    for(int i = 0 ; i<str.size() ; i++ ) {

        if(str[i] == '5') {
            sanoq++;
        }


    }
    cout << sanoq << " ta 5 raqami qatnashgan ";

*/







  //**************************  2 - MISOL ******************************************








  //**************************  3 - MISOL ******************************************




    /*
int a,b,c,d,e,f;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;



    int kattasi = max(a,max(b,max(c,max(d,max(e,f)))));
    int kichigi = min(a,min(b,min(c,min(d,min(e,f)))));

cout << " eng kattasi: "<< kattasi << endl;
cout << " eng kichigi: "<< kichigi << endl;
*/






  //**************************  4 - MISOL ******************************************



    /*
    string str;
    getline(cin,str);
    int sanoq=0;
    for(int i = str.size();  i>=0 ; i--) {

        cout << str[i];

    }
*/






  //**************************  5 - MISOL ******************************************
/*
string str;
    getline(cin,str);
    for( int i = 0 ; i<str.size(); i++) {
        if (islower(str[i])){
            str[i]+=toupper(str[i]);
    }
        else if (isupper(str[i])) {
          str[i] +=  tolower(str[i]);
        }
    }
    cout << str << endl;
*/



  //**************************  6 - MISOL ******************************************



    /*
    string str;
    int sanoq = 0;
    getline(cin,str);

    for(int i = 0 ; i<str.size() ; i++ ) {

        if(str[i] == '*') {
            sanoq++;
        }


    }
    cout << sanoq << " ta * belgisi qatnashgan ";
*/






  //**************************  7 - MISOL ******************************************

/*
    string parol;
    retry:
     cout << "Parol kiriting: (Kamida 8 ta belgi, kamida 1 ta katta harf, kamida 1 ta kichik harf, kamida 1 ta raqam va 1 ta belgi dan iborat bolsin)" << endl;
    getline(cin, parol);
    int uzunlik = parol.size();
    int sanoqUpper = 0, sanoqLower = 0, sanoqDigit = 0, sanoqBelgi = 0;

    if (uzunlik >= 8) {
        for (int i = 0; i < uzunlik; ++i) {
            if (isdigit(parol[i])) {
                sanoqDigit++;
            }

            if (isupper(parol[i])) {
                sanoqUpper++;
            }

            if (islower(parol[i])) {
                sanoqLower++;
            }

            if (!isalnum(parol[i])) {
                sanoqBelgi++;
            }
        }

        if (sanoqBelgi >= 1 && sanoqDigit >= 1 && sanoqUpper >= 1 && sanoqLower >= 1) {
            cout << "Parol mustahkam." << endl;
        } else {
            cout << "Parol mustahkam emas." << endl;
            goto retry;
        }
    } else {
        cout << "Parol mustahkam emas." << endl;
        goto retry;
    }*/




  //**************************  8 - MISOL ******************************************


/*
string str;
    getline(cin,str);

    for (int i = 0 ; i< str.size(); i++) {
        if ( isupper(str[i])) {
            str[i]+= '*';
        }
    }

cout  << str << endl;
*/















}