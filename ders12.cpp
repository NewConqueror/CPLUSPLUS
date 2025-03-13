#include <iostream>
using namespace std;

class kisi{
	public:
	string isim;
	string soyisim;
	int yas;
	
//	kisi(string ad,string soyad,int yas) : isim(ad), soyisim(soyad), yas(yas) { } ; 
// bu þekilde de yapýcý fonksiyonu oluþturulabilir 	

    kisi();       // prototip asýl iþlevini dýþarýda yazýcaz 
    void yazdir();  
    int hesapla(int ,int);
};
// kisi sýnýfýnýn içindeki kisi ye eriþiyoruz :: içindeki anlamýnda düþünebilirsin
kisi ::kisi (){
	cout<<"yapici metot calisti.";
}


void kisi::yazdir(){
	cout<<"\nisim   : "<<isim<<endl;
	cout<<"soyisim: "<<soyisim<<endl;
	cout<<"yas    : "<<yas<<endl;
}

int kisi::hesapla(int a,int b){
	return a+b;
}

int main() {
	// sýnýflarda fonksiyon prototipleri ve skop iþareti ( :: ) kullanýmý
	
	kisi k1;
	k1.isim="fatih";
	k1.soyisim="yeni";
	k1.yas=18;
	k1.yazdir();
	int sonuc=k1.hesapla(10,20);
	cout<<"toplam sonuc: "<<sonuc;
	
	return 0;
}
