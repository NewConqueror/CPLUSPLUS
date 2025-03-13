#include <iostream>
using namespace std;

class A {  // sadece metotA yý çaðýrabilir
	//public:
	protected:  // protected eriþim tipi korumalý eriþim demektir 
	            // sadece class A yý miras olarak alanlar eriþebilir
		       // eðer böyle olursa class B a yý miras olarak aldýðý için metotA yý çalýþtýrabilir
		      // ama class C A yý deðil B yi miras olarak aldýðý için metotA yý çaðýramaz B ve C yi çaðýrabilir
	void metotA(){
		
		cout<<" A metodu calisti.\n";
	}	
};


class B : public A { // class A yý miras aldýðý için metotA ve metotB yi çaðýrabilir
	
	public:
		
	void metotB(){
		
		cout<<" B metodu calisti.\n";
	}	
};

class C : public B{ // class B yi miras aldýðý için metotA,metotB ve metotC yi çaðýrabilir
	
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
