#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	// STL ( standart template library ) standart �ablon k�t�phaneleri
	// vector , list , stack , queue , map
	
	vector <int> dizi; // vector <int> dizi={ 4,5,1,3,2}; �eklinde de olabilirdi fark etmez
	
	dizi.push_back(30);
	dizi.push_back(50);    // dizi[0] yerine b�yle de ekleyebilirsin 
	dizi.push_back(40);
	dizi.push_back(10);
	dizi.push_back(20);
	
	sort(dizi.begin() , dizi.end() );      // bunu kullanarak daha k�sa s�rede s�ralayabiliyoruz
	
    // i desen de olurdu fark etmez yani	
	for(auto sayi : dizi ){   // normal for d���nda b�yle de olabilir
 		cout<<sayi<<"  ";
}
	cout<<endl<<" vectorun boyu: "<<dizi.size()<<endl;
 
	
	
	
/*	int dizi[5] = {4,5,1,3,2};
	
	for(int i=0;i<5;i++){                 bu normal yap�lan y�ntem �imdi k�t�phane kullanarak
 		for(int j=0;j<4;j++){               daha k�sa s�rede ayn� i�lemi yap�caz  
			if(dizi[j] > dizi[j+1]){
				int temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<5;i++){
		cout<<dizi[i]<<"  ";
	}*/
	
	
	return 0;
}
