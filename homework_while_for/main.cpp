#include <iostream>
using namespace std;

int main() {

//Homework*******************




    ///txt fayl misollari;


      //1-misol

/*

int a,b;

cout << " N sonni kiriting: ";cin >>a;
cout << " N sonni neci marta kiritmoqchisiz: ";cin >>b;
    for (int i = 0; i < b; i++ ) {
        cout << a << endl;
    }

*/



      //2-misol


    /*
    int a,b;

    cout << " N sonni kiriting: ";cin >>a;
    cout << " N sonni neci marta kiritmoqchisiz: ";cin >>b;

    for(a; a<=b; a++) {
        cout << a<< endl;
    }
*/






      //3-misol

/*
    int a,b;

    cout << " N sonni kiriting: ";cin >>a;
    cout << " N sonni neci marta kiritmoqchisiz: ";cin >>b;
    int d = b-1;
    for(a;a<d;d--) {
        cout <<d<<endl;
    }
*/



      //4-misol


/*
    int a,b;

    cout << " 1 kg konfet narxi 4000 "<<endl;


    for(int c = 1; c<=10 ; c++) {
        cout << c << "kg"<< c*4000<< endl;
    }
*/


      //5-misol



/*
    double b,f;
cout << " KOnfet narxini kiriting  "; cin >> f;


    for (int i = 1; i<=10 ; i++) {
        b+=0.1;
cout <<  b  <<" kg KONFET narxi "<<b*f<<endl;

    }
*/




      //6-misol

/*
    int a;
    double b,f;
    cout << " KOnfet narxini kiriting  "; cin >> f;

        b = 1;
    for (int i = 1; i<=10 ; i++) {
        b+=0.1;
        cout <<  b  <<" kg KONFET narxi "<<b*f<<endl;
    }
*/





      //7-misol

    /*

int a,b;

cout << " a sonni kiriting: "; cin>>a;
cout << " b sonni kiriting: "; cin>>b;
    int f =0;
    for (a; a<=b; a++) {
        f +=a;
    }
    cout << f << endl;
*/



      //8-misol


/*
    int a,b;

    cout << " a sonni kiriting: "; cin>>a;
    cout << " b sonni kiriting: "; cin>>b;
    int f =1;
    for (a; a<=b; a++) {
        f *=a;
    }
    cout << f << endl;
*/



      //9-misol




      //10-misol




      //11-misol




      //12-misol


/*

    int a,b;
    cout << " N sonni kiriting: ";cin >>a;
    cout << " N sonni neci marta oziga kopaytmoqchisiz: ";cin >>b;
    int f=1;
    for(int i = 1; i<=b;i++) {
         f *=a;
    }
cout << f << endl;

*/



      //13-misol

/*
    int a;
cout << " sonni kiriting: ";cin>>a;
int c = 1;
for ( int i = 1; i<=a; i++) {
    c*=i;
}
    cout << " Natija = "<< c << endl;
*/


//***************   slayd misollari  ******************



    ///1 misol
    /*
for (int n=1;n<10;n++)
{
    cout<<n<<endl;
}
*/
///2 misol
/*
int z;
cin >>z;
for (int i=1;i<=10;i++ ){
    cout<<z<<"*"<<1<<"="<<z*i<<endl;
}
*/
///3 misol
/*
for (int n=1;n<20;n++)
{ if(n%2==0){
    cout<<n<<endl;
}
}
*/
///4 misol
/*
for (int n=1;n<20;n++)
{ if(n%2!=0){
    cout<<n<<endl;
}
}
*/
///5 misol
/*
int a,b,sum=0;
cout<<"a ni kiriting"<<endl;cin>>a;
cout<<"b ni kiriting"<<endl;cin>>b;
for(a=a;a<b;a++)
{
    sum+=a;
}
cout <<sum<<endl;
*/
///6 misol
/*
int a,b,sum=1;
cout<<"a ni kiriting"<<endl;cin>>a;
cout<<"b ni kiriting"<<endl;cin>>b;
for(a=a;a<b;a++)
{
    sum*=a;
}
cout <<sum<<endl;
*/
///7 misol
/*
int a,b;
cout<<"a ni kiriting"<<endl;cin>>a;
cout<<"b ni kiriting"<<endl;cin>>b;
for(a=a;a<b;a++){

if(a%2==0){
    cout<<a<<endl;
}
}
*/
///8 misol
/*
int a,b;
cout<<"a ni kiriting"<<endl;cin>>a;
cout<<"b ni kiriting"<<endl;cin>>b;
for(a=a;a<b;a++){

if(a%2!=0){
    cout<<a<<endl;
}
}
*/
///9 misol
/*
int a,b,sum=0,z=1;
cout<<"a ni kiriting"<<endl;cin>>a;
cout<<"b ni kiriting"<<endl;cin>>b;
for(a=a;a<b;a++){

if(a%2==0){
 sum+=a;
}
else {z*=a;}

}
cout <<sum<<"   ";
cout <<z;

*/
///10 misol
/*
int z;
cin >>z;
for (int i=1;i<=z;i++ ){
  if(z%i==0){cout<<i<<endl;}
}
*/
///11 misol
/*
int z;
int sum=0;
cin >>z;
for (int i=1;i<=z;i++ ){
  if(z%i==0){cout<<i<<endl;
  sum+=i;}
}
cout<<sum;
*/
///11 misol
/*
int z;
int sum=0;
cin >>z;
for (int i=1;i<z;i++ ){
  if(z%i==0){cout<<i<<endl;
  sum+=i;}
}
if(sum==z){cout<<"mukamal son"<<endl;}
else {cout<<"mukamal son emas"<<endl;}
*/
///13 misol
/*
int z;
int sum=0;
cin >>z;
for ( int i=z;0<i; ){
  sum=i%10;
i/=10;
  }

cout<<sum;
*/
///14 misol
/*
int sum = 0;
for (int n = 1;n != 0;sum += n) {
cout << "Son kiriting : "; cin >> n;
}


cout << "Natija :" << sum << endl;

*/
///15 misol
/*

for (int n = 1;n != 0;) {
cout << "Son kiriting : "; cin >> n;

}


cout << "Natija :" << n << endl;
*/

///16 misol
/*
int num1, num2;
cout << "Birinchi sonni kiriting: "; cin >> num1; //12
cout << "Ikkinchi sonni kiriting: "; cin >> num2; //6
int min;
if (num1 < num2) {
min = num1;
}
else {
min = num2;
}
int  result=0;
for (int i=1;i <= min;i++) {
if (num1 % i == 0 && num2 % i == 0) {
result = i;
}

}
cout << "Natija :" << result << endl;
*/
///17 misol
/*
int num1, num2;
cout << "Birinchi sonni kiriting: "; cin >> num1; //12
cout << "Ikkinchi sonni kiriting: "; cin >> num2; //6
int max;
if (num1 > num2) {
max = num1;
}
else {
max = num2;
}
int  result=0;
for (int i=1;i <= max;i++) {
if (i%num1 == 0 && i%num2 == 0) {
result = i;
}

}
cout << "Natija :" << result << endl;
*/
///18 misol
/*
int n, k;
cout << "Qiymatni kiriting: "; cin >> n;
cout << "Darajani kiriting: "; cin >> k;

int i = 1, natija = 1;
for (int i = 1;i <= k;i++) {
natija *= n;

}
cout << "Natija : "<< natija << endl;
*/
///19 misol
/*
int n;
int sum=1;
cin>>n;
for(int i=1;i<n;i++)
{
    cout<<i<<endl;
    sum*=i;
}
cout<<sum<<endl;
*/
    //20-msol
/*
int n;
int sum=1;
cin>>n;
for(int i=1;i<n;i++)
{
    cout<<i<<endl;
    sum*=i;
}
cout<<sum<<sum%10<<endl;
*/




/*
int a;
    cout << " sonni kiriting:";cin>>a;
int i=0 ;
    while (0<a ) {
    a = a/10;


        i++;
    }
    cout << i << endl;
*/



int n;
    cout << " sonni kiriting "; cin >> n;
int test,test2;
bool nat = false;
    while(0<n) {
        if ( n%2==0 ) {
            test++;
        }
        else {
            test2++;
        }
        n/=10;
    }

    if (test == test2) {
        nat = true;

    }

    cout << boolalpha<<nat<<endl;









}
