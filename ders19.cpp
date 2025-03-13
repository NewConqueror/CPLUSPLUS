#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {
	// rastgele random sayý üretme
	
	srand(time(NULL));
	
	for(int i=0;i<10;i++){
		
	int sayi= rand() % 10 + 1 ;
	cout<<"sayimiz: "<<sayi<<endl;
		
	}
	
	/*int sayi= rand() % 10 + 1 ;// 0 ile 10 arasýnda rastegele sayýlar üretecek
	
	cout<<"sayimiz: "<<sayi;*/
	
	return 0;
}
