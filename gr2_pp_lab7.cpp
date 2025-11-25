// gr2_pp_lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

/*zadanie1
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
}*/
    
/*zadanie2
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
}*/

/*zadanie 3
string odwroc(string napis) {
    if (napis.empty()) {
        return "";
    }

    int ostatni = napis.length() - 1;

    return napis[ostatni] + odwroc(napis.substr(0, ostatni));
}*/

/*zadanie 4 - nie dziala
bool palindrom(string napis, int poczatek, int koniec) {
    if (poczatek < koniec) {
        
        if (napis[poczatek] == napis[koniec]) {
            palindrom(napis, poczatek + 1, koniec - 1);
        }
        else {
            return false;
        }
    }
    else {
        return true;
    }

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

    /*zadanie 4 - nie dziala
    string napis;
    int dl = napis.length();

    cout << "Napisz napis: ";
    cin >> napis;
    if (palindrom(napis, 0, dl - 1)) {
        cout << "Napis jest palindromem" << endl;
    }
    else {
        cout << "Napis nie jest palindromem" << endl;
    }*/

    /*zadanie 9 
    int liczba;
    do {
        cout << "Podaj liczbe naturalna: ";
        cin >> liczba;
    } while (liczba < 1);
    cout << "(Iteracyjnie) Suma wszystkich liczb naturalnych od 1 do " << liczba << " wynosi: " << sumaIte(liczba) << endl;
    cout << "(Rekurencyjnie) Suma wszystkich liczb naturalnych od 1 do " << liczba << " wynosi: " << sumaRek(liczba) << endl;*/
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
