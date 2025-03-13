#include <iostream>
#include <cstring>
using namespace std;


class kitap{
	private:
	char kitapadi[20];	
	char yazaradi[20];
	int adet;
	
	public:
	void sakla(char *,char *,int); //prototipler
	void goster();
	
	
};

void kitap::sakla(char *ka,char *ya,int adt){
	
	strcpy(kitapadi,ka);
	strcpy(yazaradi,ya);
	adet=adt;
	
}

void kitap::goster(){
	
	cout<<"kitap adi: "<<kitapadi<<endl;
	cout<<"yazar adi: "<<yazaradi<<endl;
	cout<<"adet sayi: "<<adet<<endl;
	
}


int main() {
	
	kitap k1,k2,k3;
	
	k1.sakla("vadideki zambak","balzac",10);
	k2.sakla("semerkant","amin maulof",5);
	k3.sakla("hamlet","sheakspeare",3);
	
	k1.goster();
	k2.goster();
	k3.goster();
	
	return 0;
}
