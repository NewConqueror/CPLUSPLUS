#include <iostream>
using namespace std;

class araba{
	
	public:
	// aþaðýda yukarýda farketmiyor HER ZAMAN önce class fonksiyonu çalýþýr
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
	// yapýcý metotlar : constructorlar 
// nesne oluþturulduðunda class ta bir fonksiyon gibi çalýþýr ve kendini çaðýrýr 
// normal fonksiyon gibi ayrýca çaðýrmaya gerek yoktur nesne oluþturmak yeterlidir	
	
	araba a1(20);   // araba fonksiyonunu çaðýrmadým nesne oluþturulur oluþturulmaz çalýþtý
	a1.sayi=15;
	a1.metot2();
	
	
	
	return 0;
}
