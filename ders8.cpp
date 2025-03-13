#include <iostream>
using namespace std;


void hesapla1(){
	int s1=6;
	int s2=7;
	int toplam=s1+s2;
	cout<<"fonksiyon ici toplam: "<<toplam;	
}


int hesapla2(){
	int s1=6;
	int s2=7;
	int toplam=s1+s2;
	return toplam;
}


int carp(int a,int b){
	
	int sonuc=a*b;
	return sonuc;
}

void bol(int a,int b){
	
	int sonuc=a/b;
	cout<<"fonksiyon ici bolme sonucu: "<<sonuc ;
}

int main() {
	// fonksiyonlar
	// 1 geriye deðer döndürmeyen fonksiyonlar  void	
	// 2 geriye deðer döndüren fonksiyonlar  return
	// parametre alma durumlarýna göre
	
	hesapla1();
	cout<<endl;
	
	int toplam=hesapla2();
	cout<<"toplam sonuc: "<<toplam<<endl;
	
	int sonuc=carp(30,15);
	cout<<"sonuc: "<<sonuc<<endl;
	
	bol(30,15);
	
	return 0;
}
