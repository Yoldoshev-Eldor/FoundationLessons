#include <iostream>

using namespace std;

int main()
{




    ///1-misol





    /*int day;
    cout << "Hafta kuniga mos raqam kiriting :";
    cin >> day;

    switch (day) {
        case 1: cout << "Dushanba\n"; break;
        case 2: cout << "Seshanba\n"; break;
        case 3: cout << "Chorshanba\n"; break;
        case 4: cout << "Payshanba\n"; break;
        case 5: cout << "Juma\n"; break;
        case 6: cout << "Shanba\n"; break;
        case 7: cout << "Yakshanba\n"; break;
        default: cout << "Bunday kun mavjud emas!\n";
    }*/





   /// 2-misol
    /* int oy;
   cout << " OY raqamini kiriting "; cin >> oy;

   switch (oy){
   case 1: cout << "yanvar"; break;
   case 2: cout << "fevral"; break;
   case 3: cout << "mart"; break;
   case 4: cout << "aprel"; break;
   case 5: cout << "may"; break;
   case 6: cout << "iyun"; break;
   case 7: cout << "iyul"; break;
   case 8: cout << "avgust"; break;
   case 9: cout << "sentabr"; break;
   case 10: cout << "oktabr"; break;
   case 11: cout << "noyabr"; break;
   case 12: cout << "dekabr"; break;
   default: cout << " Bunday oy yoq \n";
   } */



   ///3-misol

  /* int a;
   cout << " fasl raqamini kiriting "; cin >> a;
   switch(a){
   case 1: cout << " qish  "; break;
   case 2: cout << "Bahor "; break;
   case 3: cout << " yoz "; break;
   case 4: cout << " kuz "; break;
   default : cout << " BUnday fasl yoq\n";
   }  */




 ///4-misol

 int a;
   cout << " fasl raqamini kiriting "; cin >> a;
   switch(a){

   case 1: cout << "yanvar"<< " qish \n"; break;
   case 2: cout << "fevral"<< " qish \n"; break;
   case 3: cout << "mart"<< " bahor \n"; break;
   case 4: cout << "aprel"<< " bahor \n"; break;
   case 5: cout << "may"<< " bahor \n"; break;
   case 6: cout << "iyun"<< " yoz \n"; break;
   case 7: cout << "iyul"<< " yoz \n"; break;
   case 8: cout << "avgust"<< " yoz \n"; break;
   case 9: cout << "sentabr"<< " kuz \n"; break;
   case 10: cout << "oktabr"<< " kuz \n"; break;
   case 11: cout << "noyabr"<< " kuz \n"; break;
   case 12: cout << "dekabr"<< " qish \n"; break;
   default : cout << " BUnday oy yoq\n";

   }




   ///5-misol
/*

  int num;
    cout << "Son kiriting :[1;999]";
    cin >> num;

    ////   252 ---->

    if (num > 0 && num < 1000){
        int yuzlar = num / 100; // 4
        int onlar = num / 10 % 10; // 5
        int birlar = num % 10; // 2

        switch (yuzlar) {
            case 1: cout << "bir yuz "; break;
            case 2: cout << "ikki yuz "; break;
            case 3: cout << "uch yuz "; break;
            case 4: cout << "to'rt yuz "; break;
            case 5: cout << "besh yuz "; break;
            case 6: cout << "olti yuz "; break;
            case 7: cout << "yetti yuz "; break;
            case 8: cout << "sakkiz yuz "; break;
            case 9: cout << "to'qqiz yuz "; break;
        }

        switch (onlar) {
            case 1: cout << "o'n "; break;
            case 2: cout << "yigirma "; break;
            case 3: cout << "o'ttiz "; break;
            case 4: cout << "qirq "; break;
            case 5: cout << "ellik "; break;
            case 6: cout << "oltmish "; break;
            case 7: cout << "yettmish "; break;
            case 8: cout << "sakson "; break;
            case 9: cout << "to'qson "; break;
        }

        switch (birlar) {
            case 1: cout << "bir  "; break;
            case 2: cout << "ikki  "; break;
            case 3: cout << "uch  "; break;
            case 4: cout << "to'rt  "; break;
            case 5: cout << "besh  "; break;
            case 6: cout << "olti  "; break;
            case 7: cout << "yetti  "; break;
            case 8: cout << "sakkiz  "; break;
            case 9: cout << "to'qqiz  "; break;
        }

    } else {
        cout << "Siz oraliqdan [1;999] chiqib ketdingiz!\n";
    }

*/





 /// 6-misol





 /*int kun , oy;
 cout << " Kun: "; cin >> kun;
 cout << " oy: "; cin >> oy;
 if (0<kun && 31>kun){
    switch(kun){
    case 1: cout << "ikkinchi \n"; break;
    case 2: cout << "uchinchi \n"; break;
    case 3: cout << "tortinchi \n"; break;
    case 4: cout << "beshinchi \n"; break;
    case 5: cout << "iltinchi \n"; break;
    case 6: cout << "yettinchi \n"; break;
    case 7: cout << "sakkizinchi \n"; break;
    case 8: cout << "toqqizinchi \n"; break;
    case 9: cout << "oninchi \n"; break;
    case 10: cout << "on birinchi \n"; break;
    case 11: cout << "on ikkinchi \n"; break;
    case 12: cout << "on uchinchi \n"; break;
    case 13: cout << "on tortinchi \n"; break;
    case 14: cout << "on beshinchi \n"; break;
    case 15: cout << "on oltinchi \n"; break;
    case 16: cout << "on yettinchi \n"; break;
    case 17: cout << "on sakkizinchi \n"; break;
    case 18: cout << "on toqqizinchi \n"; break;
    case 19: cout << "yigirmanchi \n"; break;
    case 20: cout << "yigirma birinchi \n"; break;
    case 21: cout << "yigirma ikkinchi \n"; break;
    case 22: cout << "yigirma uchinchi \n"; break;
    case 23: cout << "yigirma tortinchi \n"; break;
    case 24: cout << "yigirma behsinchi \n"; break;
    case 25: cout << "yigirma oltinchi \n"; break;
    case 26: cout << "yigirma yettinchi \n"; break;
    case 27: cout << "yigirma sakkizinchi \n"; break;
    case 28: cout << "yigirma toqqizinchi \n"; break;
    case 29: cout << "ottizinchi \n"; break;
    case 30: cout << "ottiz birinchi \n"; break;
    case 31: cout << "birinchi \n"; break;
    default : cout << " bunday kun yoq ";break;
    }
    switch(oy){
   case 1: cout << "yanvar"; break;
   case 2: cout << "fevral"; break;
   case 3: cout << "mart"; break;
   case 4: cout << "aprel"; break;
   case 5: cout << "may"; break;
   case 6: cout << "iyun"; break;
   case 7: cout << "iyul"; break;
   case 8: cout << "avgust"; break;
   case 9: cout << "sentabr"; break;
   case 10: cout << "oktabr"; break;
   case 11: cout << "noyabr"; break;
   case 12: cout << "dekabr"; break;
   default : cout << " BUnday oy yoq\n";

 }
 }
 else if (kun>30 && kun < 32 ) {
     cout << " Birinchi "  << endl;
 switch (oy){
      case 12: cout << "yanvar"; break;
   case 1: cout << "fevral"; break;
   case 2: cout << "mart"; break;
   case 3: cout << "aprel"; break;
   case 4: cout << "may"; break;
   case 5: cout << "iyun"; break;
   case 6: cout << "iyul"; break;
   case 7: cout << "avgust"; break;
   case 8: cout << "sentabr"; break;
   case 9: cout << "oktabr"; break;
   case 10: cout << "noyabr"; break;
   case 11: cout << "dekabr"; break;
   default : cout << " BUnday oy yoq\n";
 }


 }

 else { cout << "Bunday kun yoq qayta kiriting!!! "<< endl;}


*/

 ///7-misol


 /*

  int num;
    cout << "Son kiriting :[1;999]";
    cin >> num;

    ////   252 ---->

    if (num > 0 && num < 1000){
        int yuzlar = num / 100; // 4
        int onlar = num / 10 % 10; // 5
        int birlar = num % 10; // 2

        switch (yuzlar) {
            case 1: cout << "bir yuz "; break;
            case 2: cout << "ikki yuz "; break;
            case 3: cout << "uch yuz "; break;
            case 4: cout << "to'rt yuz "; break;
            case 5: cout << "besh yuz "; break;
            case 6: cout << "olti yuz "; break;
            case 7: cout << "yetti yuz "; break;
            case 8: cout << "sakkiz yuz "; break;
            case 9: cout << "to'qqiz yuz "; break;
        }

        switch (onlar) {
            case 1: cout << "o'n "; break;
            case 2: cout << "yigirma "; break;
            case 3: cout << "o'ttiz "; break;
            case 4: cout << "qirq "; break;
            case 5: cout << "ellik "; break;
            case 6: cout << "oltmish "; break;
            case 7: cout << "yettmish "; break;
            case 8: cout << "sakson "; break;
            case 9: cout << "to'qson "; break;
        }

        switch (birlar) {
            case 1: cout << "bir  "; break;
            case 2: cout << "ikki  "; break;
            case 3: cout << "uch  "; break;
            case 4: cout << "to'rt  "; break;
            case 5: cout << "besh  "; break;
            case 6: cout << "olti  "; break;
            case 7: cout << "yetti  "; break;
            case 8: cout << "sakkiz  "; break;
            case 9: cout << "to'qqiz  "; break;
        }

    } else {
        cout << "Siz oraliqdan [1;999] chiqib ketdingiz!\n";
    }

*/




///8-misollllll






/*
  int num;
    cout << "Son kiriting :[-1;-999]";
    cin >> num;

    ////   252 ---->

    if (num < 0 && num > -1000){
        int yuzlar = num / 100; // 4
        int onlar = num / 10 % 10; // 5
        int birlar = num % 10; // 2

        switch (yuzlar) {
            case -1: cout << "minus bir yuz "; break;
            case -2: cout << "minus ikki yuz "; break;
            case -3: cout << "minus uch yuz "; break;
            case -4: cout << "minus to'rt yuz "; break;
            case -5: cout << "minus besh yuz "; break;
            case -6: cout << "minus olti yuz "; break;
            case -7: cout << "minus yetti yuz "; break;
            case -8: cout << "minus sakkiz yuz "; break;
            case -9: cout << "minus to'qqiz yuz "; break;
        }

        switch (onlar) {
            case -1: cout << "o'n "; break;
            case -2: cout << "yigirma "; break;
            case -3: cout << "o'ttiz "; break;
            case -4: cout << "qirq "; break;
            case -5: cout << "ellik "; break;
            case -6: cout << "oltmish "; break;
            case -7: cout << "yettmish "; break;
            case -8: cout << "sakson "; break;
            case -9: cout << "to'qson "; break;
        }

        switch (birlar) {
            case -1: cout << "bir  "; break;
            case -2: cout << "ikki  "; break;
            case -3: cout << "uch  "; break;
            case -4: cout << "to'rt  "; break;
            case -5: cout << "besh  "; break;
            case -6: cout << "olti  "; break;
            case -7: cout << "yetti  "; break;
            case -8: cout << "sakkiz  "; break;
            case -9: cout << "to'qqiz  "; break;
        }

    } else {
        cout << "Siz oraliqdan [1;999] chiqib ketdingiz!\n";
    }

    */


    ///9-misol




    /*

     int num;
    cout << "Son kiriting :[-999;999]";
    cin >> num;

    ////   252 ---->

    if (num > 0 && num < 1000){
        int yuzlar = num / 100; // 4
        int onlar = num / 10 % 10; // 5
        int birlar = num % 10; // 2

        switch (yuzlar) {
            case 1: cout << "bir yuz "; break;
            case 2: cout << "ikki yuz "; break;
            case 3: cout << "uch yuz "; break;
            case 4: cout << "to'rt yuz "; break;
            case 5: cout << "besh yuz "; break;
            case 6: cout << "olti yuz "; break;
            case 7: cout << "yetti yuz "; break;
            case 8: cout << "sakkiz yuz "; break;
            case 9: cout << "to'qqiz yuz "; break;
        }

        switch (onlar) {
            case 1: cout << "o'n "; break;
            case 2: cout << "yigirma "; break;
            case 3: cout << "o'ttiz "; break;
            case 4: cout << "qirq "; break;
            case 5: cout << "ellik "; break;
            case 6: cout << "oltmish "; break;
            case 7: cout << "yettmish "; break;
            case 8: cout << "sakson "; break;
            case 9: cout << "to'qson "; break;
        }

        switch (birlar) {
            case 1: cout << "bir  "; break;
            case 2: cout << "ikki  "; break;
            case 3: cout << "uch  "; break;
            case 4: cout << "to'rt  "; break;
            case 5: cout << "besh  "; break;
            case 6: cout << "olti  "; break;
            case 7: cout << "yetti  "; break;
            case 8: cout << "sakkiz  "; break;
            case 9: cout << "to'qqiz  "; break;
        }

    }



    if (num < 0 && num > -1000){
        int yuzlar = num / 100; // 4
        int onlar = num / 10 % 10; // 5
        int birlar = num % 10; // 2

        switch (yuzlar) {
            case -1: cout << "minus bir yuz "; break;
            case -2: cout << "minus ikki yuz "; break;
            case -3: cout << "minus uch yuz "; break;
            case -4: cout << "minus to'rt yuz "; break;
            case -5: cout << "minus besh yuz "; break;
            case -6: cout << "minus olti yuz "; break;
            case -7: cout << "minus yetti yuz "; break;
            case -8: cout << "minus sakkiz yuz "; break;
            case -9: cout << "minus to'qqiz yuz "; break;
        }

        switch (onlar) {
            case -1: cout << "o'n "; break;
            case -2: cout << "yigirma "; break;
            case -3: cout << "o'ttiz "; break;
            case -4: cout << "qirq "; break;
            case -5: cout << "ellik "; break;
            case -6: cout << "oltmish "; break;
            case -7: cout << "yettmish "; break;
            case -8: cout << "sakson "; break;
            case -9: cout << "to'qson "; break;
        }

        switch (birlar) {
            case -1: cout << "bir  "; break;
            case -2: cout << "ikki  "; break;
            case -3: cout << "uch  "; break;
            case -4: cout << "to'rt  "; break;
            case -5: cout << "besh  "; break;
            case -6: cout << "olti  "; break;
            case -7: cout << "yetti  "; break;
            case -8: cout << "sakkiz  "; break;
            case -9: cout << "to'qqiz  "; break;
        }

    }
    else if (num > 0 && 1000> num){

    }
        else {
        cout << "Siz oraliqdan [-999;999] chiqib ketdingiz!\n";
    }

    */



    ///10-misol

   /* int a;
    cout << " Bahoni kiriting [1;5]";cin >>a;
    if (a>0 && a<6){
        switch(a){
        case 1: cout << " 1-yomon  \n";break;
        case 2: cout << " 2-qoniqarsiz \n";break;
        case 3: cout << " 3-qoniqarli  \n";break;
        case 4: cout << " 4-yaxshi  \n";break;
        case 5: cout << " 5-alo  \n";break;
        default : cout << " bal xato ";break;
        }
    }
    else {
        cout << " bal xato qayta kiriting " << endl;



        main();
    }
*/



    ///11-misol





    /*

    int oy;
    cout << " oy raqamini kiriting: " ; cin >> oy;

    if (oy <13 && oy>0){
        switch(oy){
        case 1: cout <<"bu oyda 31 ta kun bor\n";break;
        case 2:cout << "bu oyda 28 ta kun bor\n";break;
        case 3:cout << "bu oyda 31 ta kun bor\n";break;
        case 4:cout <<"bu oyda 30 ta kun bor\n";break;
        case 5:cout << "bu oyda 31 ta kun bor\n";break;
        case 6:cout << "bu oyda 30 ta kun bor\n";break;
        case 7:cout << "bu oyda 31 ta kun bor\n";break;
        case 8:cout << "bu oyda 31 ta kun bor\n";break;
        case 9:cout << "bu oyda  30 ta kun bor\n";break;
        case 10:cout << "bu oyda 31 ta kun bor\n";break;
        case 11:cout << "bu oyda 30 ta kun bor\n";break;
        case 12:cout << "bu oyda 31 ta kun bor\n";break;
        default : cout << " bunaqa oy yoq \n";break;
        }
    }
    else {
            cout << " bunaqa oy yoq qayta kiriting \n";
            main();}
    */






    ///12-misol


    /*
int oy;
cout << " oy tartib raqamini kiriting "; cin >> oy;

    switch (oy){

   case 1: cout << "1 - yanvar yangi yil; 14- yanvar vatan himoyachilari kuni "; break;
   case 2: cout << "14 - fevral zahriddin muhammad bobur tavvallud ayyomi "; break;
   case 3: cout << "8- mart xotin qizlar  bayrami; 21-mart navroz bayrami "; break;
   case 4: cout << "bu oyda bayramlar yooq "; break;
   case 5: cout << "9- may xotira kuni "; break;
   case 6: cout << "1-iyun bolalarni himoya qilish kuni "; break;
   case 7: cout << "bu oyda bayramlar yooq"; break;
   case 8: cout << "bu oyda bayramlar yooq"; break;
   case 9: cout << "1-sentabr mustaqillik bayrami "; break;
   case 10: cout << "1-oktabr oqituvchi va murabbiylar kuni"; break;
   case 11: cout << "bu oyda bayramlar yooq"; break;
    case 12: cout << "8-dekabr konstitutsiya qabul qilingan kun; 31-dekabr yangi yil bayrami "; break;
   default : cout << " BUnday oy yoq\n";

    }
    */


    ///13-misol



/*
    double qiymat;
    int valyuta;

    cout << "************** Welcome to our Coverter Application *********\n";
    cout << "Qiymat kiriting(so'mda) :";
    cin >> qiymat;
    cout << "\n********** Valyuta tanlang! **********\n";
    cout << "[1] - USD  |  [2] - EUR  |  [3] - RUB  |  [4] - CNY\n==>> ";
    cin >> valyuta;

    switch (valyuta) {
        case 1: cout << qiymat / 12603.07 << " dollar!\n"; break;
        case 2: cout << qiymat / 13526.75 << " euro!\n"; break;
        case 3: cout << qiymat / 152.31 << " rubl!\n"; break;
        case 4: cout << qiymat / 1732.15 << " yuan!\n"; break;
        default: cout << "ERROR!\n";
    }
*/




///14-misol



/*
int oy;
cout << " oy tartib raqamini kiriting "; cin >> oy;

    switch (oy){

   case 1: cout << "1 - yanvar yangi yil; 14- yanvar vatan himoyachilari kuni "; break;
   case 2: cout << "14 - fevral zahriddin muhammad bobur tavvallud ayyomi "; break;
   case 3: cout << "8- mart xotin qizlar  bayrami; 21-mart navroz bayrami "; break;
   case 4: cout << "bu oyda bayramlar yooq "; break;
   case 5: cout << "9- may xotira kuni "; break;
   case 6: cout << "1-iyun bolalarni himoya qilish kuni "; break;
   case 7: cout << "bu oyda bayramlar yooq"; break;
   case 8: cout << "bu oyda bayramlar yooq"; break;
   case 9: cout << "1-sentabr mustaqillik bayrami "; break;
   case 10: cout << "1-oktabr oqituvchi va murabbiylar kuni"; break;
   case 11: cout << "bu oyda bayramlar yooq"; break;
    case 12: cout << "8-dekabr konstitutsiya qabul qilingan kun; 31-dekabr yangi yil bayrami "; break;
   default : cout << " BUnday oy yoq\n";

    }
    */


    ///15-misol



/*
    int a,minglar, yuzlar,onlar,birlar;
    cout << " 4 xonali son kirting [1;9999]";cin>>a;//1234
    if (a>0 && a<10000){
            birlar = (a/1) %10;
            onlar = (a/10) %10;
            yuzlar = (a/100) %10;
            minglar = (a/1000) %10;
    switch (minglar){
    case 1: cout << "bir ming ";break;
    case 2: cout << "ikki ming ";break;
    case 3: cout << "uch ming ";break;
    case 4: cout << "tort ming ";break;
    case 5: cout << "besh ming ";break;
    case 6: cout << "olti ming ";break;
    case 7: cout << "yetti ming ";break;
    case 8: cout << "sakkiz ming ";break;
    case 9: cout << "toqqiz ming ";break;
    }
    switch(yuzlar){
     case 1: cout << "bir yuz ";break;
    case 2: cout << "ikki yuz ";break;
    case 3: cout << "uch yuz ";break;
    case 4: cout << "tort yuz ";break;
    case 5: cout << "besh yuz ";break;
    case 6: cout << "olti yuz ";break;
    case 7: cout << "yetti yuz ";break;
    case 8: cout << "sakkiz yuz ";break;
    case 9: cout << "toqqiz yuz ";break;
    }
    switch (onlar) {
            case 1: cout << "o'n "; break;
            case 2: cout << "yigirma "; break;
            case 3: cout << "o'ttiz "; break;
            case 4: cout << "qirq "; break;
            case 5: cout << "ellik "; break;
            case 6: cout << "oltmish "; break;
            case 7: cout << "yettmish "; break;
            case 8: cout << "sakson "; break;
            case 9: cout << "to'qson "; break;
        }

        switch (birlar) {
            case 1: cout << "bir  "; break;
            case 2: cout << "ikki  "; break;
            case 3: cout << "uch  "; break;
            case 4: cout << "to'rt  "; break;
            case 5: cout << "besh  "; break;
            case 6: cout << "olti  "; break;
            case 7: cout << "yetti  "; break;
            case 8: cout << "sakkiz  "; break;
            case 9: cout << "to'qqiz  "; break;
        }

    }
    else {
        cout <<"Xato qiymat kiritingiz " << endl;
        main();
    }

    */





    ///16-misol





}
