#include <iostream>
using namespace std;

class kisi{
	public:
	string ad;
	string soyad;
	int yas;
	
	kisi(string ad,string soyad,int yas) : ad(ad),soyad(soyad), yas(yas) 
	{
		//cout<<"kisi yapici metodu calisti\n";
	}	
};

class ogrenci : public kisi{
	
	public:
	ogrenci(string ad,string soyad,int yas) : kisi(ad,soyad,yas)
	{
		//cout<<"ogrenci yapici metodu calisti\n";
	}
	
};

class isci : public kisi{
	
	public:
	isci(string ad,string soyad,int yas) : kisi(ad,soyad,yas)
	{
		//cout<<"isci yapici metodu calisti\n";
	}
	
};


void yazdir(kisi nesne){  // sadece kisi s�n�f� ya da kisi s�n�f�n� miras olarak alanlar eri�ebilir
	                      //    e�er biz parametreyi isci nesne yapsayd�k sadece isci s�n�f� ya da
	                                        // onu miras alanlar yazdir fonk una eri�ebilecekti
	cout<<"ad   : "<<nesne.ad<<endl;
	cout<<"soyad: "<<nesne.soyad<<endl;
	cout<<"yas  : "<<nesne.yas<<endl;
	
}

int main() {
	
	kisi k1("fatih","yeni",19);
	ogrenci o1("saliha","yeni",12);
	isci i1("cemre","yeni",18);
	
	yazdir(k1);
	yazdir(o1);
	yazdir(i1);
	
	return 0;
}
