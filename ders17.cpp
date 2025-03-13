#include <iostream>
using namespace std;

int faktor(int sayi){
	
	if(sayi>1)
	return sayi* faktor(sayi-1);
	
}

int main(){
	
	int sayi;
	cout<<"sayiyi giriniz: ";
	cin>>sayi;
	
	int sonuc=faktor(sayi);
	
	cout<<"sonuc: "<<sonuc;
	
	return 0;
}
