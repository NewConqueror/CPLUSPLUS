#include <iostream>
using namespace std;

class ogrenci{
	
	public:
	string ad;
	
	private:
	int notu;
	
	public:
	// kontrollü veri giriþi ve veri çýkýþý yaptýk sarmalamada bunun yapýlmasý gerekiyor
	
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
	// 1-encapsulation : sarmalama ( kontrollü veri giriþi kontrollü veri çýkýþý ) kontrollü bir þekilde yapýcaz
	// 2-inheritance   : kalýtým (miras alma)
	// 3-polimorphizm  : çok biçimlilik

// bu dersete sarmalamayý yapýcaz kullanýcý fonksiyonlardan veri giriþi yapýcak	
	
	ogrenci o1;
	o1.ad="fatih";
	o1.notugir(870);
	cout<<o1.ad<<" isimli ogrencinin notu: "<<o1.notugoster()<<endl;
	
	
	return 0;
}
