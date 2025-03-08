#include <iostream>
using namespace std;
int main(){
//zad 1 
/*
    int N;
    cout << "Podaj liczbe N: ";
    cin >> N;

    int i = 2;
    cout << "Liczby parzyste od 2 do " << N << ": \n";
    while (i <= N) {
        cout << i << endl;
        i += 2;
    }
    */
//zad2
/*
    int N;
    cout << "Podaj liczbe N: ";
    cin >> N;

    int suma = 0;
    int i = 1;
    while (i <= N) {
        suma += i;
        i++;
    }

    cout << "Suma liczb naturalnych do " << N << ": " << suma << endl;
    */
//zad3
/*
    int liczba;
    char wybor;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        cout << "Wprowadziles liczbe: " << liczba << endl;

        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        cin >> wybor;
    } while (wybor == 't' || wybor == 'T');

    cout << "Dziekuje za wprowadzenie liczb!" << endl;
    */
//zad4

    int N;
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;

    int liczba = 1, licznik = 0;

    do {
        if (liczba % 2 == 0) {
            licznik++;
        }
        liczba++;
    } while (liczba <= N);

    cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << licznik << endl;

return 0;
}