#include <iostream>
using namespace std;


int main() {
	
	int sayi;
	cout<<"sayi giriniz: ";
	cin>>sayi;
	
	if(sayi<2)
	cout<<"en kucuk asal sayi 2 dir 2 den buyuk bir sayi giriniz";
	
	else{
		int sonuc=1;
		
		for(int i=2;i<sayi;i++){
			
			if(sayi%i==0){
				sonuc=0;
			}
			
		}
		
		if(sonuc==1){
			cout<<"sayi asaldir";
		}
		else{
			cout<<"sayi asal degildir";
		}
		
	}
	
	
	return 0;
}
