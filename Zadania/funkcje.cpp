#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//zad 1 
/*
bool parzystosc (int liczba){
    if (liczba%2==0){
        return true;
}
    else {
        return false;
}
return liczba;	
}
 
 
 
int main(){
	int liczba;
	   bool wynik = parzystosc(liczba );
    cout<< "podaj liczbe"<<endl;
    cin>> liczba;
 
if(wynik == true ){
		cout<<"liczba jest parzysta"<<endl;
	}else{
		cout<<"liczba jest nie parzysta"<<endl;
	}

 
	
return 0;
}
*/
//zad2
/*
int funkcje(char funkcja,int l1,int l2){
	int wynik;
	switch (funkcja){
		case 's':
			wynik=l1+l2;
		//cout<<"suma wynosi: "<<wynik<<endl;
		break;
		case 'r':
			wynik=l1-l2;
			//cout<<"roznica wynosi: "<<wynik<<endl;
			break;
		case 'i':
			wynik= l1*l2;
		//	cout<<"mnozenie wynosi: "<<wynik<<endl;
			break;
		case 'o':
			wynik=l1/l2;
			//cout<<"iloraz wynosi: "<<wynik<<endl;
			break;
		return wynik;
	}


}
int main(){
 
	int l1,l2;
	char funkcja;
	do{
	cout<<"wybierz funkcje:"<< endl<<"suma-s: "<<endl<<"roznica-r: "<<endl<<"iloczyn-l: "<<endl<<"iloraz-o: "<<endl<<"zakonczenie programu-z"<<endl;
	cout<< "wybierz co chcesz uzyc"<<endl;
	cin>> funkcja;	
	cout<< "wybrales funkcje: "<<funkcja<<endl;
	cout<<"podaj pierwsza liczbe calkowita: "<<endl;
	cin>> l1;
	cout<<"podaj druga liczbe calkowita: "<<endl;
	cin>> l2;
	cout<<"wynik wynosi: "<< funkcje(funkcja,l1,l2)<<endl;
}
while (funkcja != 'z');
return 0;}
	*/
	//zad3
/*
string gettextfromuser(){
	string tekst;
	cout<< "podaj ciag znakow: "<<endl;	
	getline(cin,tekst);
	return tekst;
}
string odwroconystring(string tekst){
		int d=tekst.length();
		string odwrotnosc;
		for (int i=0;i<d;i++){
			odwrotnosc+=tekst[d-i-1];
		}
	return odwrotnosc;
	}
void wyswietlrezultat(odwroconystring){
		cout<<"odworcony ciag: "<<odwroconystring<<endl;
	}
 
int main(){
	string tekst =gettextfromuser();
	string odwroconytekst= odwroconystring(tekst);
	wyswietlrezultat(odwrotnosc);
	return 0;
}	
*/
//Zad4
/*
void GetArrayFromUser(int tablica[], int rozmiar) {
   for (int i = 0; i < rozmiar; i++) {
       cout << "Podaj liczbe nr " << i + 1 << ": ";
       cin >> tablica[i];
   }
}
int FindMaxValue(int tablica[], int rozmiar) {
   int max = tablica[0];
   for (int i = 1; i < rozmiar; i++) {
       if (tablica[i] > max) {
           max = tablica[i];
       }
   }
   return max;
}
void DisplayResult(int max) {
   cout << "Najwieksza liczba: " << max << endl;
}
int main() {
   int ilosc= 5;
   int liczby[ilosc];
   GetArrayFromUser(liczby, ilosc);
   int max = FindMaxValue(liczby, ilosc);
   DisplayResult(max);
   return 0;
}
*/
//zad 5
/*
void porownajLiczby(int proba, int cel) {
   if (proba < cel) {
       cout << "Za malo" << endl;
   } else if (proba > cel) {
       cout << "Za duzo" << endl;
   } else {
       cout << "udalo ci sie Odgadles liczbe." << endl;
   }
}
int main() {
   srand(time(NULL));
   int wylosowana = (rand() % 100) + 1;
   int typ;
   cout << "Gra 'Za malo, za duzo'. Odgadnij liczbe 1-100." << endl;
   do {
       cout << "Twoj strzal: ";
       cin >> typ;
       porownajLiczby(typ, wylosowana);
   } while (typ != wylosowana);
   return 0;
}
*/	
//zad6
int GetNumberFromUser() {
   int number;
   cout << "Podaj liczbe: ";
   cin >> number;
   return number;
}
unsigned long long CalculateFactorial(int n) {
   unsigned long long result = 1;
   for (int i = 1; i <= n; ++i) {
       result *= i;
   }
   return result;
}
void DisplayResult(int number, unsigned long long factorial) {
   cout << "Silnia liczby " << number << " wynosi: " << factorial << endl;
}
int main() {
   int number = GetNumberFromUser();
   if (number < 0) {
       cout << "Silnia nie jest zdefiniowana dla liczb ujemnych." << endl;
   } else {
       unsigned long long factorial = CalculateFactorial(number);
       DisplayResult(number, factorial);
   }
   return 0;
}