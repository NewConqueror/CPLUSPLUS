#include <iostream>
#include <locale.h>
using namespace std;


int main(){
	
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	cout<<"say�y� giriniz: ";
	cin>>sayi;
	
	int carp=sayi*2;
	
	cout<<"say�n�n iki ile �arp�lm�� hali: "<<carp;
	
	return 0;
}
