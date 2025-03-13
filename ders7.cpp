#include <iostream>
using namespace std;


int main() {
	// diziler ama iki boyutlu
	
	int sayilar[2][3]; // 2 ye 3 lük bir matris oluþturur 2 satýr 3 sütun excel tablosu gibi düþün
	
	sayilar[0][0]=11;
	sayilar[1][2]=9;
	
	// içteki parentezler satýrlarý o parantezlerin içindekilerse sütunlarý temsil eder 
	// yani bu þekilde 2 ye 3 lük bir matris elde etmiþ olduk
	int dizi[][3]={	{1,2,3},{4,5,6} }; // iki boyutluda sütun deðerini girmemiz lazým satir olmasa da olur
	
	for(int i=0;i<2;i++){
		
		for(int j=0;j<3;j++){
			
			cout<<dizi[i][j];
		}
		cout<<endl;
	}
	
	
	return 0;
}
