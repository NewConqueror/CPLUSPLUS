#include <iostream>
using namespace std;


int main() {
	// hata yakalama - istisna fýrlatma 
	// try  ,  catch
	bas:
	try{
		
		 
		int s1,s2;
	
	cout<<"sayilari girin: ";
	cin>>s1>>s2;
	
	if(s2==0)
	throw 404;
	
	int sonuc=s1/s2;
	
	cout<<"sonuc: "<<sonuc;
	
	}
	
	catch(int hatakodu) {
		
		cout<<"hatali islem kodu: "<<hatakodu<<endl;
		goto bas;
	}
	
	
	
	
	
	
	return 0;
}
