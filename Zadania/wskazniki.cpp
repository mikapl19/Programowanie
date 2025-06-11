/*
#include <iostream>
using namespace std;
//zad1
/*
int main (){
	int a= 5;
	int b= 10;
 	int *lp;
	int *ld;
	lp=&a;
	ld=&b;
	cout<<"przed modyfikacja: "<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	*lp+= 10;
	*ld+= 10;
	cout<<"po modyfikacji: "<<endl;
	cout<<*lp<<endl;
	cout<<*ld<<endl;	
}
*/
//zad2
/*
void FinxMinMax(float *tablica,float *max,float *min){

	for (int i = 1; i < 10; i++) {
		if (tablica[i]> *max) {
			*max = tablica[i];
	}
}
	for (int i = 1; i < 10; i++) {
		if (tablica[i] < *min) {
			*min = tablica[i];
	}
}

}
	
int main (){
	float tablica[10]= {1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2};
	float max= tablica[0];
	float min= tablica[0];
	FinxMinMax(tablica,&max,&min);
	cout<<"max: "<<max<<"min: "<<min<<endl;
}
*///zad 4i5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void LosujTablice(int* tablica, int ile, int poczatek, int koniec) {
    int liczbalosowana;
	int numercyfry = 0;
    bool powtorzona;
    int zakreswtabl=koniec - poczatek + 1;
    while (numercyfry < ile) {
        powtorzona = false;
        liczbalosowana = poczatek + rand() % zakreswtabl;
      
        for (int j = 0; j < numercyfry; j++) {
            if (tablica[j] == liczbalosowana) {
                powtorzona = true;
                break;
            }
        }
        if (!powtorzona) {
            tablica[numercyfry] = liczbalosowana;
            numercyfry++;
        }
    }
}


bool SprawdzLiczbe(int* liczba, int* tablica, int ile) {
    for (int numercyfry = 0; numercyfry < ile; numercyfry++) {
        if (tablica[numercyfry] == *liczba) {
            return true; 
        }
    }
    return false; 
}

int main() {
    srand(time(0));

    int ile, poczatek, koniec;

    cout << "Ile liczb chcesz wylosowac? "<<endl;
    cin >> ile;

    cout << "Podaj wartosc poczatkowa przedzialu: "<<endl;
    cin >> poczatek;

    cout << "Podaj wartosc koncowa przedzialu: "<<endl;
    cin >> koniec;

    if ((koniec- poczatek + 1) < ile) {
        cout << "Przedzial za maly na tyle unikalnych liczb." << endl;
        return 1;
    }

    int* tablica = new int[ile];
    LosujTablice(tablica, ile, poczatek, koniec);


    int poprawnaLiczba = tablica[rand() % ile];

  
    cout << "Tablica: "<<endl;
    for (int numercyfry = 0; numercyfry < ile; numercyfry++) {
        cout << tablica[numercyfry] << " ";
    }
    cout << endl;

    int podanaLiczba;
    int proby = 0;
    bool zgadles = false;

    while (!zgadles) {
        cout << "Podaj liczbe: "<<endl;
        cin >> podanaLiczba;
        proby++;

   
        if (!SprawdzLiczbe(&podanaLiczba, tablica, ile)) {
            cout << "Ta liczba nie jest w tablicy. Sprobuj ponownie." << endl;
            continue; 
        }

    
        if (podanaLiczba == poprawnaLiczba) {
            cout << "Zgadles!" << endl;
            cout << "Zgadles za " << proby << " razem." << endl;
            zgadles = true;
        } else {
            cout << "Nie zgadles." << endl;
        }
    }

    delete[] tablica;
    return 0;
}
