#include <iostream>
#include <fstream>
using namespace std;


int main() {
	// dosya i�lemleri
	// 1-ofstream : dosya olu�turma ve yazma i�lemleri 
	// 2-ifstream : dosyadan veri okuma i�lemleri 
	
	ofstream dosyaYAZ("belge.txt");
	dosyaYAZ<<"c++ ile\nders ogreniyoz\nyasasin\ncok mutluyuz\nA";
	dosyaYAZ.close();
	
	ifstream dosyaOKU("belge.txt");
	string satir;
	while(getline(dosyaOKU,satir))
	cout<<satir<<endl;
	
	return 0;
}
