#include <iostream>
using namespace std;

class kisi{
	public:
	string isim;
	string soyisim;
	int yas;
	
//	kisi(string ad,string soyad,int yas) : isim(ad), soyisim(soyad), yas(yas) { } ; 
// bu �ekilde de yap�c� fonksiyonu olu�turulabilir 	

    kisi();       // prototip as�l i�levini d��ar�da yaz�caz 
    void yazdir();  
    int hesapla(int ,int);
};
// kisi s�n�f�n�n i�indeki kisi ye eri�iyoruz :: i�indeki anlam�nda d���nebilirsin
kisi ::kisi (){
	cout<<"yapici metot calisti.";
}


void kisi::yazdir(){
	cout<<"\nisim   : "<<isim<<endl;
	cout<<"soyisim: "<<soyisim<<endl;
	cout<<"yas    : "<<yas<<endl;
}

int kisi::hesapla(int a,int b){
	return a+b;
}

int main() {
	// s�n�flarda fonksiyon prototipleri ve skop i�areti ( :: ) kullan�m�
	
	kisi k1;
	k1.isim="fatih";
	k1.soyisim="yeni";
	k1.yas=18;
	k1.yazdir();
	int sonuc=k1.hesapla(10,20);
	cout<<"toplam sonuc: "<<sonuc;
	
	return 0;
}
