#include <iostream>
#include <locale.h>
using namespace std;


int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	cout<<"sayýyý giriniz: ";
	cin>>sayi;
	
	int carp=sayi*2;
	
	cout<<"sayýnýn iki ile çarpýlmýþ hali: "<<carp;
	
	return 0;
}
