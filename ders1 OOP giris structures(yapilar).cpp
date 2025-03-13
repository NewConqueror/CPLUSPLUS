#include <iostream>
using namespace std;

struct adres{
	
	string mah;
	string sok;
	string apt;
	string sehir;
	int kapino;
	
};


struct kisi{
	
	string ad;
	string soyad;
	int yas;
	float boy;
	adres adr;	
	
};

int main() {
// struct varsayılan public stack class ise private heap  + erişim şeyleri var sarmalama vs  	
	kisi nesne1;
	
	nesne1.ad="fatih";
	nesne1.soyad="yeni";
	nesne1.yas=18;
	nesne1.boy=1.80;
	
	nesne1.adr.mah="cirpici mah.";
	nesne1.adr.sok="modabag 8 sok.";
	nesne1.adr.apt="kismet";
	nesne1.adr.kapino=24;
	nesne1.adr.sehir="istanbul";
	
	cout<<"nesne 1 in bilgileri\n";
	cout<<nesne1.ad<<endl;
	cout<<nesne1.soyad<<endl;
	cout<<nesne1.yas<<endl;
	cout<<nesne1.boy<<endl;
	cout<<nesne1.adr.mah<<endl;
	cout<<nesne1.adr.sok<<endl;
	cout<<nesne1.adr.apt<<endl;
	cout<<nesne1.adr.kapino<<endl;
	cout<<nesne1.adr.sehir<<endl;
	
	return 0;
}
