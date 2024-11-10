#include<iostream>
#include<windows.h>

using namespace std;

int main() {
    system("color 10");



    /////////// Uzcard data base /////////////
    int pinKod = 1111;
    double balance = 10000000;
    bool smsXabarnoma = false;
    int tel;
    int xatoParolSanoq = 0;
    //////////////////////////////////////////

kodga:

    if (xatoParolSanoq == 3) {
system ("color 40");
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
system("color A");
    cout << "1. Balance " << endl;
    cout << "2. Naxt pul yechish " << endl;
    cout << "3. Sms xabarnoma " << endl;
    cout << "4. Pin kod o'zgartirish " << endl;
    cout << "5. Mobile operatorlarga to'lov " << endl;
    cout << "6. Kommunal " << endl;
    cout << "7. Karta Balansini toldirish. "<<endl;
    cout << "0. Chiqish " << endl;

    int menu;
    cout << " Menu tanlang: ";
    cin >> menu; /// 2

    switch (menu) {
        ///////////////////

        case 1: { system("color D");
            /// Balansniyam chiroyliroq qilib chiqaring

            cout << "Sizning balansingiz = " << to_string(balance) << endl;
            break;
        }
        case 2: {system("color 70");

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
            long long int a;
            // Agar sms xarnoma o'chiq bo'lsa yoqish chiqsin, Agar o'chiq bo'lsa yoqish chiqsin!
            // Tepada smsXabarnoma nomli o'zgaruvchi bor o'shandan foydalanilsin
            cout << " Sms habar Ulaysizmi " << endl;
            cout << " [ 1. ]  Ha " << "      ";
            cout << " [ 2. ]  yoq " << endl;
            cout << " Bolimni Tanalng  ";
            cin >> a;
            if (a > 0 && a < 2) {
            telraqam:
                cout << " Telefon raqamingizni kiriting: + (998)( ";
                cin >> a;
                if (a > 100000000 && a < 1000000000) {
                    cout << " Telefon raqam muvaffaqiyatli kiritildi. " << endl;
                } else {
                    cout << " Telefon raqam xato qayta kiriting: " << endl;
                    goto telraqam;
                }
            } else if (a > 1 && a < 3) {
                cout << " Boshqa bolimni tanlang: " << endl;
            }


            break;
        }
        case 4: { system("color C");
            int pin1, pin2, yangipin;
            // Pin kod o'zgartirishda "yangi pin kodni kiriting " deb chiqishi kerak
            // keyin "yangi pin kodni takroran kiriting " deb chiqsin,
            //ikki marta kiritiladi va ikkalasi bir xil bolsa yangi pinkod
            // tepadagi pinkod o'zgaruvchisiga solib qo'yiladi
        pinn:
            cout << " Yangi pinkodni kiriting: ";
            cin >> pin1;
            cout << " Yangi Kiritgan pinni takrorlang: ";
            cin >> pin2;
            if (pin1 == pin2) {
                cout << " Pinkod muvaffaqiyatli o`zgartirildi ! ! ! " << endl;
                pinKod = pin1;
            } else {
                cout << " Kiritgan parollaringiz bir biriga mos emas... Qayta urining: " << endl;
                goto pinn;
            }

            break;
        }
        case 5: {system ("color B");
            long long int bolim, pulmiqdor;
            cout << " Mobil Operatorlar : " << endl;
            cout << " [ 1. ] Belline ";
            cout << "      [ 2. ] Ucell " << endl;
            cout << " [ 3. ] Uzmobile ";
            cout << "      [ 4. ] MobiUz " << endl;
            cout << " [ 5. ] Humans ";
            cout << "      [ 6. ] Oq " << endl;
            cout << " Ozingizga mos Kerakli Operatorni Tanlang: ";
            cin >> bolim;
            switch (bolim) {
                case 1: {
                raqam:
                    int telraqam;
                    cout << " Telefon Raqamingizni kiriting: ";
                    cin >> telraqam;
                    if (telraqam / 10000000 == 90 || telraqam / 10000000 == 91) {
                        cout << " Raqamingizni qanchaga toldirmoqchisiz: ";
                        cin >> pulmiqdor;

                        if ((balance - pulmiqdor) > 0) {
                            cout << " Belline Operatoriga " << pulmiqdor << " som tolandi" << endl;
                            cout << " Kartangizdan " << pulmiqdor << " som yechib olindi ! ! ! " << endl;
                            cout << " " << endl;
                            balance = balance - pulmiqdor;
                            cout << " Kartangizda " << to_string(balance) << " som pul qoldi" << endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "Operator" << "              " << " Belline " << endl;
                                cout << "Telefon raqam" << "          " << telraqam << endl;
                                cout << "Otkazma miqdori" << "        " << pulmiqdor << endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);


                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }
                        }
                    } else {
                        cout << " kiritilgan raqam xato qayta kiriting ! ! ! " << endl;
                        goto raqam;
                    }
                    break;
                }


                case 2: {
                raqam2:
                    int telraqam;
                    cout << " Telefon Raqamingizni kiriting: ";
                    cin >> telraqam;
                    if (telraqam / 10000000 == 94 || telraqam / 10000000 == 93) {
                        cout << " Raqamingizni qanchaga toldirmoqchisiz: ";
                        cin >> pulmiqdor;

                        if ((balance - pulmiqdor) > 0) {
                            cout << " Ucell Operatoriga " << pulmiqdor << " som tolandi" << endl;
                            cout << " Kartangizdan " << pulmiqdor << " som yechib olindi ! ! ! " << endl;
                            cout << " " << endl;
                            balance = balance - pulmiqdor;
                            cout << " Kartangizda " << to_string(balance) << " som pul qoldi" << endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "Operator" << "              " << " Ucell " << endl;
                                cout << "Telefon raqam" << "          " << telraqam << endl;
                                cout << "Otkazma miqdori" << "        " << pulmiqdor << endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);
                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }
                        }
                    } else {
                        cout << " kiritilgan raqam xato qayta kiriting ! ! ! " << endl;
                        goto raqam2;
                    }
                    break;
                }

                case 3: {
                raqam3:
                    int telraqam;
                    cout << " Telefon Raqamingizni kiriting: ";
                    cin >> telraqam;
                    if (telraqam / 10000000 == 99 || telraqam / 10000000 == 95 || telraqam / 10000000 == 77  ) {
                        cout << " Raqamingizni qanchaga toldirmoqchisiz: ";
                        cin >> pulmiqdor;

                        if ((balance - pulmiqdor) > 0) {
                            cout << " Uzmobile Operatoriga " << pulmiqdor << " som tolandi" << endl;
                            cout << " Kartangizdan " << pulmiqdor << " som yechib olindi ! ! ! " << endl;
                            cout << " " << endl;
                            balance = balance - pulmiqdor;
                            cout << " Kartangizda " << to_string(balance) << " som pul qoldi" << endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "Operator" << "              " << " Uzmobile " << endl;
                                cout << "Telefon raqam" << "          " << telraqam << endl;
                                cout << "Otkazma miqdori" << "        " << pulmiqdor << endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);
                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }
                        }
                    } else {
                        cout << " kiritilgan raqam xato qayta kiriting ! ! ! " << endl;
                        goto raqam3;
                    }
                    break;
                }
                case 4: {
                raqam4:
                    int telraqam;
                    cout << " Telefon Raqamingizni kiriting: ";
                    cin >> telraqam;
                    if (telraqam / 10000000 == 88 || telraqam / 10000000 == 97) {
                        cout << " Raqamingizni qanchaga toldirmoqchisiz: ";
                        cin >> pulmiqdor;

                        if ((balance - pulmiqdor) > 0) {
                            cout << " MobiUz Operatoriga " << pulmiqdor << " som tolandi" << endl;
                            cout << " Kartangizdan " << pulmiqdor << " som yechib olindi ! ! ! " << endl;
                            cout << " " << endl;
                            balance = balance - pulmiqdor;
                            cout << " Kartangizda " << to_string(balance) << " som pul qoldi" << endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "Operator" << "              " << " MobiUz " << endl;
                                cout << "Telefon raqami" << "          " << telraqam << endl;
                                cout << "Otkazma miqdori" << "        " << pulmiqdor << endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);
                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }
                        }
                    } else {
                        cout << " kiritilgan raqam xato qayta kiriting ! ! ! " << endl;
                        goto raqam4;
                    }
                    break;
                }
                case 5: {
                raqam5:
                    int telraqam;
                    cout << " Telefon Raqamingizni kiriting: ";
                    cin >> telraqam;
                    if (telraqam / 10000000 == 33 ) {
                        cout << " Raqamingizni qanchaga toldirmoqchisiz: ";
                        cin >> pulmiqdor;

                        if ((balance - pulmiqdor) > 0) {
                            cout << " Humans Operatoriga " << pulmiqdor << " som tolandi" << endl;
                            cout << " Kartangizdan " << pulmiqdor << " som yechib olindi ! ! ! " << endl;
                            cout << " " << endl;
                            balance = balance - pulmiqdor;
                            cout << " Kartangizda " << to_string(balance) << " som pul qoldi" << endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "Operator" << "              " << " Humans " << endl;
                                cout << "Telefon raqam" << "          " << telraqam << endl;
                                cout << "Otkazma miqdori" << "        " << pulmiqdor << endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);
                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }
                        }
                    } else {
                        cout << " kiritilgan raqam xato qayta kiriting ! ! ! " << endl;
                        goto raqam5;
                    }
                    break;
                }
                case 6: {
                raqam6:
                    int telraqam;
                    cout << " Telefon Raqamingizni kiriting: ";
                    cin >> telraqam;
                    if (telraqam / 10000000 == 20 || telraqam / 10000000 == 21) {
                        cout << " Raqamingizni qanchaga toldirmoqchisiz: ";
                        cin >> pulmiqdor;

                        if ((balance - pulmiqdor) > 0) {
                            cout << " Oq Operatoriga " << pulmiqdor << " som tolandi" << endl;
                            cout << " Kartangizdan " << pulmiqdor << " som yechib olindi ! ! ! " << endl;
                            cout << " " << endl;
                            balance = balance - pulmiqdor;
                            cout << " Kartangizda " << to_string(balance) << " som pul qoldi" << endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "Operator" << "              " << " Oq " << endl;
                                cout << "Telefon raqami" << "          " << telraqam << endl;
                                cout << "Otkazma miqdori" << "        " << pulmiqdor << endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);
                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }
                        }
                    } else {
                        cout << " kiritilgan raqam xato qayta kiriting ! ! ! " << endl;
                        goto raqam6;
                    }
                    break;
                }
            }


            // Ucell ga pul tolandi
            // Nomerga qarab qaysi operator ekanini aniqlab yozuv chiqaring
            // Masalan: kodi 90 yoki 91 bolsa  Beeline

            // Balansda pul yetarli bolsa to'lasin!
            break;

        }
        case 6: {system("color 20");

            /// Komunal to'lovning id nomeri kiritiladi keyin summa kiritiladi
            /// To'langandan keyin to'langanligi haqida malumot chiqaring yani chek

            cout <<" Qaysi Xizmatga tolamoqchisiz:  ! ! ! "<< endl;
            cout << " [ 1. ]  'Tabiiy Gaz' ";
            cout << "           [ 2. ]  'Sovuq Suv' "<<endl;
            cout << " [ 3. ]  'Issiq Suv' ";
            cout << "            [ 4. ]  'Musr' "<<endl;
            cout << "     "<<endl;
            int komunal;
            cout << " Ozingizga Kerakli Bo`limni Tanlang -->> ";cin>>komunal;
            switch(komunal) {

                case 1: {
                    gazga:
                    int gaz;

                    cout << " Tabiy gazga tolov qilmoqchimisiz Idni kiriting (ID raqam 6 xonali) "; cin>>gaz;
                    if (gaz>99999 && gaz<1000000) {
                        cout << " ID kiritildi ! ! !"<<endl;
                        int tabiiygaz;
                        cout << " 1 Kub gaz 380 som. Qancha kubga tolov qilmoqchisiz miqdorini kiriting: ";cin>>tabiiygaz;
                        if( (balance-(tabiiygaz*380))>0 ) {
                            balance = balance-(tabiiygaz*380);
                            cout << " Tabiiy gazga To`lov amalga oshirildi ! ! ! "<< endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "XIZMAT TURI" << "           " << " Komunal " << endl;
                                cout << "Komunal " << "               " << "Tabiiy gaz " << endl;
                                cout << "Otkazma miqdori" << "        " <<tabiiygaz*380<< endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << "ID " << "                    " << gaz << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);
                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }


                        }
                        else {
                            cout << " Kartada mablag` yetarli emas ! ! ! "<<endl;
                        }

                    }
                    else {
                        cout << " ID xato qayta kiriting ! ! ! "<<endl;
                        goto gazga;
                    }
                    break;
                }


 case 2: {
                    gazga2:
                    int gaz;

                    cout << " Sovuq suvga tolov qilmoqchimisiz IDni kiriting (ID raqam 6 xonali) "; cin>>gaz;
                    if (gaz>99999 && gaz<1000000) {
                        cout << " ID kiritildi ! ! !"<<endl;
                        int tabiiygaz;
                        cout << " 1 m.kub sovuq suv 1500 som. Qancha kubga tolov qilmoqchisiz miqdorini kiriting: ";cin>>tabiiygaz;
                        if( (balance-(tabiiygaz*1500))>0 ) {
                            balance = balance-(tabiiygaz*1500);
                            cout << " Sovuq suvga To`lov amalga oshirildi ! ! ! "<< endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "XIZMAT TURI" << "           " << " Komunal " << endl;
                                cout << "Komunal " << "               " << "Sovuq suv " << endl;
                                cout << "Otkazma miqdori" << "        " <<tabiiygaz*1500<< endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << "ID " << "                    " << gaz << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);
                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }


                        }
                        else {
                            cout << " Kartada mablag` yetarli emas ! ! ! "<<endl;
                        }

                    }
                    else {
                        cout << " ID xato qayta kiriting ! ! ! "<<endl;
                        goto gazga2;
                    }
                    break;
                }




 case 3: {
                    gazga3:
                    int gaz;

                    cout << " Issiq suvga tolov qilmoqchimisiz Idni kiriting (ID raqam 6 xonali) "; cin>>gaz;
                    if (gaz>99999 && gaz<1000000) {
                        cout << " ID kiritildi ! ! !"<<endl;
                        int tabiiygaz;
                        cout << " 1 m.Kub issiq suv narxi 5200 som. Qancha kubga tolov qilmoqchisiz miqdorini kiriting: ";cin>>tabiiygaz;
                        if( (balance-(tabiiygaz*5200))>0 ) {
                            balance = balance-(tabiiygaz*5200);
                            cout << " Issiq suvga To`lov amalga oshirildi ! ! ! "<< endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "XIZMAT TURI" << "           " << " Komunal " << endl;
                                cout << "Komunal " << "               " << "issiq suv " << endl;
                                cout << "Otkazma miqdori" << "        " <<tabiiygaz*5200<< endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << "ID " << "                    " << gaz << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);
                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }


                        }
                        else {
                            cout << " Kartada mablag` yetarli emas ! ! ! "<<endl;
                        }

                    }
                    else {
                        cout << " ID xato qayta kiriting ! ! ! "<<endl;
                        goto gazga3;
                    }
                    break;
                }

                case 4: {
                    musr:
                    int musr,musr1;
                    cout << " Musrga tolov qilmoqchi bolsangiz ID kiriting (6 xonali bolsin): ";cin >>musr;
                    if (musr>99999 && musr<1000000) {

                        cout << " Qancha tolov qilmoqchisiz miqdorni kiriting: ";cin>>musr1;
                        if( (balance-musr1)>0 ) {
                            balance = balance - musr1;
                            cout << " Tolov amalga oshirildi ! ! ! "<< endl;

                            int chek;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "Chek kerakmi: " << endl;
                            cout << " [ 1. ] Ha ";
                            cout << "         [ 2. ] Yoq " << endl;
                            cout << " Tanlang 'Ha ' or 'yoq' ";
                            cin >> chek;
                            if (chek == 1) {
                                cout << " " << endl;
                                cout << " " << endl;
                                cout << "          " << "CHEK" << "          " << endl;
                                cout << "XIZMAT TURI" << "           " << " Komunal " << endl;
                                cout << "Komunal " << "               " << "issiq suv " << endl;
                                cout << "Otkazma miqdori" << "        " <<musr1<< endl;
                                cout << "Kartadagi qoldiq" << "       " << to_string(balance) << endl;
                                cout << "xizamt Haqqi " << "         " << " 0 % " << endl;
                                cout << "Karta Raqami " << "         " << " 8600 ****** 3432 " << endl;
                                cout << "Karta Turi " << "           " << " Uzcard " << endl;
                                cout << "ID " << "                    " << musr << endl;
                                cout << " " << endl;
                                cout << " " << endl;
                                Beep(900, 200);
                                Beep(900, 200);
                                Beep(900, 200);
                            } else {
                                cout << " Hizmatdan foydalanganingiz uchun rahmat ! ! ! " << endl;
                            }


                        }
                        else {
                            cout << "Hisobda Mablag' yetarli emas. "<<endl;
                        }
                    }

                    else {
                        cout << " ID xato qayta kiriting ! ! ! "<<endl;
                        goto musr;

                    }
                    break;
                }








            }







            break;
        }

        case 7: {
            int naqt;
             cout << "Kartangiz Balansini qancha toldirmoqchisiz: ";cin>>naqt;
            cout << naqt << " pulni Kiriting "<< endl;
            int f = 5;
            while (f >= 0) {
                cout << f << endl;
                f--;
                Sleep(1000);

            }

            Beep(900, 200);
            Beep(900, 200);
            Beep(900, 200);
            balance +=naqt;
            cout << " Balans "<< naqt << " shuncha summaga toldirildi ! ! ! "<< endl;
            cout << " Hozirda Kartangizda "<< to_string(balance)<<" summa bor "<< endl;


break;
        }


        case 0: {system("color 60");
            cout << "" << endl;
            cout << " Kartangizni oling ! ! ! "<< endl;
            cout << " Hizmatdan foydalanganingiz uchun rahmat  ! ! ! "<< endl;
            Beep(900, 200);
            Beep(900, 200);
            Beep(900, 200);
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
