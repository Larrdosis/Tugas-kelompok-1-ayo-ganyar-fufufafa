#include <iostream>
using namespace std;

int main (){

int s, i;
s = 0, i =0;

do{
	
	cout << "Masukan jumlah buku : " ;
	cin >> i ;
	s=s+i;
	
	if(i%2 !=0){
		cout << "Memasukan " << i << " buku" << endl << endl;
			cout << "Jumlah buku : " << s << endl;
		cout << "=============" << endl;
		


	}else{
		cout << "Buku yang di masukan tidak berjumlah ganjil" << endl;
		cout << "Coba Lagi!"  << endl << endl;
		s=s-i;

	}
	
	}while(s<30);
	cout << endl << "Lemari buku telah penuh" ;
}
	
