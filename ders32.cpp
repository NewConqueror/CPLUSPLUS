#include <iostream>
using namespace std;

class insan{
	
	public:
	string ad;
	string soyad;
	
	insan(){
		cout<<"kurucu metot calisti"<<endl;
	}
	
	~ insan(){
		cout<<"yikici metot calisti"<<endl;
	}
	
	
};


int main() {
	// dinamik bellek yönetimi 
	// c de malloc calloc realloc free
	// c++ da  new ve delete kullanýlýr
	/*
	insan n1;    normal olarak yaptýk þimdi dinamik bellek kullanarak yapýcazz
	insan n2;*/
	
	// bu da dinamik bellek kullanýlarak yapýlan yöntem
	insan * nes1= new insan();
	insan * nes2= new insan();
	
	delete nes1;
	delete nes2;
	
	
	/*int *ptr= new int [5];
	
	for(int i=0;i<5;i++){
		cout<<p[i]<<endl;
	}
	
	delete p*/
	
	return 0;
}
