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
	// dinamik bellek y�netimi 
	// c de malloc calloc realloc free
	// c++ da  new ve delete kullan�l�r
	/*
	insan n1;    normal olarak yapt�k �imdi dinamik bellek kullanarak yap�cazz
	insan n2;*/
	
	// bu da dinamik bellek kullan�larak yap�lan y�ntem
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
