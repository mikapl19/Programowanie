#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ciag[21], oryginal[21];
/*
    // Zadanie 1
    cout << "Zadanie 1 - Wczytywanie i wyswietlanie ciagu" << endl;
    cout << "Podaj ciag (max 20 znakow): ";
    cin.getline(ciag, 21);
    strcpy(oryginal, ciag); 
    cout << "Wprowadzony ciag: " << ciag << endl;
    */
    // Zadanie 2
    /*
    cout << "\nZadanie 2 - Zamiana 'a' na 'o'" << endl;
    for (int i = 0; ciag[i] != '\0'; i++) {
        if (ciag[i] == 'a') ciag[i] = 'o';
    }
    cout << "Po zamianie: " << ciag << endl;
*/
    // Zadanie 3
/*
    char znak;
    cout << "\nZadanie 3 - Zliczanie wystapien znaku" << endl;
    cout << "Podaj znak do zliczenia: ";
    cin >> znak;
    int licznik = 0;
    cout << "Pozycje wystapien: ";
    for (int i = 0; oryginal[i] != '\0'; i++) {
        if (oryginal[i] == znak) {
            if (licznik > 0) cout << ", ";
            cout << i;
            licznik++;
        }
    }
    cout << "\nLiczba wystapien znaku '" << znak << "': " << licznik << endl;
*/
    // Zadanie 4
    
    cout << "\nZadanie 4 - Odwrocenie ciagu" << endl;
    int dlugosc = strlen(oryginal);
    char odwrocony[21];
    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = oryginal[dlugosc - 1 - i];
    }
    odwrocony[dlugosc] = '\0';
    cout << "Odwrocony ciag: " << odwrocony << endl;

    return 0;
}