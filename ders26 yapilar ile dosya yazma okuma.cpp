#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
using namespace std;


struct personel{
	
	char ad[20];
	char soyad[20];
	int yas;
	
};


void kayit(char *ptr){
	
	fgets(ptr,30,stdin);
	int n=strlen(ptr);
	ptr[n-1]='\0';
	
}

int main() {
	
	struct personel p1[3];
	char yas[10];
	
	for(int i=0;i<3;i++){
		// cout cin gibi düþün sað taraf cin görevinde
		cout<<"\nad   : ";kayit(p1[i].ad);
		cout<<"soyad: ";kayit(p1[i].soyad);
		cout<<"yas  : ";kayit(yas);
		
		p1[i].yas=atoi(yas);
		
	}
	
	cout<<endl;
	
	for(int i=0;i<3;i++){
	
		cout<<"\nad : "<<p1[i].ad<<endl;
		cout<<"soyad: "<<p1[i].soyad<<endl;
		cout<<"yas  : "<<p1[i].yas<<endl;		
	} 
	
	cout<<"\nkayitlar alindi.\n";
	
	cout<<"veri tabanina kayit ediliyor\n";
	
	ofstream dosyayaz("personel.txt");
	
	if(!dosyayaz){
		cout<<"kayit dosyasi olusturulamadi";
		exit(1);
	}
	
//3 kaydý tek komut ile dosyaya yazdýk  hangi tipte  hangi deðiþken , ne kadarlýk yer
	dosyayaz.write( (char *) p1, sizeof(p1) );
	dosyayaz.close();
	cout<<"veri tabanina kayit yapildi\n";
	
	ifstream dosyaoku("personel.txt");
	
	if(!dosyaoku){
		cout<<"kayit dosyasi bulunamadi";
		exit(1);
	}
	
	cout<<"veri tabanindan okuma islemine geciliyor\n";
	
	// okumak için oluþturduk
	struct personel p2[3];
	
	dosyaoku.read( (char *) p2 , sizeof(p2) );
	
	for(int i=0;i<3;i++){
	
		cout<<"\nad : "<<p2[i].ad<<endl;
		cout<<"soyad: "<<p2[i].soyad<<endl;
		cout<<"yas  : "<<p2[i].yas<<endl;		
	}
	
	return 0;
}
