#include "pobierz_i_oblicz.h"

using namespace std;
/**
 * funkcja obliczajaca wspolrzedne srodka ciezkosci i zappisuje je do tablicy, gdzie:
 * tab_wy[0] - wspolrzedna X (szerokosc)
 * tab_wy[1] - wspolrzedna Y (dlugosc)
 * tab_wy[2] - wspolrzedna Z (wysokosc)
 * tabwe - tablica wygenrowana przez funkcje pobierz dane
 * tab_wy - tablica, w ktorej zapisywane sa dane
 */
void srodek_ciezkosci(double tabwe[],double tab_wy[])
{
    //!
    //! zmienne pomocnicze do obliczen
    //!
    double objetosc_plytki, pi, obj_walc;
    objetosc_plytki = tabwe[0] * tabwe[1] * tabwe[2];
    pi = 3.14;
    obj_walc = pi * tabwe[3] * tabwe[3] * tabwe[0];

    tab_wy[0] = (tabwe[0] * tabwe[1] * tabwe[2] * 0.5 * tabwe[1] - 3.14 * tabwe[3] * tabwe[3] * tabwe[0]*0.5*tabwe[4])/(tabwe[0] * tabwe[1] * tabwe[2]- 3.14 * tabwe[3] * tabwe[3] * tabwe[0]);
    tab_wy[1]=(objetosc_plytki * 0.5 * tabwe[2] - obj_walc*0.5*tabwe[5])/(objetosc_plytki - obj_walc);
    tab_wy[2] = (objetosc_plytki * 0.5 * tabwe[0] - obj_walc*0.5*tabwe[0])/(objetosc_plytki - obj_walc);
}

