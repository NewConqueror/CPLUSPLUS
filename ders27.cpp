#include <iostream>
using namespace std;

class A {  // sadece metotA y� �a��rabilir
	//public:
	protected:  // protected eri�im tipi korumal� eri�im demektir 
	            // sadece class A y� miras olarak alanlar eri�ebilir
		       // e�er b�yle olursa class B a y� miras olarak ald��� i�in metotA y� �al��t�rabilir
		      // ama class C A y� de�il B yi miras olarak ald��� i�in metotA y� �a��ramaz B ve C yi �a��rabilir
	void metotA(){
		
		cout<<" A metodu calisti.\n";
	}	
};


class B : public A { // class A y� miras ald��� i�in metotA ve metotB yi �a��rabilir
	
	public:
		
	void metotB(){
		
		cout<<" B metodu calisti.\n";
	}	
};

class C : public B{ // class B yi miras ald��� i�in metotA,metotB ve metotC yi �a��rabilir
	
	public:
		
	void metotC(){
		
		cout<<" C metodu calisti.\n";
	}	
};

int main() {
	
	C nesne;
	
	nesne.metotA();
	nesne.metotB();
	nesne.metotC();
	
	
	return 0;
}
