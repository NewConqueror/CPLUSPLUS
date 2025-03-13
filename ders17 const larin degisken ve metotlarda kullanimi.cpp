#include <iostream>
using namespace std;

class kisi{
	public:
	string ad;
	string soyad;
	int maas;
	
	kisi(string ad,string soyad,int maas){
		
		this->ad=ad;
		this->soyad=soyad;
		this->maas=maas;
		
	}	
	
	const void yazdir(); // prototip
};

// i�erideki const ise d��ar�daki de const olmal�

const void kisi::yazdir(){   // kisi::yazdir kisi s�n�f�n�n i�indeki yazd�r demek 
                             // class da prototoip d��ar�da as�l i� yap�ld��� zaman kullan�l�r
	
	// maas=maas+100;  bunu yapamazs�n ��nk� fonksiyon constv ve kisi s�n�f�n�n eleman� 
	// kisi s�n�f�n�n elemanlar� �zerinde herhangi bir de�i�iklik yapamaz 
	
	cout<<"ad   : "<<ad<<endl;
	cout<<"soyad: "<<soyad<<endl;
	cout<<"maas : "<<maas<<endl;
	
}

const int sayi=10;

int main() {
	
//	sayi=20; yapamazs�n ��nk� const de�i�mez
	
	kisi k1("fatih","yeni",50000);
	k1.yazdir();
	
	
	
	return 0;
}
