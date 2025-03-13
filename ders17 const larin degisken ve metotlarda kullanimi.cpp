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

// içerideki const ise dýþarýdaki de const olmalý

const void kisi::yazdir(){   // kisi::yazdir kisi sýnýfýnýn içindeki yazdýr demek 
                             // class da prototoip dýþarýda asýl iþ yapýldýðý zaman kullanýlýr
	
	// maas=maas+100;  bunu yapamazsýn çünkü fonksiyon constv ve kisi sýnýfýnýn elemaný 
	// kisi sýnýfýnýn elemanlarý üzerinde herhangi bir deðiþiklik yapamaz 
	
	cout<<"ad   : "<<ad<<endl;
	cout<<"soyad: "<<soyad<<endl;
	cout<<"maas : "<<maas<<endl;
	
}

const int sayi=10;

int main() {
	
//	sayi=20; yapamazsýn çünkü const deðiþmez
	
	kisi k1("fatih","yeni",50000);
	k1.yazdir();
	
	
	
	return 0;
}
