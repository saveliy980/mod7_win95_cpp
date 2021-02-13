#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;


int main() {

    system("chcp 65001 > nul");

    cout << "K3yG3n at C++" << endl;
    cout << "By волшебник#0001" << endl;
    HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOUTPUT,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "Работаспособность ключа = 70%!" << endl;
    SetConsoleTextAttribute(hOUTPUT,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    system("pause");


    int keys = 1;

    while (1) {

        int a1;
        int a2;
        int a3;
        int a4;
        int a5;
        int a6;
        int day;
        int year;
        int random;

        a1 = 1 + rand() % ((9 + 1) - 1);
        a2 = 1 + rand() % ((9 + 1) - 1);
        a3 = 1 + rand() % ((9 + 1) - 1);
        a4 = 1 + rand() % ((9 + 1) - 1);
        a5 = 1 + rand() % ((9 + 1) - 1);
        a6 = 1 + rand() % ((9 + 1) - 1);



        int math = a1 + a2 + a3 + a4 + a5 + a6;

        year = 95 + rand() % ((99 + 1) - 95);
        day = 111 + rand() % ((365 + 1) - 111);
        random = 10000 + rand() % ((99999 + 1) - 10000);




        if (math % 7 != 0) {
            continue;

        } else {

            cout << day << year << "-OEM-" << "0" << a1 << a2 << a3 << a4 << a5 << a6 << "-" << random << endl;
            keys++;
        }

        if (keys == 100) {

            cout << "100 keys generated!" << endl;
            system("pause");

            break;

        }


    }


}
