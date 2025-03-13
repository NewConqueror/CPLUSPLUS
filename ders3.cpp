#include <iostream>
using namespace std;

int main() {
	/* operatörler
	1 atama =  s1=5; s2=52; vs vs
	2 aritmetik + - * / % 
	3 iliþkisel < > <= >=
	4 mantýksal &&  || !=  ==    !!! bitsel olarak düþünmen gerek 
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
	
	cout<<"toplam: "<<toplam<<endl; // diðerleri içinde yap kafana göre iþte
	
	if(s1<s2)
	cout<<"ikinci birinciden buyuk";
	else
	cout<<"birinci ikinciden buyuk";
	
	if(s1<s2 && s1<10) // || == !=    de ayný mantýk iþte aq uzatmaya gerek yok ;
	cout<<"yarrraaa";
	else
	cout<<"beni";
		
	
	return 0;
}
