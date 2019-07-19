#include "drukuj.h"

using namespace std;


double drukuj_liste(lista_danych *adres)
{
    while (adres != NULL)
    {
        cout << "wysokosc: "<<(*adres).wysokosc << endl;
        cout << "szerokosc: " <<(*adres).szerokosc << endl;
        cout << "dlugosc: " <<(*adres).dlugosc << endl;
        cout << "promien: " <<(*adres).promien << endl;
        cout << "wsp X otworu: " <<(*adres).wsp_X << endl;
        cout << "wsp Y otworu: "<<(*adres).wsp_Y << endl;
        cout << "wspozledne srodka ciezkosci Xc, Yc, Zc: \n" << (*adres).Xc << "\t" << (*adres).Yc << "\t" << (*adres).Zc << endl;
        cout << endl;
        adres = (*adres).wskaznik;
    }
}
