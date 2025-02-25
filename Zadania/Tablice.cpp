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
	/*
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
	*/
	//zad4
/*	
	int tablica[10]; 
    int sp = 0; 
    cout << "Wprowadz 10 liczb calkowitych: " << endl;
   			 for (int i = 0; i < 10; i++) {
   			 	cout<< "podaj liczbe nr "<<i+1<<endl;
       		 cin >> tablica[i];
   			 }
    cout << "Liczby parzyste: ";
    bool pl = true; 
	for (int i = 0; i < 10; i++){
	
        	if (tablica[i] % 2 == 0) {
            if (!pl) {
                cout << ", ";
            }
            cout << tablica[i];
            sp += tablica[i];
            pl = false;
        }
}
	cout<<endl<<"suma liczb parzystych wynosi "<< sp<<endl;
	*/
	//zad 5
	int tablica[3][3];
	float srednia;
	int suma=0;
	cout<< "podaj 9 liczb calkowitych"<<endl;
		for(int l=0;l<3;l++){
			for(int d=0;d<3;d++){
				 cout<<"podaj liczbe dla wiersza "<<l+1<<" kolumny "<<d+1<<endl;
				cin>>tablica [l][d];
				suma+= tablica[l][d];	
			}
		 }
		cout<< "suma wynosi "<<suma<<endl;
		srednia= suma/9.0;
		cout<< "srednia wynosi: "<<srednia <<endl;	
		
		
		
		
    return 0;
}