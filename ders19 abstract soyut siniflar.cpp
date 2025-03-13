#include <iostream>
using namespace std;

class kisi{
	public:
	string ad;
	string soyad;
	int maas;
	
	kisi(string ad,string soyad,int maas) : ad(ad),soyad(soyad),maas(maas) {	}
	
	virtual void yazdir() = 0 ;  // abstract ( soyut bir metot olu�turduk )  imza
	
	// ki�i s�n�f�ndan bir nesne olu�turamay�z ��nk� sanal bir s�n�f
	
	int hesapla(){
		
		return maas+maas*10/100;
		
	}
	
	void zamyap(){
		
		cout<<ad<< "in zamdan sonraki net maasi: "<<hesapla()<<" TL\n"<<endl;
		
	}
	
};


class erkek : public kisi{
	
	public:
	
	erkek(string ad,string soyad,int maas) : kisi(ad,soyad,maas) {	}
	
// soyut bir s�n�f olan kisi s�n�f�ndan kal�t�m ald��� i�in onun sanal olan void yazdir metodunu
// kullanmak zorunda e�er kullanmazsa kod �al��maz kal�t�m alan s�n�f metodun g�vdesini yazmak zorunda 
//  kal�t�mdan fark� bu yazmak zorunda de�ildin kendi geliyordu ama abstract yani soyut oldu�u i�in
// soyut metodlar� almak zorundas�n ger�ek olan� yazmad�k hesapla zam yap gibi
// ama soyut olan yazdir metodunu kendi class �n i�inde de yazmak zorundas�n
	
	
	void yazdir(){
		
		cout<<"ad   : "<<ad<<endl;
		cout<<"soyad: "<<soyad<<endl;
		cout<<"maas : "<<maas<<endl;
		zamyap();
	}
	
};


class kadin : public kisi{
	
	public:
	
	kadin(string ad,string soyad,int maas) : kisi(ad,soyad,maas) {	}
	
// soyut bir s�n�f olan kisi s�n�f�ndan kal�t�m ald��� i�in onun sanal olan void yazdir metodunu
// kullanmak zorunda e�er kullanmazsa kod �al��maz kal�t�m alan s�n�f metodun g�vdesini yazmak zorunda 
//  kal�t�mdan fark� bu yazmak zorunda de�ildin kendi geliyordu ama abstract yani soyut oldu�u i�in
// soyut metodlar� almak zorundas�n ger�ek olan� yazmad�k hesapla zam yap gibi
// ama soyut olan yazdir metodunu kendi class �n i�inde de yazmak zorundas�n

	
	void yazdir(){
		
		cout<<"ad   : "<<ad<<endl;
		cout<<"soyad: "<<soyad<<endl;
		cout<<"maas : "<<maas<<endl;
		zamyap();
	}
	
};




int main() {
	
//kisi ki1("fatih","eroglu",1853435); 	olu�turulamaz ��nk� kisi s�n�f� sanal bir s�n�f yani nesne olu�turulamaz
	
	erkek e1("fatih","yeni",180000);
	e1.yazdir();
	
	kadin k1("saliha","yeni",120000);
	k1.yazdir();
	return 0;
}
