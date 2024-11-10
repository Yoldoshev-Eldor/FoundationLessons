#include<iostream>
#include<windows.h>

using namespace std;

int main() {

    /////////// Uzcard data base /////////////
    int pinKod = 1111;
    double balance = 10000000;
    bool smsXabarnoma = false;
    int tel;
    int xatoParolSanoq = 0;
    //////////////////////////////////////////

kodga:

    if (xatoParolSanoq == 3) {
        cout << "Kartangiz bloklandi!" << endl;
        Beep(500, 500);
        Beep(500, 500);
        Beep(500, 500);

        Sleep(2000);
        int n = 5;
        while (n >= 0) {
            cout << n << endl;
            n--;
            Sleep(1000);
            system("cls");
        }

        xatoParolSanoq = 0;
    }

    cout << "Pin kodni kiriting: ";
    int kod;
    cin >> kod; /// 2222


    if (kod != pinKod) {
        xatoParolSanoq++; /// 3
        cout << "Pin kod xato " << endl;;

        goto kodga;
    }

menu:

    cout << "1. Balance " << endl;
    cout << "2. Naxt pul yechish " << endl;
    cout << "3. Sms xabarnoma " << endl;
    cout << "4. Pin kod o'zgartirish " << endl;
    cout << "5. Mobile operatorlarga to'lov " << endl;
    cout << "6. Kommunal " << endl;
    cout << "0. Chiqish " << endl;

    int menu;
    cout << " Menu tanlang: ";
    cin >> menu; /// 2

    switch (menu) {
        ///////////////////

        case 1: {
            /// Balansniyam chiroyliroq qilib chiqaring

            cout << "Sizning balansingiz = " << to_string(balance) << endl;
            break;
        }
        case 2: {
            system("color D");
            int naqtpul;
            // naqt pul yechgan paytda balansda yetarli bolsa yechish kerak
            cout << "Kartangizda " << to_string(balance) << " So`m bor" << endl;
            cout << "  " << endl;
            cout << " ESLATMA ! ! ! ----> Xizmat xaqqi 1% ." << endl;
            cout << "  " << endl;
            cout << "  " << endl;
            cout << " Qancha pul yechmoqchisiz: " << endl;
            cout << "  " << endl;
            cout << "  " << endl;
            cout << "[ 1. ]  50.000 ";
            cout << "       " << " [ 2. ]  100.000 " << endl;
            cout << "[ 3. ]  150.000 ";
            cout << "       " << "[ 4. ]  200.000 " << endl;
            cout << "[ 5. ]  500.000 ";
            cout << "       " << "[ 6. ]  1.000.000 " << endl;
            cout << "[ 7. ] Boshqa miqdorda pul yechish " << endl;
            cout << "  " << endl;
            cout << " Bolimni kiriting: ";
            cin >> naqtpul;

            switch (naqtpul) {
                case 1: {
                    if (balance - (50000 + 500) > 0) {
                        balance = balance - (50000 + 500);

                        cout << "  Naqt Pulni oling ----- > " << endl;
                        Beep(500, 500);
                        Beep(500, 500);
                        Beep(500, 500);
                        cout << "Sining Balansingizda: " << to_string(balance) << " Pul qoldi. " << endl;
                        cout << "  " << endl;
                        cout << "                       " << "CHEK" << "            " << endl;
                        cout << "         " << "       " << "UZcard" << "         " << "          " << endl;
                        cout << "         " << "  " << "Bankomat ATM Xalq banki" << "         " << endl;
                        cout << "         " << "  " << "Mijoz:   Y******V E***R" << "        " << endl;
                        cout << "Nomer operatsiya" << "                       " << "107433" << endl;
                        cout << "Terminal IDisi" << "                         " << "00010916 " << endl;

                        cout << "mijozdan olingan xizmat haqqi" << "          " << "1 % " << endl;
                        cout << "Sana va Vaqt" << "                           " << "26.06.2024" << endl;
                        cout << "Kartda qolgan qoldiq: " << "                 " << to_string(balance) << endl;

                        cout << "Karta turi:" << "                            " << "Uzcard" << endl;
                        cout << "Karta Raqami" << "                           " << "8600*****3432" << endl;
                        cout << "  " << " " << "operatsiya pin kod bilan tasdiqlangan" << "" << "" << endl;
                        break;
                    } else {
                        cout << " Kartangizda mablag` yetarli emas... " << endl;
                        cout << " Kartangizda  " << to_string(balance) << " Som bor" << endl;
                    }
                }
                case 2: {
                    if (balance - (100000 + 1000) > 0) {
                        balance = balance - (100000 + 1000);

                        cout << "  Naqt Pulni oling ----- > " << endl;
                        Beep(500, 500);
                        Beep(500, 500);
                        Beep(500, 500);
                        cout << "Sining Balansingizda: " << to_string(balance) << " Pul qoldi. " << endl;
                        cout << "  " << endl;
                        cout << "                       " << "CHEK" << "            " << endl;
                        cout << "         " << "       " << "UZcard" << "         " << "          " << endl;
                        cout << "         " << "  " << "Bankomat ATM Xalq banki" << "         " << endl;
                        cout << "         " << "  " << "Mijoz:   Y******V E***R" << "        " << endl;
                        cout << "Nomer operatsiya" << "                       " << "107433" << endl;
                        cout << "Terminal IDisi" << "                         " << "00010916 " << endl;

                        cout << "mijozdan olingan xizmat haqqi" << "          " << "1 % " << endl;
                        cout << "Sana va Vaqt" << "                           " << "26.06.2024" << endl;
                        cout << "Kartda qolgan qoldiq: " << "                 " << to_string(balance) << endl;

                        cout << "Karta turi:" << "                            " << "Uzcard" << endl;
                        cout << "Karta Raqami" << "                           " << "8600*****3432" << endl;
                        cout << "  " << " " << "operatsiya pin kod bilan tasdiqlangan" << "" << "" << endl;
                        break;
                    } else {
                        cout << " Kartangizda mablag` yetarli emas... " << endl;
                        cout << " Kartangizda  " << to_string(balance) << " Som bor" << endl;
                    }
                }

                case 3: {
                    if (balance - (150000 + 1500) > 0) {
                        balance = balance - (150000 + 1500);

                        cout << "  Naqt Pulni oling ----- > " << endl;
                        Beep(500, 500);
                        Beep(500, 500);
                        Beep(500, 500);
                        cout << "Sining Balansingizda: " << to_string(balance) << " Pul qoldi. " << endl;
                        cout << "  " << endl;
                        cout << "                       " << "CHEK" << "            " << endl;
                        cout << "         " << "       " << "UZcard" << "         " << "          " << endl;
                        cout << "         " << "  " << "Bankomat ATM Xalq banki" << "         " << endl;
                        cout << "         " << "  " << "Mijoz:   Y******V E***R" << "        " << endl;
                        cout << "Nomer operatsiya" << "                       " << "107433" << endl;
                        cout << "Terminal IDisi" << "                         " << "00010916 " << endl;

                        cout << "mijozdan olingan xizmat haqqi" << "          " << "1 % " << endl;
                        cout << "Sana va Vaqt" << "                           " << "26.06.2024" << endl;
                        cout << "Kartda qolgan qoldiq: " << "                 " << to_string(balance) << endl;

                        cout << "Karta turi:" << "                            " << "Uzcard" << endl;
                        cout << "Karta Raqami" << "                           " << "8600*****3432" << endl;
                        cout << "  " << " " << "operatsiya pin kod bilan tasdiqlangan" << "" << "" << endl;
                        break;
                    } else {
                        cout << " Kartangizda mablag` yetarli emas... " << endl;
                        cout << " Kartangizda  " << to_string(balance) << " Som bor" << endl;
                    }
                }
                case 4: {
                    if (balance - (200000 + 2000) > 0) {
                        balance = balance - (200000 + 2000);

                        cout << "  Naqt Pulni oling ----- > " << endl;
                        Beep(500, 500);
                        Beep(500, 500);
                        Beep(500, 500);
                        cout << "Sining Balansingizda: " << to_string(balance) << " Pul qoldi. " << endl;
                        cout << "  " << endl;
                        cout << "                      " << "CHEK" << "            " << endl;
                        cout << "         " << "       " << "UZcard" << "         " << "          " << endl;
                        cout << "         " << "  " << "Bankomat ATM Xalq banki" << "         " << endl;
                        cout << "         " << "  " << "Mijoz:   Y******V E***R" << "        " << endl;
                        cout << "Nomer operatsiya" << "                       " << "107433" << endl;
                        cout << "Terminal IDisi" << "                         " << "00010916 " << endl;

                        cout << "mijozdan olingan xizmat haqqi" << "          " << "1 % " << endl;
                        cout << "Sana va Vaqt" << "                           " << "26.06.2024" << endl;
                        cout << "Kartda qolgan qoldiq: " << "                 " << to_string(balance) << endl;

                        cout << "Karta turi:" << "                            " << "Uzcard" << endl;
                        cout << "Karta Raqami" << "                           " << "8600*****3432" << endl;
                        cout << "  " << " " << "operatsiya pin kod bilan tasdiqlangan" << "" << "" << endl;
                        break;
                    } else {
                        cout << " Kartangizda mablag` yetarli emas... " << endl;
                        cout << " Kartangizda  " << to_string(balance) << " Som bor" << endl;
                    }
                }
                case 5: {
                    if (balance - (500000 + 5000) > 0) {
                        balance = balance - (500000 + 5000);

                        cout << "  Naqt Pulni oling ----- > " << endl;
                        Beep(500, 500);
                        Beep(500, 500);
                        Beep(500, 500);
                        cout << "Sining Balansingizda: " << to_string(balance) << " Pul qoldi. " << endl;
                        cout << "  " << endl;
                        cout << "                      " << "CHEK" << "            " << endl;
                        cout << "         " << "       " << "UZcard" << "         " << "          " << endl;
                        cout << "         " << "  " << "Bankomat ATM Xalq banki" << "         " << endl;
                        cout << "         " << "  " << "Mijoz:   Y******V E***R" << "        " << endl;
                        cout << "Nomer operatsiya" << "                       " << "107433" << endl;
                        cout << "Terminal IDisi" << "                         " << "00010916 " << endl;

                        cout << "mijozdan olingan xizmat haqqi" << "          " << "1 % " << endl;
                        cout << "Sana va Vaqt" << "                           " << "26.06.2024" << endl;
                        cout << "Kartda qolgan qoldiq: " << "                 " << to_string(balance) << endl;

                        cout << "Karta turi:" << "                            " << "Uzcard" << endl;
                        cout << "Karta Raqami" << "                           " << "8600*****3432" << endl;
                        cout << "  " << " " << "operatsiya pin kod bilan tasdiqlangan" << "" << "" << endl;
                        break;
                    } else {
                        cout << " Kartangizda mablag` yetarli emas... " << endl;
                        cout << " Kartangizda  " << to_string(balance) << " Som bor" << endl;
                    }
                }
                case 6: {
                    if (balance - (1000000 + 10000) > 0) {
                        balance = balance - (1000000 + 10000);

                        cout << "  Naqt Pulni oling ----- > " << endl;
                        Beep(500, 500);
                        Beep(500, 500);
                        Beep(500, 500);
                        cout << "Sining Balansingizda: " << to_string(balance) << " Pul qoldi. " << endl;
                        cout << "  " << endl;
                        cout << "                      " << "CHEK" << "            " << endl;
                        cout << "         " << "       " << "UZcard" << "         " << "          " << endl;
                        cout << "         " << "  " << "Bankomat ATM Xalq banki" << "         " << endl;
                        cout << "         " << "  " << "Mijoz:   Y******V E***R" << "        " << endl;
                        cout << "Nomer operatsiya" << "                       " << "107433" << endl;
                        cout << "Terminal IDisi" << "                         " << "00010916 " << endl;

                        cout << "mijozdan olingan xizmat haqqi" << "          " << "1 % " << endl;
                        cout << "Sana va Vaqt" << "                           " << "26.06.2024" << endl;
                        cout << "Kartda qolgan qoldiq: " << "                 " << to_string(balance) << endl;

                        cout << "Karta turi:" << "                            " << "Uzcard" << endl;
                        cout << "Karta Raqami" << "                           " << "8600*****3432" << endl;
                        cout << "  " << " " << "operatsiya pin kod bilan tasdiqlangan" << "" << "" << endl;
                        break;
                    } else {
                        cout << " Kartangizda mablag` yetarli emas... " << endl;
                        cout << " Kartangizda  " << to_string(balance) << " Som bor" << endl;
                    }
                }

                case 7: {
                    cout << " Yechmoqchi bolgan summangizni kiriting: ";
                    cin >> naqtpul;
                    if ((balance - (naqtpul + (naqtpul / 100.0))) > 0) {
                        balance = balance - (naqtpul + (naqtpul / 100.0));
                        cout << " Naqt pulni oling... " << endl;
                        cout << " Kartangizda" << to_string(balance) << " Pul qoldi" << endl;
                        cout << "  " << endl;
                        cout << "                      " << "CHEK" << "            " << endl;
                        cout << "         " << "       " << "UZcard" << "         " << "          " << endl;
                        cout << "         " << "  " << "Bankomat ATM Xalq banki" << "         " << endl;
                        cout << "         " << "  " << "Mijoz:   Y******V E***R" << "        " << endl;
                        cout << "Nomer operatsiya" << "                       " << "107433" << endl;
                        cout << "Terminal IDisi" << "                         " << "00010916 " << endl;

                        cout << "mijozdan olingan xizmat haqqi" << "          " << "1 % " << endl;
                        cout << "Sana va Vaqt" << "                           " << "26.06.2024" << endl;
                        cout << "Kartda qolgan qoldiq: " << "                 " << to_string(balance) << endl;

                        cout << "Karta turi:" << "                            " << "Uzcard" << endl;
                        cout << "Karta Raqami" << "                           " << "8600*****3432" << endl;
                        cout << "  " << " " << "operatsiya pin kod bilan tasdiqlangan" << "" << "" << endl;
                        Beep(500, 500);
                        Beep(500, 500);
                        Beep(500, 500);
                    } else {
                        cout << " Kartangizda mablag` yetarli emas... " << endl;
                        cout << " Kartangizda  " << to_string(balance) << " Som bor" << endl;
                    }
                }
            }

            // agar yetarli bolsa 1 foizi bilan birga yechishi kerak
            //yechgandan keyin chek chiqarish kerak

            break;
        }
        case 3: {
            // Agar sms xarnoma o'chiq bo'lsa yoqish chiqsin, Agar o'chiq bo'lsa yoqish chiqsin!
            // Tepada smsXabarnoma nomli o'zgaruvchi bor o'shandan foydalanilsin


            break;
        }
        case 4: {
            /// Pin kod o'zgartirishda "yangi pin kodni kiriting " deb chiqishi kerak
            /// keyin "yangi pin kodni takroran kiriting " deb chiqsin,
            /// ikki marta kiritiladi va ikkalasi bir xil bolsa yangi pinkod
            /// tepadagi pinkod o'zgaruvchisiga solib qo'yiladi

            break;
        }
        case 5: {
            cout << "Nomer kiriting +99 8( "; /// 934445566

            /// Ucell ga pul tolandi
            /// Nomerga qarab qaysi operator ekanini aniqlab yozuv chiqaring
            /// Masalan: kodi 90 yoki 91 bolsa  Beeline
            /// Balansda pul yetarli bolsa to'lasin!
        }
        case 6: {
            /// Komunal to'lovning id nomeri kiritiladi keyin summa kiritiladi
            /// To'langandan keyin to'langanligi haqida malumot chiqaring yani chek

            break;
        }
        case 0: {
            cout << "" << endl;
            return 0;
        }
    } ////////////////////////////////


    cout << endl;
    cout << "Yana amaliyot bajarasizmi?" << endl;
    cout << "1.Xa" << endl;
    cout << "2.Yo'q" << endl;
    cout << " Tanlang: ";
    int k;
    cin >> k;

    if (k == 1) {
        system("cls");
        goto menu;
    }


    Beep(500, 500);
    Beep(500, 500);
    Beep(500, 500);
    cout << "Kartangizni oling!" << endl;
}
