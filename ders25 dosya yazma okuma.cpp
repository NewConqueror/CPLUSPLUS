#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
 	ofstream dosyayaz("deneme.txt");	
	if(!dosyayaz){
		cout<<"dosya olusturulamadi";
		exit(1);
	}
	
	dosyayaz<<"bilgisayarmuhendisi"<<endl;
	dosyayaz<<2022<<endl;
	dosyayaz<<8.7<<endl;

	dosyayaz.close();
	
	cout<<"dosyaya kayit yapildi";
	
	ifstream dosyaoku("deneme.txt");
	
	if(!dosyaoku){
		cout<<"dosya bulunamadi";
		exit(1);
	}
	
	char dizi[30];
	int sayi;
	float kesir;
	
	dosyaoku>>dizi;
	dosyaoku>>sayi;
	dosyaoku>>kesir;
	
	dosyaoku.close();
	
	cout<<"\nokuma islemi tamamlandi\n";	
	
	cout<<dizi<<endl;
	cout<<sayi<<endl;
	cout<<kesir<<endl;
	
	return 0;
}
