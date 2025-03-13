#include <iostream>
using namespace std;
// class oluþturma
class ogrenci{
	private:
	string tc;
	string ad;
	string soyad;
	int yas;
	string dersadi;
	int ortalama;
	
	public:
	
	ogrenci(){
	
	}	
	// sarmalama kapsülleme get set iþte aq ben giriþ çýkýþ diyom
	
	void giristc(string tc) 	      { this->tc=tc; }
	void girisad(string ad) 	      { this->ad=ad; }
	void girissoyad(string soyad)     { this->soyad=soyad; }
	void girisyas(int yas) 			  { this->yas=yas; }
	void girisdersadi(string dersadi) { this->dersadi=dersadi; }
	void girisortalama(int ortalama)  { this->ortalama=ortalama; }
	
	string cikistc() 	  {  return tc;	}
	string cikisad() 	  {  return ad;	}
	string cikissoyad()   {  return soyad;	}
	int cikisyas() 		  {  return yas	;}
	string cikisdersadi() {  return dersadi;}	
	int cikisortalama()	  {  return ortalama;}
	
	void listele( ogrenci [] );  // prototip
	
};

// listeleme
void ogrenci::listele( ogrenci ogr[] ){
	
	system("cls");
	
	for(int i=0;i<3;i++){
		
		cout<<i+1<<". ogrencinin bilgileri \n";
		cout<<"tc      : "<<ogr[i].cikistc()<<endl;
		cout<<"ad      : "<<ogr[i].cikisad()<<endl;
		cout<<"soyad   : "<<ogr[i].cikissoyad()<<endl;
		cout<<"yas     : "<<ogr[i].cikisyas()<<endl;
		cout<<"dersadi : "<<ogr[i].cikisdersadi()<<endl;
		cout<<"ortalama: "<<ogr[i].cikisortalama()<<endl;
		
	}
	
	cout<<"ogrenci bilgieri listelendi\n";
}

// isme göre sýralama 
void siralama( ogrenci ogr[] ){
 cout<<endl<<endl;
	
	ogrenci temp;
	
	for(int i=0;i<3;i++){
		
		for(int j=0;j<2;j++){
			
			if(ogr[j].cikisad().compare(ogr[j+1].cikisad() ) >0 ){
				
				temp=ogr[j];
				ogr[j]=ogr[j+1];
				ogr[j+1]=temp;
				
			}

		}
		
	}
	
	cout<<"liste siralandi.\n";
	
	for(int i=0;i<3;i++){
		
		cout<<i+1<<". ogrencinin bilgileri \n";
		cout<<"tc      : "<<ogr[i].cikistc()<<endl;
		cout<<"ad      : "<<ogr[i].cikisad()<<endl;
		cout<<"soyad   : "<<ogr[i].cikissoyad()<<endl;
		cout<<"yas     : "<<ogr[i].cikisyas()<<endl;
		cout<<"dersadi : "<<ogr[i].cikisdersadi()<<endl;
		cout<<"ortalama: "<<ogr[i].cikisortalama()<<endl;
		
	}
	
	
}


void enyuksekpuan( ogrenci ogr[] ){
	
	int ortalama=0;
	ogrenci enbuyuk;
	
	for(int i=0;i<3;i++){
		
		if(ortalama < ogr[i].cikisortalama() ){
			
			enbuyuk=ogr[i];
			ortalama=ogr[i].cikisortalama();
			
		}
		
	}
	
		cout<<"en yuksek ortalamali ogrencinin bilgileri \n";
		cout<<"tc      : "<<enbuyuk.cikistc()<<endl;
		cout<<"ad      : "<<enbuyuk.cikisad()<<endl;
		cout<<"soyad   : "<<enbuyuk.cikissoyad()<<endl;
		cout<<"yas     : "<<enbuyuk.cikisyas()<<endl;
		cout<<"dersadi : "<<enbuyuk.cikisdersadi()<<endl;
		cout<<"ortalama: "<<enbuyuk.cikisortalama()<<endl;
		
}


void ara( ogrenci ogr[] ){
	
	bool sonuc=false;
	string isim;
	ogrenci temp;
	
	cout<<"\naradiginiz ogrencinin ismi: "; cin>>isim;
	
	for(int i=0;i<3;i++){
		
		if(ogr[i].cikisad().compare( isim) ==0 ){
			
			temp=ogr[i];
			sonuc=true;
			break;
		}
		
	}
	
	if(sonuc==true){
		
		cout<<isim<<" isimli ogrencinin bilgileri \n";
		cout<<"tc      : "<<temp.cikistc()<<endl;
		cout<<"ad      : "<<temp.cikisad()<<endl;
		cout<<"soyad   : "<<temp.cikissoyad()<<endl;
		cout<<"yas     : "<<temp.cikisyas()<<endl;
		cout<<"dersadi : "<<temp.cikisdersadi()<<endl;
		cout<<"ortalama: "<<temp.cikisortalama()<<endl;
		
	}
	else{
		cout<<isim<<" isimli ogrenci bulunamadi!!";
	}
		
}






int main() {
	
	ogrenci ogr[3];
	
	string tc;
	string ad;
	string soyad;
	int yas;
	string dersadi;
	int ortalama;

	for(int i=0;i<3;i++){
		
		cout<<i+1<<". ogrencinin bilgilerini giriniz\n";
		cout<<"tc      : "; cin>>tc;
		cout<<"ad      : "; cin>>ad;
		cout<<"soyad   : "; cin>>soyad;
		cout<<"yas     : "; cin>>yas;
		cout<<"dersadi : "; cin>>dersadi;
		cout<<"ortalama: "; cin>>ortalama;
		
		ogr[i].giristc(tc);
		ogr[i].girisad(ad);
		ogr[i].girissoyad(soyad);
		ogr[i].girisyas(yas);
		ogr[i].girisdersadi(dersadi);
		ogr[i].girisortalama(ortalama);
	}
	
	cout<<"kayit islemi tamamlandi.\n";
	cout<<"girilen bilgiler listeleniyor..\n";
	
	ogr[0].listele(ogr); 
	
	siralama(ogr);
	
	ara(ogr);
	
	cout<<endl<<endl;
	enyuksekpuan(ogr);
		
	return 0;
}
