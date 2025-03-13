#include <iostream>
#include <fstream>
using namespace std;


int main() {
	// dosya iþlemleri
	// 1-ofstream : dosya oluþturma ve yazma iþlemleri 
	// 2-ifstream : dosyadan veri okuma iþlemleri 
	
	ofstream dosyaYAZ("belge.txt");
	dosyaYAZ<<"c++ ile\nders ogreniyoz\nyasasin\ncok mutluyuz\nA";
	dosyaYAZ.close();
	
	ifstream dosyaOKU("belge.txt");
	string satir;
	while(getline(dosyaOKU,satir))
	cout<<satir<<endl;
	
	return 0;
}
