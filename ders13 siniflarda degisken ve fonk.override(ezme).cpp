#include <iostream>
using namespace std;

class kisi{
	public:
	string ad;
	string soyad;
	int yas;
	
	kisi(string ad,string soyad,int yas) : ad(ad) ,soyad(soyad) , yas(yas) 
	{
		cout<<"kisi sinifinin yapici metodu calisti.\n";
	}
	
	void yazdir(){
		cout<<"ad   : "<<ad<<endl;
		cout<<"soyad: "<<soyad<<endl;
		cout<<"yas  : "<<yas<<endl;
	}
	
};


class ogrenci : public kisi {
	
	public:
	int ortalama;
	
	ogrenci(string ad,string soyad,int yas,int ortalama) : ortalama(ortalama) , kisi(ad,soyad,yas)
	{
		cout<<"ogrenci sinifinin yapici metodu calisti\n";
	}
	
		void yazdir(){
		cout<<"ad      : "<<ad<<endl;
		cout<<"soyad   : "<<soyad<<endl;
		cout<<"yas     : "<<yas<<endl;
		cout<<"ortalama: "<<ortalama<<endl;
	}
};


int main() {
		
	kisi k1("fatih","yeni",19);
	k1.yazdir();
	
	cout<<endl;
	
	ogrenci o1("cemre","yeni",18,90);
	o1.yazdir();
	
	return 0;
}


