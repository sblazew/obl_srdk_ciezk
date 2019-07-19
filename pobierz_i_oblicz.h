#ifndef POBIERZ_I_OBLICZ_H
#define POBIERZ_I_OBLICZ_H
#include <iostream>

/** rozmiar tablicy zwracanej w funkcji pobierz_dane
 * tablica zawiera wymiary plytki oraz polozenie i promien otworu
 */
int const n = 6;
/** rozmiar tablicy zwracanej w funkcji srodek ciezkosci
 * tablica zawiera wspolrzedne srodka ciezkosci
 */
int const m = 3;
/**
 * deklaracja funkcji pobierajacej dane do obliczen
 */
void pobierz_dane(double tab[]);

/**
 * deklaracja funkcji obliczajacej srodek ciezkosci elekmentu
 */
void srodek_ciezkosci(double tabwe[],double tab_wy[]);


#endif // POBIERZ_I_OBLICZ_H
