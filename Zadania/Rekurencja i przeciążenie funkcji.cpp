#include <iostream>

#include <string>

using namespace std;
//zad1
/*
 
int GetTextFromUser() {

    int liczba;

    cout << "Podaj liczbe: ";

    cin >> liczba;

    return liczba;

}
 
int CalculateSumRecursive(int n) {

	if (n == 1)

        return 1;

    else

        return n + CalculateSumRecursive(n - 1);

}
 
void DisplayResult(int zwracane) {

    cout << "Suma liczb od 1 do n wynosi: " << zwracane << endl;

}

int main(){

	int liczba=GetTextFromUser();

	int zwracane=CalculateSumRecursive(liczba);

	DisplayResult(zwracane);

   return 0;

}
 */
 //zad2
 int  GetNumberFromUser(int liczba){
 	cout<<"podaj liczbe calkowita: "<<endl;
 	cin>> liczba;
return liczba;
 }
 int CalculateFibonacciRecursive(int n){
 	if(n==1||n==2){
		return 1;}
	else{
 		return CalculateFibonacciRecursive(n-1)+CalculateFibonacciRecursive(n-2);}

 }
 void DisplayFibonacciSequence(int n){
 	int ciag=CalculateFibonacciRecursive(n);
 	cout<<"twoj ciag to: "<<n<<endl;
 	
 	
 }
 int main(){
 	int liczba=GetNumberFromUser(liczba);
 	int liczy=CalculateFibonacciRecursive(n);
 	DisplayFibonacciSequence();
 }