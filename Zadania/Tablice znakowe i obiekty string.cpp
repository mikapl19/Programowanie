#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char ciag[21];
    
    // Zadanie 1
/*
    cout << "Podaj ciag: ";
    cin.getline(ciag, 21);
    cout << "Ciag: " << ciag << endl;
*/
    // Zadanie 2
/*
    cout << "Podaj ciag do zamiany: ";
    cin.getline(ciag, 21);
    for (int i = 0; ciag[i] != '\0'; i++) {
        if (ciag[i] == 'a') ciag[i] = 'o';
    }
    cout << "Ciag po zamianie: " << ciag << endl;
*/
    // Zadanie 3
    /*
    char znak;
    cout << "Podaj ciag: ";
    cin.getline(ciag, 21);
    cout << "Podaj znak do liczenia: ";
    cin >> znak;
    int licznik = 0;
    for (int i = 0; ciag[i] != '\0'; i++) {
        if (ciag[i] == znak) licznik++;
    }
    cout << "Znak '" << znak << "' wystepuje " << licznik << " razy." << endl;
*/
    // Zadanie 4
    
    char odwrocony[21];
    int dlugosc = strlen(ciag);
    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = ciag[dlugosc - 1 - i];
    }
    odwrocony[dlugosc] = '\0';
    cout << "Odwrócony ciag: " << odwrocony << endl;

    return 0;
}
