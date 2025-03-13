#include <iostream>
using namespace std;

class sinif{
	
	public: 
	
	int s1;
	int s2;
	
	int hesapla(){
		
		if(s2==0){
			throw "hatali islem yaptiniz!!";
		}
		
		return s1/s2;
		
	}
	
};




int main() {
	
	try{
		sinif nesne;
		nesne.s1=20;
		nesne.s2=0;
		cout<<"bolum: "<<nesne.hesapla();
		
	}
	
	catch(char const * hata) {  // terminate called after throwing an instance of 'char const*'
		cout<<hata;       // bu hatayı verdi char const * olması lazımmış fljdfslksffdlkdfsfl
	}
	
	
	return 0;
}
