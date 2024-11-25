#include <iostream>
#include <string>
int main() {
	using namespace std;
	//zad1
/*int liczbapunktow;
cout << "podaj liczbe punktow od (0-100)" << endl;
cin >> liczbapunktow;
if(liczbapunktow <0 || liczbapunktow > 100){
	cout << "Blad cyfra musi miescic sie w zakresie od 0 do 100!" << endl;
}else if( liczbapunktow >=0 && liczbapunktow <50){
	cout << "ocena niedostateczna"<< endl;
}else if (liczbapunktow >=50 && liczbapunktow <=69){
	cout << "ocena dostateczna "<< endl;
}else if (liczbapunktow >=70 && liczbapunktow <=84){
	cout << "ocena dobra" << endl;
}else if (liczbapunktow >=85 && liczbapunktow <=99){
	cout << "ocena bardzo dobra" << endl;
}else if (liczbapunktow ==100){
	cout << "ocena celujaca" << endl;
} return 0;
*/
//zad2
/* float wagakg;
cout << "Podaj swoja wage w kg ";
cin>> wagakg;
float wzrostm;
cout << "Podaj swoj wzrotst w metrach";
cin >> wzrostm;
float bmi;
bmi=wagakg /(wzrostm *wzrostm);
cout << "twoje BMI wynosi "<< bmi ;
if (bmi<18.5){
	cout << "Masz niedowage!"<< endl;
}else if (bmi>=18.5 && bmi <=24.9){
	cout << " Jest w normie" << endl;
	}else if (bmi >25 && bmi <=29.9){
		cout << "masz nadwage" << endl;
	}else if (bmi >30){
	cout << "masz nadwage! "<< endl;
	} */
	//zad3
	int lc;
	cout<< "podaj liczbe calkowita"<< endl;
	cin>> lc;
	if (lc % 2 == 0){
		cout<< "liczba jest parzysta" << endl;
	}else{
		cout<< "liczba " << lc <<"jest nieparzysta" << endl;
	}
	if (lc % 3 ==0){
		cout <<"liczba " << lc <<" jest podzielna przez 3 " << endl;
		}else
		cout << "liczba nie jest podzielna przez 3" << endl;
	
	
return 0;

}                     