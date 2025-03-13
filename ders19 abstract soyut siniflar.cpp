#include <iostream>
using namespace std;

class kisi{
	public:
	string ad;
	string soyad;
	int maas;
	
	kisi(string ad,string soyad,int maas) : ad(ad),soyad(soyad),maas(maas) {	}
	
	virtual void yazdir() = 0 ;  // abstract ( soyut bir metot oluþturduk )  imza
	
	// kiþi sýnýfýndan bir nesne oluþturamayýz çünkü sanal bir sýnýf
	
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
	
// soyut bir sýnýf olan kisi sýnýfýndan kalýtým aldýðý için onun sanal olan void yazdir metodunu
// kullanmak zorunda eðer kullanmazsa kod çalýþmaz kalýtým alan sýnýf metodun gövdesini yazmak zorunda 
//  kalýtýmdan farký bu yazmak zorunda deðildin kendi geliyordu ama abstract yani soyut olduðu için
// soyut metodlarý almak zorundasýn gerçek olaný yazmadýk hesapla zam yap gibi
// ama soyut olan yazdir metodunu kendi class ýn içinde de yazmak zorundasýn
	
	
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
	
// soyut bir sýnýf olan kisi sýnýfýndan kalýtým aldýðý için onun sanal olan void yazdir metodunu
// kullanmak zorunda eðer kullanmazsa kod çalýþmaz kalýtým alan sýnýf metodun gövdesini yazmak zorunda 
//  kalýtýmdan farký bu yazmak zorunda deðildin kendi geliyordu ama abstract yani soyut olduðu için
// soyut metodlarý almak zorundasýn gerçek olaný yazmadýk hesapla zam yap gibi
// ama soyut olan yazdir metodunu kendi class ýn içinde de yazmak zorundasýn

	
	void yazdir(){
		
		cout<<"ad   : "<<ad<<endl;
		cout<<"soyad: "<<soyad<<endl;
		cout<<"maas : "<<maas<<endl;
		zamyap();
	}
	
};




int main() {
	
//kisi ki1("fatih","eroglu",1853435); 	oluþturulamaz çünkü kisi sýnýfý sanal bir sýnýf yani nesne oluþturulamaz
	
	erkek e1("fatih","yeni",180000);
	e1.yazdir();
	
	kadin k1("saliha","yeni",120000);
	k1.yazdir();
	return 0;
}
