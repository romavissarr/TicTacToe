#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    string numePlayerDoi, numePlayerUnu;

    cout << "Nume player 1: ";
    cin >> numePlayerUnu;

    cout << "Nume player 2: ";
    cin >> numePlayerDoi;

    system("CLS");

    char v[3][3];
    // golesc matricea
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            v[i][j] = ' ';
        }
    }

    int scor[3];

    scor[1] = 0;
    scor[2] = 0;

    cout << "SCOR:\n";

    cout << numePlayerUnu << "   " << numePlayerDoi;
    cout << endl;
    cout << "~~~~~~~~~~";
    cout << endl;
    cout << "| " << scor[1] << "    " << scor[2] << " |";
    cout << endl;
    cout << "~~~~~~~~~~";

    // construiesc tabla de joc
    // afisare tabla de joc

    cout << endl;
    cout << endl;

    cout << "TABEL:\n";

    cout << "~~~~~~~~~~~~~";
    cout << endl;
    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
    cout << endl;
    cout << "~~~~~~~~~~~~~";
    cout << endl;
    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
    cout << endl;
    cout << "~~~~~~~~~~~~~";
    cout << endl;
    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
    cout << endl;
    cout << "~~~~~~~~~~~~~";
    cout << endl;

    int linie, col;

    //cotinua - sa imi reseteze runda, dar tabela de joc raman la acelasi scor
    //reseteaza - reseteaza tabela de scor si iti permite sa adaugi alti playeri
    //stop - pentru a inchide meciul

    string comanda;
    bool continua = true;




    while (continua == true) {

        for (int i = 0; i < 9; i++) {
            if (i % 2 == 0) {
                bool miscareCorecta = false;
                while (miscareCorecta == false) {
                    cout << endl << endl;
                    cout << numePlayerUnu + ": \n--------\n";

                    cout << "Linie: "; cin >> linie;
                    cout << "Coloana: "; cin >> col;

                    if (v[linie - 1][col - 1] == 'x' || v[linie - 1][col - 1] == 'o' || (linie - 1 > 2 && col - 1 > 2) || (linie - 1 > 2 && col - 1 <= 2 && col - 1 >= 0) || (linie - 1 <= 2 && col - 1 > 2 && linie - 1 >= 0) || (linie - 1 < 0 && col - 1 > 2) || (linie - 1 > 2 && col - 1 < 0) || (linie - 1 < 0 && col - 1 < 0) || (linie - 1 < 0 && col - 1 <= 2 && col - 1 >= 0) || (linie - 1 <= 2 && col - 1 < 0 && linie - 1 >= 0)) {
                        cout << "Nu e o pozitie valida!\n";
                    }
                    else {
                        v[linie - 1][col - 1] = 'x';
                        miscareCorecta = true;
                    }
                }
            }
            if (i % 2 != 0) {
                bool miscareCorecta = false;
                while (miscareCorecta == false) {
                    cout << endl << endl;
                    cout << numePlayerDoi + ": \n--------\n";

                    cout << "Linie: "; cin >> linie;
                    cout << "Coloana: "; cin >> col;

                    if (v[linie - 1][col - 1] == 'x' || v[linie - 1][col - 1] == 'o' || (linie - 1 > 2 && col - 1 > 2) || (linie - 1 > 2 && col - 1 <= 2 && col - 1 >= 0) || (linie - 1 <= 2 && col - 1 > 2 && linie - 1 >= 0) || (linie - 1 < 0 && col - 1 > 2) || (linie - 1 > 2 && col - 1 < 0) || (linie - 1 < 0 && col - 1 < 0) || (linie - 1 < 0 && col - 1 <= 2 && col - 1 >= 0) || (linie - 1 <= 2 && col - 1 < 0 && linie - 1 >= 0)) {
                        cout << "Nu e o pozitie valida!\n";
                    }
                    else {
                        v[linie - 1][col - 1] = 'o';
                        miscareCorecta = true;
                    }
                }
            }
            system("CLS");

            cout << "SCOR:\n";

            cout << numePlayerUnu << "   " << numePlayerDoi;
            cout << endl;
            cout << "~~~~~~~~~~";
            cout << endl;
            cout << "| " << scor[1] << "    " << scor[2] << " |";
            cout << endl;
            cout << "~~~~~~~~~~";

            cout << endl;
            cout << endl;

            cout << "TABEL:\n";

            cout << "~~~~~~~~~~~~~";
            cout << endl;
            cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
            cout << endl;
            cout << "~~~~~~~~~~~~~";
            cout << endl;
            cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
            cout << endl;
            cout << "~~~~~~~~~~~~~";
            cout << endl;
            cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
            cout << endl;
            cout << "~~~~~~~~~~~~~";
            cout << endl;


            //linii orizontale

            if (v[0][0] == v[0][1] && v[0][1] == v[0][2] && (v[0][0] == 'x' || v[0][0] == 'o')) {
                if (v[0][0] == 'x') {
                    cout << numePlayerUnu + " a castigat!";
                    scor[1]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                if (v[0][0] == 'o') {
                    cout << numePlayerDoi + " a castigat!";
                    scor[2]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                break;
            }

            if (v[1][0] == v[1][1] && v[1][1] == v[1][2] && (v[1][0] == 'x' || v[1][0] == 'o')) {
                if (v[1][0] == 'x') {
                    cout << numePlayerUnu + " a castigat!";
                    scor[1]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                if (v[1][0] == 'o') {
                    cout << numePlayerDoi + " a castigat!";
                    scor[2]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                break;
            }

            if (v[2][0] == v[2][1] && v[2][1] == v[2][2] && (v[2][0] == 'x' || v[2][0] == 'o')) {
                if (v[2][0] == 'x') {
                    cout << numePlayerUnu + " a castigat!";
                    scor[1]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                if (v[2][0] == 'o') {
                    cout << numePlayerDoi + " a castigat!";
                    scor[2]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                break;
            }

            //linii verticale

            if (v[0][0] == v[1][0] && v[1][0] == v[2][0] && (v[0][0] == 'x' || v[0][0] == 'o')) {
                if (v[0][0] == 'x') {
                    cout << numePlayerUnu + " a castigat!";
                    scor[1]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                if (v[0][0] == 'o') {
                    cout << numePlayerDoi + " a castigat!";
                    scor[2]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                break;
            }

            if (v[0][1] == v[1][1] && v[1][1] == v[2][1] && (v[0][1] == 'x' || v[0][1] == 'o')) {
                if (v[0][1] == 'x') {
                    cout << numePlayerUnu + " a castigat!";
                    scor[1]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                if (v[0][1] == 'o') {
                    cout << numePlayerDoi + " a castigat!";
                    scor[2]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                break;
            }

            if (v[0][2] == v[1][2] && v[1][2] == v[2][2] && (v[0][2] == 'x' || v[0][2] == 'o')) {
                if (v[0][2] == 'x') {
                    cout << numePlayerUnu + " a castigat!";
                    scor[1]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                if (v[0][2] == 'o') {
                    cout << numePlayerDoi + " a castigat!";
                    scor[2]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                break;
            }

            // linii diagonale

            if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && (v[0][0] == 'x' || v[0][0] == 'o')) {
                if (v[0][0] == 'x') {
                    cout << numePlayerUnu + " a castigat!";
                    scor[1]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                if (v[0][0] == 'o') {
                    cout << numePlayerDoi + " a castigat!";
                    scor[2]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                break;
            }

            if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && (v[0][2] == 'x' || v[0][2] == 'o')) {
                if (v[0][2] == 'x') {
                    cout << numePlayerUnu + " a castigat!";
                    scor[1]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                if (v[0][2] == 'o') {
                    cout << numePlayerDoi + " a castigat!";
                    scor[2]++;
                    system("CLS");

                    cout << "SCOR:\n";

                    cout << numePlayerUnu << "   " << numePlayerDoi;
                    cout << endl;
                    cout << "~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << scor[1] << "    " << scor[2] << " |";
                    cout << endl;
                    cout << "~~~~~~~~~~";

                    cout << endl;
                    cout << endl;

                    cout << "TABEL:\n";

                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                    cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                    cout << endl;
                    cout << "~~~~~~~~~~~~~";
                    cout << endl;
                }
                break;
            }
        }
        bool comandaValida = false;
        while (comandaValida == false) {
            cout << endl;
            cout << "Pentru a continua scrie: \"continua\"\nPentru a te oprii scrie: \"stop\"\nPentru a reseta scorul si jucatorii scrie: \"reseteaza\"\n";
            cin >> comanda;

            if (comanda == "stop") {
                return 0;
                continua = false;
                comandaValida = true;
            }
            if (comanda == "continua") {
                continua = true;
                v[0][0] = ' ';
                v[0][1] = ' ';
                v[0][2] = ' ';
                v[1][0] = ' ';
                v[1][1] = ' ';
                v[1][2] = ' ';
                v[2][0] = ' ';
                v[2][1] = ' ';
                v[2][2] = ' ';
                system("CLS");

                cout << "SCOR:\n";

                cout << numePlayerUnu << "   " << numePlayerDoi;
                cout << endl;
                cout << "~~~~~~~~~~";
                cout << endl;
                cout << "| " << scor[1] << "    " << scor[2] << " |";
                cout << endl;
                cout << "~~~~~~~~~~";

                cout << endl;
                cout << endl;

                cout << "TABEL:\n";

                cout << "~~~~~~~~~~~~~";
                cout << endl;
                cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                cout << endl;
                cout << "~~~~~~~~~~~~~";
                cout << endl;
                cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                cout << endl;
                cout << "~~~~~~~~~~~~~";
                cout << endl;
                cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                cout << endl;
                cout << "~~~~~~~~~~~~~";
                cout << endl;
                comandaValida = true;
            }
            if (comanda == "reseteaza") {
                continua = true;
                v[0][0] = ' ';
                v[0][1] = ' ';
                v[0][2] = ' ';
                v[1][0] = ' ';
                v[1][1] = ' ';
                v[1][2] = ' ';
                v[2][0] = ' ';
                v[2][1] = ' ';
                v[2][2] = ' ';
                scor[1] = 0;
                scor[2] = 0;
                system("CLS");
                cout << "Nume player 1: "; cin >> numePlayerUnu;
                cout << "Nume player 2: "; cin >> numePlayerDoi;

                system("CLS");

                cout << "SCOR:\n";

                cout << numePlayerUnu << "   " << numePlayerDoi;
                cout << endl;
                cout << "~~~~~~~~~~";
                cout << endl;
                cout << "| " << scor[1] << "    " << scor[2] << " |";
                cout << endl;
                cout << "~~~~~~~~~~";

                cout << endl;
                cout << endl;

                cout << "TABEL:\n";

                cout << "~~~~~~~~~~~~~";
                cout << endl;
                cout << "| " << v[0][0] << " | " << v[0][1] << " | " << v[0][2] << " | ";
                cout << endl;
                cout << "~~~~~~~~~~~~~";
                cout << endl;
                cout << "| " << v[1][0] << " | " << v[1][1] << " | " << v[1][2] << " | ";
                cout << endl;
                cout << "~~~~~~~~~~~~~";
                cout << endl;
                cout << "| " << v[2][0] << " | " << v[2][1] << " | " << v[2][2] << " | ";
                cout << endl;
                cout << "~~~~~~~~~~~~~";
                cout << endl;
                comandaValida = true;
            }
            if (comanda != "continua" && comanda != "stop" && comanda != "reseteaza") {
                "Nu e o comanda valida!";
            }
        }
    }



    return 0;
}
