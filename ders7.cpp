#include <iostream>
using namespace std;


int main() {
	// diziler ama iki boyutlu
	
	int sayilar[2][3]; // 2 ye 3 l�k bir matris olu�turur 2 sat�r 3 s�tun excel tablosu gibi d���n
	
	sayilar[0][0]=11;
	sayilar[1][2]=9;
	
	// i�teki parentezler sat�rlar� o parantezlerin i�indekilerse s�tunlar� temsil eder 
	// yani bu �ekilde 2 ye 3 l�k bir matris elde etmi� olduk
	int dizi[][3]={	{1,2,3},{4,5,6} }; // iki boyutluda s�tun de�erini girmemiz laz�m satir olmasa da olur
	
	for(int i=0;i<2;i++){
		
		for(int j=0;j<3;j++){
			
			cout<<dizi[i][j];
		}
		cout<<endl;
	}
	
	
	return 0;
}
