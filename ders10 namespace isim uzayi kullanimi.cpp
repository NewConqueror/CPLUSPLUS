#include <iostream>
using namespace std;

namespace proA{
	int x;
	int y;
	int z;
	
	void selam(){
		cout<<"Ahmet hesabi naptin lan ehe";
	}
		
}

namespace proB{
	int x;
	int y;
	int z;
	int t;
	
	void selam(){
		cout<<"\nBurhan hesabi naptin lan ehe";
	}
		
}


int main() {
	// namespace çok kapsamlý projerde vs kimin ne yaptýðýný bilmek için kullanýlýr
	// aþaðýdaki gibi namespace A nýn yaptýðý iþler deðiþkenler belli B nin yaptýðý iþler deðiþkenleri belli
	// kiþiye ait namespaceler ile proje daha anlaþýlabilir bir hale geliyor
	
	
	int x;
	
	proA::x=10;
	proB::x=20;
	
	cout<<proA::x<<endl;
	cout<<proB::x<<endl;
	
	proA::selam();
	proB::selam();
	
	return 0;
}
