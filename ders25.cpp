#include <iostream>
using namespace std;

class ogrenci{
	
	public:
	string ad;
	
	private:
	int notu;
	
	public:
	// kontroll� veri giri�i ve veri ��k��� yapt�k sarmalamada bunun yap�lmas� gerekiyor
	
	void notugir(int sayi){
		
		if(sayi>0 && sayi<100){
			notu=sayi;
		}
		else{
			cout<<"hatali sayi girisi.\n";
			notu=-1;
		}
		
	}
	
	int notugoster(){
		return notu;
	}
	
	
};


int main() {
	// OOP Prensipleri
	// 1-encapsulation : sarmalama ( kontroll� veri giri�i kontroll� veri ��k��� ) kontroll� bir �ekilde yap�caz
	// 2-inheritance   : kal�t�m (miras alma)
	// 3-polimorphizm  : �ok bi�imlilik

// bu dersete sarmalamay� yap�caz kullan�c� fonksiyonlardan veri giri�i yap�cak	
	
	ogrenci o1;
	o1.ad="fatih";
	o1.notugir(870);
	cout<<o1.ad<<" isimli ogrencinin notu: "<<o1.notugoster()<<endl;
	
	
	return 0;
}
