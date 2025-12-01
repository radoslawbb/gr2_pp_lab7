// gr2_pp_lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

/*zadanie1 */
void choinka(int spacje, int gwiazdki) {
    if (gwiazdki < 1) return;
    choinka(spacje + 1, gwiazdki - 2);
    for (int i = 0; i < spacje; i++) {
        cout << " ";
    }
    for (int i = 0; i < gwiazdki; i++) {
        cout << "*";
    }
    cout << endl;
}

int wysokosc(int n) {
    int wynik = 1;
    for (int i = 1; i < n; i++) {
        wynik += 2;
    }
    return wynik;
}
    
/*zadanie2 */
int sumaCyfr(int liczba) {
    int wynik = 0;
    while (liczba > 0) {
        wynik += (liczba % 10);
        liczba /= 10;
    }
    return wynik;
}

int sumaCyfrRek(int liczba) {
    if (liczba <= 0) return 0;

    return (liczba % 10) + sumaCyfrRek(liczba / 10);
}

/*zadanie 3 */
string odwroc(string napis) {
    if (napis.empty()) {
        return "";
    }

    int ostatni = napis.length() - 1;

    return napis[ostatni] + odwroc(napis.substr(0, ostatni));
}

/*zadanie 4 
bool palindrom(string napis) {
    if (napis.length() < 2) return true;
    if (napis[0] != napis[napis.length() - 1]) return false;
    return palindrom(napis.substr(1, napis.length()-2));
}*/

/*zadanie 5 
int najwiekszyIte(int t[], int r) {
    int x = t[0];
    for (int i = 0; i < r; i++) {
        if (t[i] > x) {
            x = t[i];
        }
    }
    return x;
}

int najwiekszyRek(int t[], int r) {
    if (r == 0) {
        return 0;
    }
    int x = najwiekszyRek(t,r-1);
    if (t[r] > x) return t[r];
    else return x;
}*/

/*zadanie 6 
int FiboIte(int n) {
    int wyn=0;
    if (n < 3) wyn = 1;
    else {
        int x = 1, y = 1;
        for (int i = 3; i <= n; i++) {
            wyn = x + y;
            x = y;
            y = wyn;
        }
    }
    return wyn;
}

int FiboRek(int n) {
    if (n < 3) return 1;
    else return FiboRek(n - 1) + FiboRek(n - 2);
}*/

/*zadanie 7 
int potegaIte(int pod, int wyk) {
    int wyn = 1;
    for (int i = 0; i < wyk; i++) {
        wyn *= pod;
    }
    return wyn;
}

int potegaRek(int pod, int wyk) {
    if (wyk == 0) return 1;
    return pod*potegaRek(pod,wyk-1);
}*/

/*zadanie 8 
int silniaIte(int n) {
    int wyn = 1;
    for (int i = 1; i <= n; i++) {
        wyn *= i;
    }
    return wyn;
}

int silniaRek(int n) {
    if (n == 0) return 1;
    else return n*silniaRek(n - 1);
}*/

/*zadanie 9 
int sumaIte(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int sumaRek(int n) {
    if (n < 1) {
        return 0;
    }
    else {
        return n + sumaRek(n - 1);
    }
}*/

/*zadanie 10 
int NWDIte(int x, int y) {
    while (x != y) {
        if (x < y) y -= x;
        else x -= y;
    }
    return y;
}

int NWDRek(int x, int y) {
    if (y != 0) {
        return NWDRek(y, x % y);
    }
    return x;
}*/

/*zadanie 11 
int NWDIte(int x, int y) {
    while (x != y) {
        if (x < y) y -= x;
        else x -= y;
    }
    return y;
}

int NWWIte(int x, int y) {
    return x * y / NWDIte(x, y);
}

int NWDRek(int x, int y) {
    if (y != 0) {
        return NWDRek(y, x % y);
    }
    return x;
}

int NWWRek(int x, int y) {
    return x * y / NWDRek(x, y);
}*/

