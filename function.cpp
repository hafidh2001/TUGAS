#include <iostream>

using namespace std ;

int main () {
	
	system ("title HAFIDH AHMAD FAUZAN") ;
	
	float a, b, c, d, e, f, hasil ;
	
	cout <<"NILAI RAPOT\n\n\n" ;
	
	cout << "Nilai Prodas     =" ;
	cin >> a ;
	cout << "Nilai Arkom      =" ;
	cin >> b ;
	cout << "Nilai PTI        =" ;
	cin >> c ;
	cout << "Nilai Inggris    =" ;
	cin >> d ;
	cout << "Nilai PKN        =" ;
	cin >> e ;
	cout << "Nilai Matematika =" ;
	cin >> f ;
	
	hasil = (a+b+c+d+e+f)/6 ;
	cout << "Nilai anda =" << hasil ;
	
	
	if (hasil>=80) {
		cout <<"Grade A" ;
	}
	else if (hasil>=60) {
		cout <<"Grade B" ;
	}
	else if (hasil<= 60) {
		cout <<"Grade C\n" ;
		cout <<"Silahkan melakukan REMIDI" ;
	}
	
	return 0 ;
}
