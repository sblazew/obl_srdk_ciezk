# obl_srdk_ciezk
program do obliczania srodka ciezkosci
Projekt aplikacji (archived)
1.	Część ogólna
Projekt polegał na stworzeniu programu obliczającego współrzędne środka ciężkości metalowej płytki z wywierconym otworem. Wymiary płytki, promień otworu i jego współrzędne wprowadza użytkownik. Dane zapisywane są na liście kierunkowej. Program umożliwia wykonanie wielu obliczeń, ich wydrukowanie oraz zapisanie do pliku.
Przyjęto założenie, że skoro mamy do czynienia z płytką, która z założenia jest płaska, otwór będzie wiercony na płaszczyźnie XY (w programie osiom nadano nazwy odpowiednio „szerokość” i „długość”), dlatego użytkownik podaje tylko dwie współrzędne wejściowe.
2.	Wejścia/wyjścia
Użytkownik jako wymiar płytki może podać dowolną większą od zera liczbę typu double. Podobnie jest w przypadku promienia i współrzędnych otworu. Program weryfikuje czy otwór o parametrach podanych przez użytkownika zmieści się na powierzchni płytki. 
Program zapętla się w przypadku wpisania danych inne niż liczby.
Program wyświetla na ekranie dane podane przez użytkownika wraz z obliczonymi dla nich współrzędnymi środka ciężkości. Dane te zapisywane są również do pliku. Nazwa pliku i jego lokalizacja została w programie ustalona i użytkownik nie może jej zmienić.
3.	Struktury danych
Dane wpisywane przez użytkownika zapisywane są w statycznej tablicy jednowymiarowej, o stałym rozmiarze. Podobnie jest ze współrzędnymi środka ciężkości. Rozwiązanie to miało na celu ograniczenie liczby argumentów przekazywanych przez programistę do funkcji. 
Program zawiera jedną strukturę listy jednokierunkowej, w której przechowywane są dane podane przez użytkownika oraz wykonane obliczenia.
4.	Algorytm
Program prosi o podanie wymiarów płytki i weryfikuje czy nie są one mniejsze lub równe 0.
Program prosi o podanie promienia otworu i weryfikuje czy otwór zmieści się na płytce.
Program prosi o podanie współrzędnych otworu i weryfikuje czy otwór zmieści się na płytce.
Dane zapisywane są do statycznej tablicy, przekazywane do funkcji obliczającej współrzędne środka ciężkości i zapisywane na liście jednokierunkowej.
Program pyta czy użytkownik chce podać inne dane, jeśli tak program powtarza poprzednie czynności, jeśli nie dane są wyświetlane na monitorze i zapisywane do pliku.
Program czyści pamięć zajętą przez listę.
