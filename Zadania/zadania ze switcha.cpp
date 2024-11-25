#include <iostream>
using namespace std;
int main(){
	
/*	
zad1
char odp;
	do{
	
		int lb;
		cout<<"podaj liczbe calkowita"<< endl;
		cin >> lb;
		int db;
		cout<<"podaj druga liczbe"<<endl;
		cin >> db;
		char znak;
		cout<< "podaj znak jakiego uzyjesz(+,=,*,/)"<< endl;
		cin>> znak;
		int wynik;
		
			switch (znak){
			case '+':
				wynik=lb+db;
				cout << "wyszlo ci "<< wynik << endl;
				break;
			case '-':
				wynik=lb-db;
				cout << "wyszlo ci "<<wynik << endl;
				break;
			case '/':
				wynik=lb/db;
				if (lb==0){
					cout<< "dzialanie nie poprawne jestes pointless XDD"<<endl;
				}else if (db==0){
					cout<< "dzialanie nie poprawne jestes pointless XDD"<<endl;}
				else{
					cout<< "wyszlo ci "<< wynik<<endl;
				}
				break;
		
			case '*':
				wynik=lb*db;
				cout<< "wyszlo ci "<<wynik << endl;
			break;
					
			}
		
		cout<< "chcesz powtorzyc?(t/n)"<< endl;
		cin>> odp;	
	}while (odp=='t');
	*/
	//zad2
/*	char odp;
	do{
	char symbol;
		float cels;
		cout << "podaj temperature w celsjuszach"<< endl;
	cin>> cels;
	cout<< "wybierz czy chcesz otrzymac temperature w Kelvinach czy w Fahrenheitach? (k/f) "<<endl;
	cin>> symbol;
	float kel;
	float fah;
		switch (symbol){
		
			case 'k':
				kel= cels+ 273.15;
				cout << "temperatura w Kelvinach wynosi "<< kel<< endl;
			break;
			case 'f':
				fah= (cels*9/5)+ 32;
				cout<< "twoja temperatura w Fahrenheitach wynosi "<< fah << endl;
			break;
			default:
				cout<< "wystapil blad"<< endl;
				break;
			}
			
	cout<< "czy chcesz powtorzyc? (t/n)"<<endl;
	cin>> odp;
	
}
while (odp=='t');
*/
//zad3
	char odp;
	do{
	char pojazd;
	int cena;
		float czas;
		cout << "podaj czas swoj czas na parkingu w minutach"<< endl;
	cin>> czas;
	cout<< "wybierz rodzaj pojazdu ()m/s/a) "<<endl;
	cin>> pojazd;

		switch (pojazd){
		
			case 'm':
				cena=3+60;
				cout << "oplata wynosi "<< cena<< endl;
			break;
			case 's':
				cena=5+60;
				cout<< "oplata wynosi "<< cena << endl;
			break;
			case 'a':
				cena=10+60;
			cout<< "oplata wynosi"<<cena<<endl;
			break;
			default:
				cout<< "wystapil blad"<< endl;
				break;
			}
		
	cout<< "czy chcesz powtorzyc? (t/n)"<<endl;
	cin>> odp;
	}while (odp=='t');






    return 0;
}