int main()
{
    /*zadanie1
    int n;
    cout << "Podaj wysokosc choinki: ";
    cin >> n;
     
    choinka(0, wysokosc(n));*/

    /*zadanie2 
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;

    cout << "Suma cyfr iteracyjnie: " << sumaCyfr(n) << endl;
    cout << "Suma cyfr rekurencyjnie: " << sumaCyfrRek(n) << endl;*/

    /*zadanie 3
    string napis, odwrocony;

    cout << "Napisz napis: ";
    getline(cin, napis);
    odwrocony = odwroc(napis);
    cout << "Odwrocony napis: " << odwrocony << endl;*/

    /*zadanie 4 
    string napis;
    int koniec = napis.length() - 1;

    cout << "Napisz napis: ";
    cin >> napis;
    if (palindrom(napis)) {
        cout << "Napis jest palindromem" << endl;
    }
    else {
        cout << "Napis nie jest palindromem" << endl;
    }*/

    /*zadanie 5 
    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    int* t = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe do t[" << i << "]: ";
        cin >> t[i];
    }
    cout << "(Iteracyjnie) Najwiekszy element tablicy t[] to: " << najwiekszyIte(t,n) << endl;
    cout << "(Rekurencyjnie) Najwiekszy element tablicy t[] to: " << najwiekszyRek(t, n) << endl;*/

    /*zadanie 6 
    int n;
    do {
        cout << "Podaj dowolna liczbe naturalna: ";
        cin >> n;
    } while (n < 0);
    cout << "(Iteracyjnie) " << n << ". liczba ciagu Fibonacciego: " << FiboIte(n) << endl;
    cout << "(Rekurencyjnie) " << n << ". liczba ciagu Fibonacciego: " << FiboRek(n) << endl;*/

    /*zadanie 7 
    int p, w;
    do {
        cout << "Podaj liczbe naturalna jako podstawe: ";
        cin >> p;
    } while (p < 0);
    do {
        cout << "Podaj liczbe naturalna jako wykladnik: ";
        cin >> w;
    } while (w < 0);
    cout << "(Iteracyjnie) Wynik: " << potegaIte(p, w) << endl;
    cout << "(Rekurencyjnie) Wynik: " << potegaRek(p, w) << endl;*/

    /*zadanie 8 
    int n;
    do {
        cout << "Podaj liczbe naturalna: ";
        cin >> n;
    } while (n < 0);
    cout << "(Iteracyjnie) " << n << "! = " << silniaIte(n) << endl;
    cout << "(Rekurencyjnie) " << n << "! = " << silniaRek(n) << endl;*/

    /*zadanie 9 
    int liczba;
    do {
        cout << "Podaj liczbe naturalna: ";
        cin >> liczba;
    } while (liczba < 1);
    cout << "(Iteracyjnie) Suma wszystkich liczb naturalnych od 1 do " << liczba << " wynosi: " << sumaIte(liczba) << endl;
    cout << "(Rekurencyjnie) Suma wszystkich liczb naturalnych od 1 do " << liczba << " wynosi: " << sumaRek(liczba) << endl;*/

    /*zadanie 10 
    int x, y;
    do {
        cout << "Podaj liczbe 1 (liczba calkowita dodatnia): ";
        cin >> x;
        cout << "Podaj liczbe 2 (liczba calkowita dodatnia): ";
        cin >> y;
    } while (x < 1 || y < 1);

    cout << "(Iteracyjnie) NWD(" << x << "," << y << ") = " << NWDIte(x, y) << endl;
    cout << "(Rekurencyjnie) NWD(" << x << "," << y << ") = " << NWDRek(x, y) << endl;*/

    /*zadanie 11 
    int x, y;
    do {
        cout << "Podaj liczbe 1 (calkowita dodatnia): ";
        cin >> x;
        cout << "Podaj liczbe 2 (calkowita dodatnia): ";
        cin >> y;
    } while (x < 1 || y < 1);

    cout << "(Iteracyjnie) NWW(" << x << "," << y << ") = " << NWWIte(x, y) << endl;
    cout << "(Rekurencyjnie) NWW(" << x << "," << y << ") = " << NWWRek(x, y) << endl;*/

    double czas;
    clock_t start, koniec;

    int n;
    cout << "Podaj wysokosc choinki: ";
    cin >> n;

    start = clock();

    choinka(0, wysokosc(n));

    koniec = clock();
    czas = (double)(koniec - start) / CLOCKS_PER_SEC;
    cout << endl << endl << "Czas dzialania = " << czas << endl;

    cout << "Podaj liczbe: ";
    cin >> n;

    start = clock();

    cout << "Suma cyfr iteracyjnie: " << sumaCyfr(n) << endl;

    koniec = clock();
    czas = (double)(koniec - start) / CLOCKS_PER_SEC;
    cout << endl << endl << "Czas dzialania = " << czas << endl;

    start = clock();

    cout << "Suma cyfr rekurencyjnie: " << sumaCyfrRek(n) << endl;

    koniec = clock();
    czas = (double)(koniec - start) / CLOCKS_PER_SEC;
    cout << endl << endl << "Czas dzialania = " << czas << endl;

    string napis, odwrocony;

    cout << "Napisz napis: ";
    getline(cin, napis); //nie wiem czemu to nie dziala :(

    start = clock();

    odwrocony = odwroc(napis);
    cout << "Odwrocony napis: " << odwrocony << endl;
    
    koniec = clock();
    czas = (double)(koniec - start) / CLOCKS_PER_SEC;
    cout << endl << endl << "Czas dzialania = " << czas << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
