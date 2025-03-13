#include <iostream>
#include <vector>
using namespace std;


int main() {
	
	vector <int> v1(10);
	
	vector <int> :: iterator ptr; // vectorlerde pointer böyle oluþturuluyor
	
	for(int i=0;i<v1.size();i++){
		v1[i]=i*i;
	}
	
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	
	cout<<"\n\niterator ile degerleri yazdirma\n";
	
	ptr=v1.begin();
	
	for(int i=0;i<v1.size();i++){
		cout<<*ptr<<" ";
		ptr++;
	}
	
	cout<<"\n\nsondan basa dogru yazdirma\n";
	
	ptr=v1.end();
	
	cout<<"while ile\n\n";
	while(ptr!=v1.begin() ){
		
		ptr--;
		cout<<*ptr<<" ";
		
	}
	
	/*cout<<"\n\nfor ile\n";
	
	for(int i=v1.size()-1; i>=0;i--){
		
		cout<<*ptr<<" ";
		ptr--;
	}*/
	
	
	/*vector <int> v1(10); // biz int için yaptýk ama string vs için de yapabilirsin 
	
	cout<<"vector boyu: "<<v1.size()<<endl;	
	// atama
	for(int i=0;i<v1.size();i++){
		v1[i]=i*i;
	}
	// yazdýrma
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	v1.push_back(100);
	v1.push_back(200);
	v1.push_back(300);
	
	// eklemeden sonra
	cout<<"eklemeden sonra\n";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	
	cout<<"\nvector boyu: "<<v1.size()<<endl;*/
	
	return 0;
}
