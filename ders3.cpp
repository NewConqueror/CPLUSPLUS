#include <iostream>
using namespace std;

int main() {
	/* operat�rler
	1 atama =  s1=5; s2=52; vs vs
	2 aritmetik + - * / % 
	3 ili�kisel < > <= >=
	4 mant�ksal &&  || !=  ==    !!! bitsel olarak d���nmen gerek 
	*/
	
	int s1,s2;
	int toplam,fark,carpim,bolum,mod;
	
	cout<<"birinci sayiyi girin: ";
	cin>>s1;
	cout<<"ikinci sayiyi girin: ";
	cin>>s2;
	
	toplam=s1+s2;
	fark=s1-s2;
	carpim=s1*s2;
	bolum=s1/s2;
	mod=s1%s2;
	
	cout<<"toplam: "<<toplam<<endl; // di�erleri i�inde yap kafana g�re i�te
	
	if(s1<s2)
	cout<<"ikinci birinciden buyuk";
	else
	cout<<"birinci ikinciden buyuk";
	
	if(s1<s2 && s1<10) // || == !=    de ayn� mant�k i�te aq uzatmaya gerek yok ;
	cout<<"yarrraaa";
	else
	cout<<"beni";
		
	
	return 0;
}
