#ifndef DRUKUJ_H
#define DRUKUJ_H

#include <fstream>
#include <iostream>
/**
 * struktura listy jednokierunkowej, w ktorej zapisywane sa dane podane przezuzytkownika oraz obliczenia
 */
struct lista_danych
{
    double wysokosc, szerokosc, dlugosc, promien, wsp_X, wsp_Y, wsp_Z, Xc, Yc, Zc;
    lista_danych *wskaznik;
};

double drukuj_liste(lista_danych *adres);
#endif // DRUKUJ_H
