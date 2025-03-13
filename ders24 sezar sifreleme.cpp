#include <iostream>
#include <cstring>
using namespace std;


class sezar{
	private:
	char metin[30];
	char sifrelimetin[30];
	char desifrelimetin[30];
	char alfabe[27]="abcdefghijklmnopqrstuvwxyz";
	
	public:
	void sifrele();
	void desifrele();
		
};


void sezar::sifrele(){
	
	cout<<"metni giriniz: "; gets(metin);
	strlwr(metin);
	int n=strlen(metin);
	metin[n]='\0';
	
	int sonuc=0;
	int i;
	for(i=0;i<n;i++){
		
		for(int j=0;j<26;j++){
			
			int indis=j;
			
			if(metin[i]==alfabe[j]){
				
				indis+=3;
				if(indis>26){
					indis=indis%26;
				}
				sifrelimetin[i]=alfabe[indis];
				sonuc=1; 
			}
		if(sonuc==0){
		sifrelimetin[i]=metin[i];
		}
			
		}
	}
	sifrelimetin[i]='\0';
	cout<<"sifreli metin: "<<sifrelimetin;
	
}


void sezar::desifrele(){
		
	int n=strlen(sifrelimetin);
	sifrelimetin[n]='\0';
	
	int sonuc=0;
	int i;
	for(i=0;i<n;i++){
		
		for(int j=0;j<26;j++){
			
			int indis=j;
			
			if(sifrelimetin[i]==alfabe[j]){
				
				indis-=3;
				if(indis<0){
					indis=indis+26;
				}
				desifrelimetin[i]=alfabe[indis];
				sonuc=1; 
			}
		if(sonuc==0){
		desifrelimetin[i]=sifrelimetin[i];
		}
			
		}
	}
	desifrelimetin[i]='\0';
	cout<<"\ndesifreli metin: "<<desifrelimetin;
	
}




int main() {
	
	sezar s1;
	s1.sifrele();
	s1.desifrele();
	 
	
	
	
	return 0;
}
