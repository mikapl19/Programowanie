#include <iostream>
using namespace std;
int main(){
	//zad1
	/*
	int tablica [5];
	int suma=0;
	float srednia;
		cout<<"podaj 5 liczb calkowitych: "<<endl;
				for(int i=0;i<5;i++){
				cout<<"podaj liczbe nr"<<i+1<<":";
				cin>> tablica [i];
				suma += tablica [i];
				}
		srednia= suma / 5.0;
		cout<< "suma podanych liczb wynosi: "<<suma<<endl;
		cout << "srednia liczb wynosi: "<<srednia<<endl;
	*/
		//zad2
		/*
int tablica [5];
	cout<<"podaj 5 liczb calkowitych"<<endl;
			for(int i=0;i<5;i++){
			cout<<"podaj liczbe nr "<< i+1<<":";
			cin>> tablica [i];
			
			}
	cout << "Wprowadzone liczby to: "<<endl;
   			 for (int i = 0; i < 5; i++) {
      		  cout << tablica[i]<< " "<<endl;
   			 }
	cout<< "odwrotna kolejnosc"<<endl;
		 for (int i = 4; i >= 0; i--){
        cout << tablica[i] << " ";
    }
	*/
	//zad3
	int tablica [5];
		cout<<"wprowadz 5 liczb dodatnich i ujemnych"<<endl;
			for (int i=0;i <5;i++){
				cout<<"podaj liczbe nr"<<i+1<<endl;
				cin>> tablica [i];
					if(tablica[i]<0){
						tablica [i]=0;
					}
				}
			 for (int i = 0; i < 5; i++) {
       			 cout << tablica[i];
       				 if (i < 4) {
            		cout << ", ";
       							 }
				
				}
	
	
	
			
		
		
		
		
    return 0;
}