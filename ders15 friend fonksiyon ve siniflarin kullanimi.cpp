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
// arkadaþ fonksiyonlar normalde eriþemeyeceðimiz private olan deðiþkenlere dýþarýdan eriþim saðlar bize
// normalde ogrenci class ýnda kisi class ýnýn deðiþkenlerine ulaþamayýz ama friend class ogrenci 
// yaptýðýmýz zaman kisi class ýndakilere de eriþebiliriz 
// veya dýþarýdaki yazdir fonk unu kullanamazdýk çünkü k1 e eriþim iznimiz yok
// friend void yazdir dediðimiz zaman artýk dýþarýdan da eriþim izni veriliyor
	
	kisi k1("fatih","yeni",18000);
	
	ogrenci o1;
	
	o1.ders="mat";
	o1.notu=85;
	
	o1.yazdir(k1);
	
	return 0;
}
