#include <iostream>
using namespace std;
int main() {

/*
for ( int i = 0; i<4; i++) {

    for (int j = 0; j<5 ; j++) {
        cout << "hello ";

    }

    cout << endl;

}
*/

/*
    for ( int i =0; i<5; i++) {

for(int j=0; j<5; j++) {

   if (i == j ) {



       cout << "(" << i <<","<<j<<") ";



   }
}


        cout << endl;
    }

*/


    //1-misol



/*
    int a,b;
    while (true) {
cout << " son kiriting: ";cin>>a;
        if (a<0) {
            break;
        }
        b+=a;



    }

    cout << " Ntaija : "<<b<< endl;
*/





    //2-misol



    /*
    int n = 1;

    int summa = 0;

    while (n > 0) {

        cin >> n; // -5

        if (n < 0 || n > 50) {
            continue;
        }

        summa += n; // 4
    }


    cout << summa << endl;
*/







    //3-misol










    //4-misol


    /*
int a,b;
    for ( int a = 1; a<10; a++) {
        for(int b =1; b<10;b++) {
            cout << a << "*"<< b << " = "<<a*b<<endl;
        }
        cout << endl;
    }
*/




    //5-misol




    /*

    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if (i == j ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }



    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (i1 + j1 ==4 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
*/







    //6-misol



    /*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if (j==0 || j==4 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }



    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (i1==0 || i1==4) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
*/






    //7--misol



/*

    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if (j==0 || j==4|| i==2 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (   i1==0 ||j1==2 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
    */






    //8--misol



/*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if (j==0 || j==4|| i+j==4 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (   j1==0 ||i1==j1||j1==4) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
*/








    //9-misol




/*

    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if (i==0 || i==1 && j==3 || i==2 && j==2 || i==3 && j ==1 || i==4 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (   i1==j1 || j1-i1==1||j1-i1==2||j1-i1==3||j1==4) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
*/






    //10-misol






    /*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if ( i==j||j==0||i-j==1||i-j==2||i-j==3 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (   j1==0|| i1==0 || i1==1 && j1==1 ||i1==1 && j1==2||i1==1 && j1==3||i1==2 && j1==1||i1==2 && j1==2 || i1==3 && j1==1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

*/





    //11-misol





/*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if ( i==4 ||  j ==4 || i>=1 && j==3 ||  i>=2 && j==2|| i>=3 && j==1 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (   i1==j1 || i1==0 || i1==4) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
*/





    //12-misol



/*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if ( j==0 ||i==4 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (  i1==0 || j1==4  ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
    */






    //13-misol




/*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if (j==0||i==0||j==4||i==4 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (  j1==0||i1==0||j1==4||i1==4||j1-i1==1 ||i1-j1==1||i1==2&&j1==2 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
    */






    //14-misol





/*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if ( i==1&j==1||i==1&&j==3||i==3&&j==1||i==3&&j==3 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (  i1==4||i1==0 ||i1==1&&j1==1||i1==1&&j1==3||i1==3&&j1==1||i1==3&&j1==3) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
    */








    //15-misol



/*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if ( i==0||j==0||j==4||i==4||i==1&&j==1||i==1&&j==3||i==3&&j==1||i==3&&j==3 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (  j1==0||j1==4 ||i1==1&&j1==1 ||i1==1&&j1==3||i1==3&&j1==1||i1==3&&j1==3  ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
*/






    //16-misol


/*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if ( j==0 ||j==4 || i>=0 &&j==2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (  i1==0 || i1==2||i1==4  ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
*/






    //20-misol



/*
    int n=5;
    cout << "n: 5 ";

    cout << endl;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if ( i+j ==1 || i+j == 2 && i!=j ||  i+j==3 || i+j==5||i+j==6&& i!=j||i+j==7 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int n1=5;
    cout << "n: 5";

    cout << endl;

    for (int i1 = 0; i1 < n1; i1++) {

        for (int j1 = 0; j1 < n1; j1++) {
            if (  i1+j1==0 || i1+j1==2||i1+j1==4||i1+j1==6||i1+j1==8 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;

    }
    */


    /*

    int a,b,c,d,e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    int min =a;
    if(min>b) min = b;
    if(min>c) min = c;
    if(min>d) min = d;
    if(min>e) min = e;



    if (min == a) a = INT_MAX;
    if (min == b) b = INT_MAX;
    if (min == c) c = INT_MAX;
    if (min == d) d = INT_MAX;
    if (min == e) e = INT_MAX;

   min =a;

   if(min>b) min = b;
    if(min>c) min = c;
    if(min>d) min = d;
    if(min>e) min = e;


  cout << min << endl;
*/

/*

int a,b;
cin>>a;
cin>>b;

int min;

if (a>b){

        min =b;

}

else{
    min = a;
}


int max;
if (a>b){
    max = a;
}

else {
    max = b;
}
int natija;
while (min < max ){

    if (a % min == 0 && b % min ==0 ){
        natija = min;
        break;
    }




    min++;
}
cout << natija;
*/

int sanoq=0;

for(int i = 10;i<100    ; i++){


    if (i%3==0 && i%6!= 0){
        sanoq++;
    }


}
cout << sanoq;





}
