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
int suma= 2;
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






    return 0;
}