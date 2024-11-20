#include <iostream>
using namespace std;
int main () {
	int lc;
	char t;
	do { 
		cout << "podaj liczbe calkowita" << endl;
	cin >> lc;
	cout << "podana przez ciebie cyfra to " << lc << endl; 
		if (lc %2==0){
		cout << "liczba "<< lc<< " jest parzysta" << endl;
		} else {
			cout << "liczba " << lc<< " nie jest parzysta! " << endl; 
		}
	
		cout << "Czy chcesz kontynuowac? t/n" << endl;
		cin >> t;
		if (t == 'n');{
		cout << "Zakoncyles program  :< " << endl;
		}
	}while  (t== 't');

		
return 0;
}