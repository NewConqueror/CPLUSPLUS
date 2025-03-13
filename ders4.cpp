#include <iostream>
using namespace std;



int main(){
	// koþul yapýlarý
	// if else if else
	// swicth case
	//  ?  :
	
	int sayi;
	cout<<"sayi giriniz: ";
	cin>>sayi;
	
	/*if(sayi>0){
		cout<<"sayi pozitif";
	}
	else if(sayi ==0){
		cout<<"sayi sifir dir";
	}
	else{
		cout<<"sayi negatif";
	}*/
	
	/*switch(sayi){
		
		case 10: cout<<"sayi 10"; break;
		case 20: cout<<"sayi 20"; break;
		case 30: cout<<"sayi 30"; break;
		default: cout<<"10 20 ve 30 dan farkli bir sayi girdiniz"; break;
	}*/
	
	int sonuc= (sayi>0) ? sayi*2  : sayi/2;
	
	cout<<"sonucunuz: "<<sonuc;
 	
	
	
	return 0;
}
