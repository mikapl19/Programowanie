#include <iostream>
using namespace std;
int main(){
 //zad1
/* cout<< "podaj liczbe calkowita"<< endl;
 int lb;
 int suma;
 cin>> lb;
 	for (int i=1;i<=lb;i++)
 	{
 		suma+= i;
 		cout<< "liczba wynosi: "<< i<< endl;
	 }
	cout<< "suma wynosi: "<<suma<<endl;
*/
//zad2
/*char odp;
do 
{

	int n;
	cout<< "podaj liczbe calkowita "<<endl;
	cin>> n;
	int kwadrat;
		for (int i=1;i<=n;i++)
		{
			kwadrat=i*i;
			cout<<"liczba wynosi "<<kwadrat<<endl;
		
		}	
	cout<<"czy chcesz ponowic prace programu? (t/n)"<<endl;
	 cin>> odp;
}
while (odp='t');
*/
//X
/*int m;
char odp;
int pod;
	do{
		cout<<"podaj liczbe calkowita: "<<endl;
		cin>> m;
			for(int i=1;i>=m;i++)
			{
				pod=i%3;
			cout<< "cyfra wynosi "<<pod<<endl;
				
			}
		if(pod==0)
		{
		cout<< "twoja cyfra jest podzielna przez 3"<<endl;
		}else{
			cout<< "twoja cyfra nie jest podzielna"<<endl;
		}
		cout<< "chcesz powtorzyc? (t/n)"<<endl;
		cin>> odp;
		
		
		
	}while (odp=='t');
*/
//zad3
/*I
int lb;
int pr;
cout<< "podaj liczbe calkowita: "<< endl;
cin>> lb;
	for(int i=1;i<=lb;i++)
	{
		pr=i%2;
				if(pr==0)
			{
			 cout<< "liczba jest parzysta"<< i<< endl;
			}	
	}
*/
//zad4
/*int suma= 2;
int wysokosc,szerokosc;
cout<< "podaj wysokosc"<< endl;
cin>> wysokosc;
cout<<"podaj szerokosc"<<endl;
cin>>szerokosc;
	for (int i = 1; i < wysokosc; i++) {
     
   		 for (int j = 1; j < szerokosc; j++)
		 {
		 	
    	   suma+=2;
    	    cout<<suma<< "\t";

    	}
    	cout << endl;
    }
*/
//zad5
/*int n;
cout<<"podaj liczbe calkowita: "<<endl;
	cin>> n;
int mnozenie;
		for (int a=1;a<=n;a++){
			
			cout<< " "<<endl;
				for (int b=1; b<=n; b++){
					int wynik= a*b;
				cout<< a<<" * "<< b <<" = "<< wynik<<endl;
				
				
				
				
				
				}
				
			}
*/
//zad6
/*
   int wy, sz;  
    cout << "Podaj liczbe szerokosci: ";
    cin >> sz;
    cout << "Podaj liczbe wysokosci: ";
    cin >> wu;

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < s; j++) {
            if (i == 0 || i == w - 1) {
                cout << "*"; 
            } 
            else if (j == 0 || j == s - 1) {
                cout << "*"; 
            } 
            else {
                cout << " "; 
            }
        }
        cout << endl; 
    }
*/
//zad7
/*
int w;
int s;

    cout << "Podaj szerokosc: ";
    cin >> sz;
    cout << "Podaj wysokosc: ";
    cin >> wy;

    for (int i = 0; i < s; i++) {
        cout << "-";
    }
    cout << endl;

    for (int i = 1; i < w - 1; i++) {
        cout << "|";

        for (int j = 1; j < s - 1; j++) {
            if ((i + j) % 2 == 0) {
                cout << "#";
            } else {
                cout << "*";
            }
        }

        cout << "|";
        cout << endl;
    }

    for (int i = 0; i < s; i++) {
        cout << "-";
    }
    cout << endl;
*/
//zad8
/*
int wy;
int sz;
    cout << "Podaj szerokosci: ";
    cin >> sz;
    cout << "Podaj wysokosci: ";
    cin >> wy;
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < s - 2 * i; j++) {
            cout << "*";
        }
        cout << endl;
    }
*/
//zad9
    int basia = 0;
for (int i = 1; i <= 9; i++) { 
	 for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) { 
                if (i != j && j != k && i != k) {
                    cout << i * 100 + j * 10 + k << endl;
                    basia++;
                }
            }
        }
    }

    cout << "Liczb bez powtarzajacych sie cyfr to :  " << basia << endl;

    return 0;
}
