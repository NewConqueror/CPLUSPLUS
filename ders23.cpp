#include <iostream>
using namespace std;

class araba{
	
	public:
	// a�a��da yukar�da farketmiyor HER ZAMAN �nce class fonksiyonu �al���r
	int sayi;
	
	void metot2(){
		cout<<"kendi metodum calisti\n";
		cout<<"sayinin iki kati: "<<sayi*2;
	}
	
	araba(int a){
		int sonuc=a/2;
		cout<<"yapici metot calisti\n";
		cout<<"sayinin ikiye bolumu: "<<sonuc<<endl;
	}
};


int main() {
	// yap�c� metotlar : constructorlar 
// nesne olu�turuldu�unda class ta bir fonksiyon gibi �al���r ve kendini �a��r�r 
// normal fonksiyon gibi ayr�ca �a��rmaya gerek yoktur nesne olu�turmak yeterlidir	
	
	araba a1(20);   // araba fonksiyonunu �a��rmad�m nesne olu�turulur olu�turulmaz �al��t�
	a1.sayi=15;
	a1.metot2();
	
	
	
	return 0;
}
