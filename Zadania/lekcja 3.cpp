#include <iostream>
using namespace std;
int main(){
	int n, m=1;
	cout << "podaj liczbe calkowita do ktorejbedzie sprawdzana parzystosc liczb"<< endl;
	cin >> n;
	cout << "liczby parzyste od 2 do "<<n<<endl;
	do { 
		if(m%2==0){
			cout<< m << "";
		}	
		m +=1;		
	} while (m< n );
	
	
	
	
    return 0;
}