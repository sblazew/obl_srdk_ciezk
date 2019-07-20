//Autor: Sebastian Blazewicz
//Program do obliczania wspolrzednych srodka ciezkosci z wywierconym otworem

#include <iostream>
#include <pobierz_i_oblicz.h>
#include <iostream>
#include <fstream>
#include <drukuj.h>
#include "drukuj.h"
#include "pobierz_i_oblicz.h"

using namespace std;


int main()
{
    /**
     * deklaracja tablicy do zapisu wymiarow plytki oraz danych otworu
     */
    double tablica[n];
    /**
     * deklaracja tablicy zawierajacej wspolrzedne srodka ciezkosci elementu
     */
    double tablica_wsp[m];

    lista_danych *glowa, *poprzedni, *aktualny;
    aktualny = NULL;
    poprzedni = NULL;
    glowa = poprzedni;
    /**
     * zmienna okreslajaca czy uzytkownik chce podac inne dane, domyslnie ustawiona na "tak"
     */
    char decyzja;
    decyzja = 'T';
    while (decyzja == 'T' || decyzja == 't')
    {
        pobierz_dane(tablica);
        srodek_ciezkosci(tablica, tablica_wsp);
        poprzedni = aktualny;
        aktualny = new lista_danych;
        aktualny->wysokosc = tablica[0];
        aktualny->szerokosc = tablica[1];
        aktualny->dlugosc = tablica[2];
        aktualny->promien = tablica[3];
        aktualny->wsp_X = tablica[4];
        aktualny->wsp_Y = tablica[5];
        aktualny->Xc = tablica_wsp[0];
        aktualny->Yc = tablica_wsp[1];
        aktualny->Zc = tablica_wsp[2];
        aktualny->wskaznik = NULL;

        if (poprzedni !=NULL)
            poprzedni->wskaznik = aktualny;
        else
            glowa = aktualny;

        cout << "Chcesz podac inne dane? T/N?: \n";
        cin >> decyzja;
    }

    cout << "Podane dane oraz obliczone wyniki: \n";
    drukuj_liste(glowa);
    /**
     * zm_pom - zmienna pomocnicza do eksportu danych do pliku
     */
    lista_danych *zm_pom;
    ofstream plik;
    //Zapis danych do pliku

    if(!glowa)
        cout << "Brak elementow na liscie" << endl;
    else
    {
        zm_pom = glowa;
        plik.open("d:\\lista.txt");
        if (plik.good() == false)
        {cout << "blad zapisu";
        }
        int p = 1;
        while(zm_pom)
        {

            plik << "dane nr: " << p << endl;
            plik << "dlugosc: " << zm_pom->dlugosc << "\t";
            plik << "szerokosc: "<< zm_pom->szerokosc << "\t";
            plik << "wysokosc: "<< zm_pom->wysokosc<< "\t";
            plik << "promien: "<< zm_pom->promien<< "\t";
            plik << "wsp X otworu: "<< zm_pom->wsp_X<< "\t";
            plik << "wsp y otworu: "<< zm_pom->wsp_Y<< "\t";
            plik << "Xc: "<< zm_pom->Xc<< "\t";
            plik << "Yc: "<< zm_pom->Yc<< "\t";
            plik << "Zc: "<< zm_pom->Zc<< endl;
            zm_pom = zm_pom->wskaznik;
            p++;
        }
        plik.close();
    }
    // ZWALNIANIE PAMIECI
    aktualny = glowa;
    while (aktualny != NULL)
    {
        poprzedni=aktualny;
        aktualny=aktualny->wskaznik;
        delete poprzedni;
    }
    cout << "Pamiec zwolniona\n";
    return 0;
}

