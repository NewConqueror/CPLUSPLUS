#include <iostream>
using namespace std;

class ogrenci{
	
	public :
	string ad;
	/*float hesapla(int vize,int final){
		float sonuc=vize*0.4 + final*0.6;  fonksiyonu i�inde de yazabiliriz ya da i�te prototipi yazar
		return sonuc;                                    d��ta fonksiyonu yazar�z
	}*/	
	
	float hesapla(int a,int b); // prototip
	
};
// bu iki nokta ogrenci class �n�n i�ine gir demek oluyor
float ogrenci :: hesapla(int vize,int final){
		float sonuc=vize*0.4 + final*0.6;
		return sonuc; 
	
}

int main() {
	// oop metot/fonksiyon y�netimi 
	
	ogrenci o1,o2;
	
	o1.ad="fatih";
	o2.ad="saliha";
	
	cout<<o1.ad<<" isimli ogrencinin ortalamasi: "<<o1.hesapla(85,90)<<endl;
	cout<<o2.ad<<" isimli ogrencinin ortalamasi: "<<o2.hesapla(55,60)<<endl;
	
	return 0;
}
