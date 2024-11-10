#include <iostream>
#include <ctime>
using namespace std;





int main() {


/*
    int n;
    cout << " Massivni uzunligini  kiriting: ";
    cin>>n;
    int massiv[n];

    for(int i = 0 ; i<n;++i) {
        cout << "["<<i<<"]";
       cin>> massiv[i];

    }

    for(int i = 0 ; i<n;++i) {

        cout<< massiv[i]<<" ; ";

    }



*/




















    /*
srand(time(0));
    int n;
    cout << " Massivni uzunligini  kiriting: "<<endl;;
cin>>n;
    int massiv[n];

for(int i = 0 ; i<n;++i) {
    massiv[i]=rand()%10;
    cout << massiv[i]<< " ";
}
int xona=0;
    int maxx =0;
    for (int i =0 ; i<n; i++) {
        if ( massiv[i]%2==1) {
            maxx=massiv[i];
            xona=i;
        }
    }
for(int i = 0 ; i<n;++i) {
  if ( massiv[i]%2==1 && maxx<massiv[i]) {
      maxx=massiv[i];
      xona =i;
  }
}

cout << " xonasi = " << xona << endl;
cout << " max : " << maxx << endl;
*/





/*
    int n;
    cout << " Massivni uzunligini kiriting: ";
    cin >>n;
    int massiv[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massiv[i];
    }

    int maxi = massiv[0];
    int mini = massiv[0];

for ( int i = 0 ; i<n;i++){


    if( massiv[i]>maxi ) {
       maxi=massiv[i];
    }if( massiv[i]<mini ) {
       mini=massiv[i];
    }

    }

  cout << maxi - mini << endl;
*/


///1-misol


    /*

int n;
    cout << " Massivni uzunligini kiriting: ";
    cin >>n;
    int massiv[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massiv[i];
    }

    bool a = false;
    if (massiv[0]==6 || massiv[n-1]==6) {
        a =true;
    }

cout << boolalpha << a << endl;

*/



    ///2-misol





    /*
        int n;
        cout << " Massivni uzunligini kiriting: ";
        cin >>n;
        int massiv[n];

        for (int i = 0 ; i<n ; ++i) {
            cout <<"["<<i<<"] ";
            cin >> massiv[i];
        }

        int f;
        cout << " 2 -  Massivni uzunligini kiriting: ";
        cin >>f;
        int massif[f];

        for (int i = 0 ; i<f ; ++i) {
            cout <<"["<<i<<"] ";
            cin >> massif[i];
        }

    bool natija = false;
        if(massiv[0]==massif[0] || massiv[n-1]==massif[f-1]){
            natija =true;

        }
        cout << boolalpha<<natija<< endl;
    */





    ///3-misol




    /*
    int n = 3;
    cout << " Massivni uzunligini 3 ga teng xonalarini kiriting: "<<endl;;

    int massiv[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massiv[i];
    }

    int a = massiv[0];
    massiv[0] = massiv[1];

    massiv[1] = massiv[2];

    massiv [2] = a;
    for (int i = 0; i < 3; ++i) { cout << massiv[i] << " "; }
*/










    ///4-misol



    /*
    int n ;
    cout << " Massivni uzunligini kiriting: ";
    cin>>n;

    int massiv[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massiv[i];
    }

    for(int i = massiv[n-1]; i>=0; i--) {
        cout <<"["<<massiv[n]<<"]"<< massiv[n]<< endl;
    }
*/



   /// 5-misol
/*
    int n = 3;
    cout << " Massivni uzunligini 3 ga teng xonalarini kiriting: "<<endl;;

    int massiv[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massiv[i];
    }

    int a = massiv[0];
    massiv[0] = massiv[1];

    massiv[1] = massiv[2];

    massiv [2] = a;
    for (int i = 0; i < 3; ++i) { cout << massiv[i] << " "; }


*/



    ///6-misol




    /*

    int n = 3;
    cout << "A Massivni uzunligini 3 ga teng xonalarini kiriting: "<<endl;;

    int massiv1[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massiv1[i];
    }




    int m = 3;
    cout << "B Massivni uzunligini 3 ga teng xonalarini kiriting: "<<endl;;

    int massiv2[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massiv2[i];
    }


    int massivnev[2];
   massivnev[0]=massiv1[1];
     massivnev[1]=massiv2[1];
    for (int i = 0 ; i<2; i++) {
        cout << massivnev[i]<< " ";
    }
    */







    ///7-misol





    int n;

    cout << " Massivni uzunligini kiriting; ";
    cin >> n;

    int alley[n];

    cout << " Massivni xonalarini kiriting: "<< endl;

    for(int i = 0; i<n ; ++i) {
        cout << "["<<i<<"]";
        cin >>alley[i];
    }

int massiv[n*2];

    for(int i = 0 ; i<n*2; ++i) {
        massiv[i]=0;
    }
    massiv[n*2-1]=alley[n-1];

    for (int i = 0; i<n*2; ++i) {
        cout << massiv[i];
    }










 ///8-misol



    /*
    int n=3;

    cout << " Massivni uzunligini 3ga teng xonasini kiriting; ";


    int alley[n];

    cout << endl;

    for(int i = 0; i<n ; ++i) {
        cout << "["<<i<<"]";
        cin >>alley[i];
    }
for(int i = 0 ; i<3; ++i) {
    if(alley[i]==2 && alley[i+1]==3) {
        alley[i+1]=0;

    }
}
    for (int i = 0 ; i<n; ++i) {
        cout << alley[i]<<" ";
    }

*/






    ///9-misol



    /*

    int n=2,m=2;
int sanoq1=0;
    cout << " A massivni xonalrini kiriting: "<< endl;
   int massiv1[n];
    for(int i = 0 ; i<n ; i++) {
        cout<<"["<< i <<"]";
        cin>>massiv1[i];
        sanoq1+=massiv1[i];
    }




    cout << " A massivni xonalrini kiriting: "<< endl;
   int massiv2[n];
    int sanoq2=0;
    for(int i = 0 ; i<n ; i++) {
        cout<<"["<< i <<"]";
        cin>>massiv2[i];
        sanoq2+=massiv2[i];
    }

if(sanoq1>sanoq2) {
    for(int i = 0; i<n; ++i) {
        cout << massiv1[i]<<" ";
    }
}
    else if(sanoq1==sanoq2) {
    for(int i = 0; i<n; ++i) {
        cout << massiv1[i]<<" ";
    }
}
    else {
        for(int i = 0; i<n; ++i) {
            cout << massiv1[i]<<" ";
        }
    }
*/







 ///10-misol




    /*
int n;
    cout << " Massivni uzunligini kiriting(juft bolsin): ";
    cin>>n;

    int alley[n];
    for (int i = 0 ; i<n; i++) {
        cout << "["<<i<<"]";
        cin>> alley[i];
    }

    int massiv[2];
    massiv[0]=alley[n/2-1];
    massiv[1]=alley[n/2];
    for(int i =0 ; i<2; ++i) {
        cout << massiv[i]<<" ";
    }

*/








    ///11-misol






    /*
    int n=2,m=2;

    cout << " A massivni xonalrini kiriting: "<< endl;
    int massiv1[n];
    for(int i = 0 ; i<n ; i++) {
        cout<<"["<< i <<"]";
        cin>>massiv1[i];

    }




    cout << " b massivni xonalrini kiriting: "<< endl;
    int massiv2[n];

    for(int i = 0 ; i<n ; i++) {
        cout<<"["<< i <<"]";
        cin>>massiv2[i];

    }

    int alley[4];
    alley[0]=massiv1[0];
    alley[1]=massiv1[1];
    alley[2]=massiv2[0];
    alley[3]=massiv2[1];

    cout <<" New alley: "<< endl;


for (int i = 0 ; i<4;i++) {
    cout<<alley[i]<<" ";
}
*/



 ///12-misol





/*
    int n;

    cout << " Massivni uzunligini kiriting; ";
    cin >> n;

    int alley[n];

    cout << " Massivni xonalarini kiriting: "<< endl;

    for(int i = 0; i<n ; ++i) {
        cout << "["<<i<<"]";
        cin >>alley[i];
    }

    int f = alley[0];

    alley[0]=alley[n-1];
    alley[n-1]=f;

for(int i = 0  ; i<n ;++i) {

    cout << alley[i]<<" ";

}
*/



    ///13-misol


    /*

    int n;

    cout << " Massivni uzunligini kiriting(toq bolsin 3=<n); ";
    cin >> n;

    int alley[n];

    cout << " Massivni xonalarini kiriting: "<< endl;

    for(int i = 0; i<n ; ++i) {
        cout << "["<<i<<"]";
        cin >>alley[i];
    }

int massiv[3];
    massiv[0]=alley[n/3];
    massiv[1]=alley[n/3+1];
    massiv[2]=alley[n/3+2];
    for (int i =0; i<3;++i) {
        cout << massiv[i]<<" ";
    }
*/






    ///14-misol



    /*
    int n;

    cout << " Massivni uzunligini kiriting(toq bolsin 3=<n); ";
    cin >> n;

    int alley[n];

    cout << " Massivni xonalarini kiriting: "<< endl;

    for(int i = 0; i<n ; ++i) {
        cout << "["<<i<<"]";
        cin >>alley[i];
    }
if ( alley[0]>alley[n-1]) {
    cout<<alley[0];
}
    else {
        alley[n-1];
    }
*/






    ///15-misol





    /*
    int n;
bool a;
    cout << " Massivni uzunligini kiriting; ";
    cin >> n;

    int alley[n];

    cout << " Massivni xonalarini kiriting: "<< endl;

    for(int i = 0; i<n ; ++i) {
        cout << "["<<i<<"]";
        cin >>alley[i];
    }
for(int i = 0; i<n ; ++i) {
       if (alley[i]==1 && alley[i+1]==3) {
           a = true;
       }
    }
cout << boolalpha << a << endl;

*/





    ///16-misol





    /*

    int n;
    cout << " Massivni uzunligini kiriting: ";
    cin >>n;
    int massiv[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massiv[i];
    }

    int f;
    cout << " 2 -  Massivni uzunligini kiriting: ";
    cin >>f;
    int massif[f];

    for (int i = 0 ; i<f ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massif[i];
    }

int alley[2];
    alley[0]=massiv[0];
    alley[1]=massif[0];
    for (int i =0 ; i<2;++i) {
        cout << alley[i]<<" ";
    }
    */




    ///17-misol






    /*
    int n;
    cout << " Massivni uzunligini kiriting: ";
    cin >>n;
    int massiv[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> massiv[i];
    }
    int sanoq=0;
for (int i =0 ;i<n;++i) {
    if(massiv[i]!=13) {
        sanoq+=massiv[i];
    }
}
cout << sanoq;
*/






    ///20-misol




    /*
    int n;
    cout << " Massivni uzunligini kiriting: ";
    cin >>n;
    int array[n];

    for (int i = 0 ; i<n ; ++i) {
        cout <<"["<<i<<"] ";
        cin >> array[i];
    }
    bool test2 = false; // 0

    bool test4 = false; // 1



    for (int i = 0; i < n; ++i) {

        if (array[i] == 2 && array[i+1] == 2){ test2= true;

        } if (array[i] == 4 && array [i+1] == 4 ){ test4 = true;

        }

    }

    if (test2 == test4){

        cout << "false" << endl;

    }

    else {



        cout << "true" << endl;
    }
*/







}
