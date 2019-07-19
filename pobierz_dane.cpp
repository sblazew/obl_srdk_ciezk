#include "drukuj.h"

using namespace std;

/**
 * Funkcja zapisuje dane podane przez uzytkownika w tabeli
 * tab[0] - wysokosc plytki
 * tab[1] - szerokosc plytki
 * tab[2] - dlugosc plytki
 * tab[3] - promien otworu
 * tab[4] - wspolrzedna X (dot. szerokosci) otworu
 * tab[5] - wspolrzedna Y (dot. dlugosci) otworu
 * @param tab - nazwa tablicy, w ktorej zapisywane sa dane
 * funkcja sprawdza czy wymiary plytki nie sa ujemne
 * funkcja sprawdza czy otwor o podanym promieniu zmiesci sie na plytce
 */
void pobierz_dane(double tab[])
{
    cout << "Podaj wymiary plytki" << endl;
    cout << "Podaj wysokosc: \n";
    cin >> tab[0];
    while (tab[0] <=0)
    {
        cout << "Wymiar musi byc >= 0:" << endl;
        cin >> tab[0];
    }
    cout << "Podaj szerokosc" << endl;
    cin >> tab[1];
    while (tab[1] <=0)
    {
        cout << "Wymiar musi byc >= 0:" << endl;
        cin >> tab[1];
    }
    cout << "Podaj dlugosc" << endl;
    cin >> tab[2];
    while (tab[2] <=0)
    {
        cout << "Wymiar musi byc >= 0:" << endl;
        cin >> tab[2];
    }
    cout << "Podaj promien otworu:" << endl;
    cin >> tab[3];
    while (tab[3] <= 0 || (tab[3] >=tab[1]/2 || tab[3] >= tab[2]/2))
    {
        cout << "Wymiar musi byc >= 0 i mniejszy niz polowa najmniejszego z wymiarow plytki:" << endl;
        cin >> tab[3];
    }
    cout << "Podaj wspolrzedna X otworu:" << endl;
    cin >> tab[4];
    while (tab[4] <= tab[3] || tab[4] >= (tab[1]-tab[3]))
    {
        cout << "Wspolrzedna X musi byc wieksza niz promien i mniejsza niz szerokosc - promien" << endl;
        cin >> tab[4];
    }
    cout << "Podaj wspolrzedna Y otworu:" << endl;
    cin >> tab[5];
    while (tab[5] <= tab[3] || tab[5] >= (tab[2]-tab[3]))
    {cout << "Wspolrzedna Y musi byc wieksza niz promien i mniejsza niz dlugosc - promien" << endl;
        cin >> tab[5];
    }
}

