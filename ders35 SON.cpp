#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
using namespace std;


int main() {	
	// STL ( standart template library ) standart şablon kütüphaneleri
	// vector , list , stack , queue , map
	
	map < int, string > numaraAd;
	
	numaraAd.insert( {0, "fatih"} ); 
	numaraAd.insert( {4, "saliha"} );
	numaraAd.insert( {3, "canan"} );
	numaraAd.insert( {2, "yasar"} );
	numaraAd.insert( {1, "halime"} );
	cout<<"map yapisi\n";
	for(int i=0;i<5;i++){
		cout<<numaraAd[i]<<endl;
	}
	cout<<endl;
	
	queue <int> kuyruk ;
	
	kuyruk.push(10);
	kuyruk.push(20);
	kuyruk.push(30);
	cout<<"kuyruk yapisi\n";
	while( ! kuyruk.empty() ){
		
		cout<<kuyruk.front()<<endl;
		kuyruk.pop(); 
	}
	
	stack <int> yigin;
	
	yigin.push(10);
	yigin.push(20);
	yigin.push(30);
	cout<<"\nstack yapisi \n";
	while( ! yigin.empty() ){
		
		cout<<yigin.top()<<endl;
		yigin.pop(); 
		
	}

	cout<<endl;
	list <int> sayilar1={4,5,3,1,2};	
	
	for(auto a : sayilar1){
		cout<<a<<"  ";
	}
	
	return 0;
}
