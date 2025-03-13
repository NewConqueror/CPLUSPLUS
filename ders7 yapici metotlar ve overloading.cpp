#include <iostream>
using namespace std;

class kisi{
	
	public: 
	string ad;
	string soyad;
	int yas;
	
	kisi(){
		cout<<"parametresiz yapici metot calisti\n";
	}
	
	kisi(string isim){
		
		ad=isim;
		soyad="";
		yas=0;
		cout<<"\ntek parametreli yapici metot calisti\n";
	}
	
	kisi(string isim, string soy, int y ){
		
		ad=isim;
		soyad=soy;
		yas=y;
		cout<<"\nuc parametreli yapici metot calisti\n";		
	}
	
	void yazdir(){
		
		cout<<"ad: "<<ad<<endl<<"soyad: "<<soyad<<endl<<"yas: "<<yas;
		
	}
	
	
};


int main() {
	
	kisi nesne0;
	nesne0.yazdir();
	
	kisi nesne1("fatih");
	nesne1.yazdir();
	
	kisi nesne3("fatih","yeni",18);
	nesne3.yazdir();
	
	
	
	return 0;
}
