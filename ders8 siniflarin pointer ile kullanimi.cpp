#include <iostream>
using namespace std;

class kisi{
	public:
	string ad;
	string soyad;
	int maas;
	
};

void yazdir(kisi nesne){
	
	cout<<"ad   : "<<nesne.ad<<endl;
	cout<<"soyad: "<<nesne.soyad<<endl;
	cout<<"maas : "<<nesne.maas<<endl;
}

void yazdirptr(kisi *ptr){
	
	cout<<"ad   : "<<ptr->ad<<endl;
	cout<<"soyad: "<<ptr->soyad<<endl;
	cout<<"maas : "<<ptr->maas<<endl;
	
}


int main() {
	
	kisi nes1;
	nes1.ad="fatih";
	nes1.soyad="yeni";
	nes1.maas=10000;
	yazdir(nes1);
	
	kisi *ptrnesne = new kisi(); // pointerlarda dinamik olarak oluþturuyoruz
	cout<<"pointer ile "<<endl;
	ptrnesne->ad="saliha";
	ptrnesne->soyad="yeni";
	ptrnesne->maas=15000;
	yazdirptr(ptrnesne);
	
	return 0;
}
