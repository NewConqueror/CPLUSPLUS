#include <iostream>
using namespace std;

class kisi{
	private:
	string ad;
	string soyad;
	int maas;
	
	public: 
	
	kisi(string ad,string soyad,int maas){
		
		this->ad=ad;
		this->soyad=soyad;
		this->maas=maas;
	}
	
	//friend void yazdir(kisi k1);
	
	friend class ogrenci;
	
};

class ogrenci{
	public: 
	string ders;
	int notu;
	
	void yazdir(kisi k1){
	
	cout<<"ad   : "<<k1.ad<<endl;
	cout<<"soyad: "<<k1.soyad<<endl;
	cout<<"maas : "<<k1.maas<<endl;
	cout<<"ders : "<<ders<<endl;
	cout<<"notu : "<<notu<<endl;
}
	
};


/*void yazdir(kisi k1){
	
	cout<<"ad   : "<<k1.ad<<endl;
	cout<<"soyad: "<<k1.soyad<<endl;
	cout<<"maas : "<<k1.maas<<endl;
	
}*/



int main() {
// arkada� fonksiyonlar normalde eri�emeyece�imiz private olan de�i�kenlere d��ar�dan eri�im sa�lar bize
// normalde ogrenci class �nda kisi class �n�n de�i�kenlerine ula�amay�z ama friend class ogrenci 
// yapt���m�z zaman kisi class �ndakilere de eri�ebiliriz 
// veya d��ar�daki yazdir fonk unu kullanamazd�k ��nk� k1 e eri�im iznimiz yok
// friend void yazdir dedi�imiz zaman art�k d��ar�dan da eri�im izni veriliyor
	
	kisi k1("fatih","yeni",18000);
	
	ogrenci o1;
	
	o1.ders="mat";
	o1.notu=85;
	
	o1.yazdir(k1);
	
	return 0;
}
