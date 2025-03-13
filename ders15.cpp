#include <iostream>
using namespace std;


int main() {
	// size of operatörü kullanýmý deðiþkenin bellekte kapladýðý alaný gösterir örn int= 4byte yer kaplar
	
	int    i1;
	float  f1;
	double d1;
	char   ch;
	bool   b1;
	
	cout<<"int boyutu    :"<<sizeof(i1)<<endl;
	cout<<"float boyutu  :"<<sizeof(f1)<<endl;
	cout<<"double boyutu :"<<sizeof(d1)<<endl;
	cout<<"char boyutu   :"<<sizeof(ch)<<endl;
	cout<<"bool boyutu   :"<<sizeof(b1)<<endl;
	cout<<"int tipinin boyutu :"<<sizeof(int)<<endl; // böyle yazsan da olur
	return 0;
}
