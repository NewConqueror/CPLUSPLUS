#include <iostream>
using namespace std;


class sinif{
	private:
	int sayi;
	
	public:
	sinif(int s);
	~sinif();
	void goster();
};

sinif::sinif(int s){
	sayi=s;
	cout<<"yapici metot calisti deger atandi degerimiz: "<<sayi<<endl;
}

sinif::~sinif(){
	
	cout<<"yikici metot calisti."<<endl;
}

void sinif::goster(){
	cout<<"sayimiz: "<<sayi<<endl;
}

int main() {
	
	sinif *nesneler[5];
	
	for(int i=0;i<5;i++){
	
		nesneler[i] = new sinif(i);
	}
	
	for(int i=0;i<5;i++){
		nesneler[i]->goster();
	}
	
	
	for(int i=0;i<5;i++){
		delete nesneler[i];
	}
	
	cout<<"yikici metottan sonraki durum\n";
	for(int i=0;i<5;i++){
		nesneler[i]->goster();
	}
	return 0;
}
