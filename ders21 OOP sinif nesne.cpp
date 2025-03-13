#include <iostream>
using namespace std;

class ogrenci {
	
	public : // eriþilebilir olduðunu söylüyorum burda eðer bu olmazsa kod çalýþmaz
	
	string ad;
	string soyad;
	int numara;
	string bolum;
	string adres;
	
	void hesapla(){
		cout<<"not hesaplamasi yapildi";
	}
	
};


int main() {
	
	ogrenci o1,o2;
	
	o1.ad="fatih";
	o1.soyad="yeni";
	o1.numara=277;
	o1.bolum="bilgisayar munedisligi";
	o1.adres="istanbul";
	
	o2.ad="saliha";
	o2.soyad="yeni";
	o2.numara=888;
	o2.bolum="bilgisayar munedisligi";
	o2.adres="istanbul";
	
	cout<<o1.ad<<" isimli ogrenci bilgileri"<<endl;
	cout<<o1.ad<<endl;
	cout<<o1.soyad<<endl;
	cout<<o1.numara<<endl;
	cout<<o1.bolum<<endl;
	cout<<o1.adres<<endl;
	
	cout<<o2.ad<<" isimli ogrenci bilgileri"<<endl;
	cout<<o2.ad<<endl;
	cout<<o2.soyad<<endl;
	cout<<o2.numara<<endl;
	cout<<o2.bolum<<endl;
	cout<<o2.adres<<endl;
	
	
	return 0;
}
