#include <iostream>
using namespace std;

class ogrenci{
	
	public :
	string ad;
	/*float hesapla(int vize,int final){
		float sonuc=vize*0.4 + final*0.6;  fonksiyonu içinde de yazabiliriz ya da içte prototipi yazar
		return sonuc;                                    dýþta fonksiyonu yazarýz
	}*/	
	
	float hesapla(int a,int b); // prototip
	
};
// bu iki nokta ogrenci class ýnýn içine gir demek oluyor
float ogrenci :: hesapla(int vize,int final){
		float sonuc=vize*0.4 + final*0.6;
		return sonuc; 
	
}

int main() {
	// oop metot/fonksiyon yönetimi 
	
	ogrenci o1,o2;
	
	o1.ad="fatih";
	o2.ad="saliha";
	
	cout<<o1.ad<<" isimli ogrencinin ortalamasi: "<<o1.hesapla(85,90)<<endl;
	cout<<o2.ad<<" isimli ogrencinin ortalamasi: "<<o2.hesapla(55,60)<<endl;
	
	return 0;
}
