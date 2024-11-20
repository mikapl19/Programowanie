#include <iostream>
using namespace std;
int main(){
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
	
	
	
	
	
    return 0;
}