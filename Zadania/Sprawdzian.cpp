#include <iostream>
using namespace std;
int main () {
int wiek;
char odp;
do {
	cout<< "wprowadz swoj wiek"<< endl;
cin>>wiek;
cout << "twoj wiek to " << wiek << endl;
if (wiek>120){
	cout<< "twoj wiek jest poza zakresem"<< endl;
}
  else if (wiek>=0 && 12>=wiek){
	cout<< "jestes dzieckiem" << endl;
}
else if(13<=wiek && wiek <=17){
	cout << "jestes nastolatkiem" << endl;
}
else if (18<=wiek && wiek<=64){
	cout << "jestes dorosly"<< endl;
}
else if (65<=wiek){
	cout << "jestes seniorem "<< endl;
	}
	cout<< "czy chcesz powtorzyc? (t/n) " << endl;
	cin >> odp;
	if (odp=='n'){
		cout<< "zakonczyles program :<"<< endl;
	}
}
while (odp =='t');

return 0;
}