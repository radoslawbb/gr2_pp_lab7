// gr2_pp_lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

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

    /*if (n == 1) return 1;
    if (n % 2 == 0) {
        return (n * 2) - 1;
    }
    else {
        return (n * 2) + 1;
    }*/
}

int main()
{
    int n;
    cout << "Podaj wysokosc choinki: ";
    cin >> n;
    choinka(0, wysokosc(n));
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
