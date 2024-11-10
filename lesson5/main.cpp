#include <iostream>

using namespace std;

int main()
{
  /* int a;

  cout << "telefon raqamni kiriting " ; cin >> a;
  int b = a / 10000000;
  cout << b << " kiritgan raqamingiz kodi"<< endl; */







  /*int a,b;
  cout << " butun son kirting: " ; cin >> a;
  b = a % 10;
  cout << b << "   1lar xonasi shung teng"<< endl;*/





  /* int a,b;
  cout << "sonni kiriting" ; cin >> a;
b = (a/10 % 10);
int c = a / 100 % 10;
int d = c + b;
cout << d << endl; */




/// Asosiy operatorlar



/// 1-misol



/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = b * c * d;
cout << "Natija = "<< f << endl;*/









///2-misol


/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = b - c - d;
cout << "Natija = "<< f << endl;*/




///3-misol




/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = (b*100) + (c * 10) + d;
cout << "Natija = "<< f << endl;*/








///4-misol

/* int a,b,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a % 10; ///3=b

d = a / 100 ; ///1
f = d + b;
cout << "Natija = "<< f << endl;*/








///5-misol


/*int a,b,c,d,g,f,natija;
cout << "5 xonali sonni kiriting: "; cin>> a; ///12345
b = a % 10; ///5=b
c = a / 10 % 10; ///4=c
d = a / 100 % 10; ///3=d
g = a / 1000 % 10; ///2=g
f = a / 10000; ///1=f
natija = (b * 10000) + (c * 1000) + (d * 100) + (g * 10) + f ;
cout << "Natija = "<< natija << endl;  */






///6-misol
/*int a,b,c,d,g,f,e;
cout << "5 xonali sonni kiriting: "; cin>> a; ///123456
b = a % 10; ///6=b
c = a / 10 % 10; ///5=c
d = a / 100 % 10; ///4=d
g = a / 1000 % 10; ///3=g
f = a / 10000%10; ///2=f
e = a / 100000;

cout << "Natija = "<< g << endl;*/






///7-misol
/*int a,b,c,d,g,f,e,natija, natija2;
cout << "5 xonali sonni kiriting: "; cin>> a; ///123456
b = a % 10; ///6=b
c = a / 10 % 10; ///5=c
d = a / 100 % 10; ///4=d
g = a / 1000 % 10; ///3=g
f = a / 10000%10; ///2=f
e = a / 100000;
natija = b * c * d * g *f *e;
natija2 = b + c + d + g +f +e;
cout << "Natija kopaytmasi = "<< natija << endl;
cout << "Natija yigindisi = "<< natija2 << endl;*/





///8-misol
/*double a,b,c;
cout << "telefon xotirasini kiriting ---> "; cin >>a;
cout << " neci mblik video joylaqmoqchisiz ---> "; cin >> b;
c = a / (b / 1024);
cout << "natija shuncha dona sigadi: " << c << endl;*/





///9-misol
/*double a,b,e,f,h,c;
cout << "telefon xotirasini kiriting ---> "; cin >>a;
cout << " neci mblik video joylaqmoqchisiz ---> "; cin >> b;
cout << " necta joylamoqchisiz---> "; cin >>e;
cout << " neci mblik rasm joylaqmoqchisiz ---> "; cin >> f;
cout << " necta joylamoqchisiz ---> "; cin >> h;

c = ((a * 1024) - ((b * e)+(f*h))) / 1024;
cout << "natija shuncha gb joy qoladi: " << c << endl;*/






///10-misol

/*int a,b,c,d,f;
int a2, b2, c2, d2 ,f2;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
cout << "ikkinchi 3 xonali sonni kiriting: "; cin>> a2;



b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = (b*100) + (c * 10) + d;


b2 = a2 % 10; ///3=b
c2 = a2 / 10 % 10; ///2=c
d2 = a2 / 100 ;
f2 = (b2*100) + (c2 * 10) + d2;





cout << "Natija = "<< f << endl;
cout << "Natija = "<< f2 << endl; */











/// slayd homework




///1-misol


/*int a,b;
cout << "SMni kiriting ---> " ; cin>> a;
b = a / 100;
cout << " Natija " << b << " Metr " << endl;*/



/// 2-misol



/* int a,b;
cout << "Kgni kiriting ---> " ; cin>> a;
b = a / 1000;
cout << " Natija " << b << " tonna " << endl; */





///3-misol


/*double a,b,c;
cout << " Fayrlning hajmini kiriting (baytda) : "; cin >> a;

b = a / 1024;
cout << " natija fayl " << b << " kb hajmda " << endl;*/




///4-misol



/*int a,b,c;
cout << "ikki xonali sonni kirting---> "; cin >> a; ///23
b = a / 10;

c = a % 10;



cout << "Natija ---> " << c<< "           Natija2 ---> " << b <<  endl;*/





///5-misol




/*int a,b,c,f;
cout << "ikki xonali sonni kirting---> "; cin >> a; ///23
b = a / 10;

c = a % 10;


f = c + b;
cout << "Natija ---> " << f << endl;*/






///6-misol



/*int a,b,c,f;
cout << "ikki xonali sonni kirting---> "; cin >> a; ///23
b = a / 10;

c = a % 10;


f = c * 10 + b;
cout << "Natija ---> " << f << endl;*/


///7-misol


/*int a,b;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a / 100; ///3=b

cout << "Natija = "<< b << endl;*/


///8-msiol


/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;

cout << "1liklar xonasi= "<< b << "       10likar xonasi "<< c << endl;*/


///9-msiol




/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = b + c + d;
cout << "Natija = "<< f << endl;*/




///10-misol



/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = (b*100) + (c * 10) + d;
cout << "Natija = "<< f << endl;*/




///11-misol




/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123  >>>231
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = (c*100) + (b * 10) + d;
cout << "Natija = "<< f << endl;*/





///12-m



/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123   ---. 312
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = (b*100) + (d * 10) + c;
cout << "Natija = "<< f << endl;*/




///13-m



/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = (c * 100) + (d * 10) + b;
cout << "Natija = "<< f << endl; */




///14-m

/*int a,b,c,d,f;
cout << "3 xonali sonni kiriting: "; cin>> a; ///123
b = a % 10; ///3=b
c = a / 10 % 10; ///2=c
d = a / 100 ;
f = (b*100) + (c * 10) + d;
cout << "Natija = "<< f << endl;*/


///15-m


/*int a,b;

cout << " 4 xonali sonni kiriting---> "; cin >>a; ///1234
b = a / 100 % 10;
cout << " natija ---> " << b << endl; */



///16-m

/*int a,b;

cout << " 4 xonali sonni kiriting---> "; cin >>a; ///1234
b = a / 1000;
cout << " natija ---> " << b << endl;*/


///17-m




/*int a,c;
cout << "kun boshidan neci sekund otdi: " ; cin >> a; ///3750 sekund

c = a / 60 % 60;


cout  << c << " daqiqa " << endl;*/





///18-m



/*int a,b;
cout << "kun boshidan neci sekund otdi: " ; cin >> a; ///3750 sekund
b = a / 60 / 60;



cout << b<< " soat " <<  endl;*/



///19-m


/*int a,c,f;
cout << "kun boshidan neci sekund otdi: " ; cin >> a; ///3750 sekund

c = a / 60 % 60;
f = a % 60;

cout << c << " daqiqa " << f << " sekund "<< endl; */



///20-m


 int a,b,c,f;
cout << "kun boshidan neci sekund otdi: " ; cin >> a; ///3750 sekund
b = a / 60 / 60;

c = a / 60 % 60;
f = a % 60;

cout << b<< ":soat " << c << ":min " << f << ":sek "<< endl;






}
