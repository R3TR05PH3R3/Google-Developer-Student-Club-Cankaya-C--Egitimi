#include <iostream>
#include <string>
using namespace std;


int main() {
	
	/*Paral� otopark uygulamas� kodlar�. Saatlik fiyatlar� t�r i�in 150, otob�s i�in 100, otomobil i�in 75 lira olarak
	ayarlam��t�k. Ara� tipine g�re if / else if / else bloklar�na program� nas�l sokaca��m�z�n basit bir �rne�i.
	*/
	char arac;
	int saat;
	
	cout << "********Paral� otopark uygulamas�na hosgeldiniz********" << endl;
	
	cout << "Arac tipi girin (Tir icin t, Otobus icin o, otomobil icin a girin): ";
	cin >> arac;
	cout << "Kac saat kaldiniz: ";
	cin >> saat;
	
	if(arac == 't'){
		cout << "Hesabiniz = " << saat*150;
	}
	else if(arac == 'o'){
		cout << "Hesabiniz = " << saat*100;		
	}
	else if(arac == 'a'){
		cout << "Hesabiniz = " << saat*75;
	}
	else{
		cout << "Kanka programi bozma :)";
	}
		
	
	return 0;
}
