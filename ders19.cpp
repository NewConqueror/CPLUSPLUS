#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {
	// rastgele random say� �retme
	
	srand(time(NULL));
	
	for(int i=0;i<10;i++){
		
	int sayi= rand() % 10 + 1 ;
	cout<<"sayimiz: "<<sayi<<endl;
		
	}
	
	/*int sayi= rand() % 10 + 1 ;// 0 ile 10 aras�nda rastegele say�lar �retecek
	
	cout<<"sayimiz: "<<sayi;*/
	
	return 0;
}
