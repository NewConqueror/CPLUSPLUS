#include <iostream>
using namespace std;



int main() {
	
	int dizi[5]= {10,20,30,40,50};
	
	int *ptr= new int(5);
	
	ptr[0]=10;
	ptr[1]=29;
	ptr[2]=70;
	ptr[3]=44;
	ptr[4]=61;
	
	for(int i=0;i<5;i++){
		cout<<ptr[i]<<"  ";
	}
	
	delete ptr; // burda pointer� art�k serbest b�rakt�k 
//	ptr=nullptr; pointer herhangi bir de�eri g�stermiyor null a ba�lad�k onu delete ptr ile ayn� i�
	
	cout<<endl<<"bos biraktiktan sonra"<<endl;
	for(int i=0;i<5;i++){
		cout<<ptr[i]<<"  ";
	}
	return 0;
}
