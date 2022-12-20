#include <iostream>

//matematik k�t�phanesini ekleme
#include <math.h>

using namespace std;

int main(){
 	
 	//matematik k�t�phanesiyle alakal� baz� fonksiyonlar
	 
	//sqrt => k�k al�r
	 
	int a = 4;
	 
	cout << sqrt(4) << endl; 
	 
	//pow => �s al�r
	 
	cout << pow(a,2) << endl;
	 
	//abs => mutlak de�erli hesaplama yapar
	 
	cout << abs(a - 10) << endl;
	 
	//daha fazla detayl� bilgi ve di�er fonksiyonlar� incelemek i�in: https://cplusplus.com/reference/cmath/
	 
	//Bool veri tipi. Sadece true ya da false bilgisi tutar. Yani 1 veya 0.
	
	bool a;
	a = false;
	a = true;
	
	//�rnek
	
	if(a){
		cout << "hello" << endl;
	} 
	 
	//Switch-case ifadeler => Uzun if-else ifadeleri yazmak yerine imdada ko�an karar mekanizmalar�d�r. If-else'ler gibi �al���r.
	
	int day = 4;
	switch (day) {
	  case 1:
	    cout << "Monday";
	    break;
	  case 2:
	    cout << "Tuesday";
	    break;
	  case 3:
	    cout << "Wednesday";
	    break;
	  case 4:
	    cout << "Thursday";
	    break;
	  case 5:
	    cout << "Friday";
	    break;
	  case 6:
	    cout << "Saturday";
	    break;
	  case 7:
	    cout << "Sunday";
	    break;
	}
	continue;
	//Caselerden sonra break konmal�d�r yoksa caseleri test etmeye devam eder. �rnek:
	 
	int day = 4;
	switch (day) {
	  case 1:
	    cout << "Monday";
	  case 2:
	    cout << "Tuesday";
	  case 3:
	    cout << "Wednesday";
	  case 4:
	    cout << "Thursday";
	  case 5:
	    cout << "Friday";
	  case 6:
	    cout << "Saturday";
	  case 7:
	    cout << "Sunday";
	}	
	 
	//D�NG�LER
	
	/*
		D�ng�ler programlar�n bizim istedi�imiz kere bir b�l�m� tekrar ve tekrar �al��t�rmas�n� sa�lar. Mesela �o�u bilgisayar oyunu biz d�ng�den ��kmak isteyene kadar sonsuz d�ng�de �al���r.
	*/
	int i = 100;
	int a = 1;
	while (i >= 1) {
		int temp = a
		while (a < 40) {
			a++
		}
		a = temp;
		i-
	}
	 //While D�ng�s� => While d�ng�s� parantezler i�inde belirtti�imiz ko�ul false olana kadar tekrar ve tekar �al��maya devam eden d�ng�d�r.
	 
	int i = 0;
	while (i < 5) {
	  cout << i << "\n";
	  i++;
	}
	
	//Do/while D�ng�s� => do/while d�ng�s�, while d�ng�s�n�n bir �e�ididir. Bu d�ng�, ko�ulun do�ru olup olmad���n� kontrol etmeden �nce kod blo�unu bir kez �al��t�r�r, ard�ndan ko�ul do�ru oldu�u s�rece d�ng�y� tekrarlar.
	int i = 0;
	do {
	  cout << i << "\n";
	  i++;
	}
	while (i < 5);



	cout < "-----------" << endl;
	cin >> w;
	while ( w == 6 ) {
		cout < "-----------" << endl;
		cin >> w;
		cout << w << "-----------" << endl;
	}





	do {
		cout << "-----------" << endl;
		cin >> w;
		cout << w << "-----------" << endl;
	} while (w == 6);













	//For D�ng�s� => Bir kod blo�unda tam olarak ka� kez d�ng� yapmak istedi�inizi biliyorsan�z, while d�ng�s� yerine for d�ng�s�n� kullan�n:
	
	for (int i = 0; i < 5; i++) {
  		cout << i << "\n";
	}

	
	//Bir ba�ka �rnek:
	
	for (int i = 0; i <= 10; i = i + 2) {
  		cout << i << "\n";
	}
	cout << i << "\n";


	//Break => �nceki �rneklerde kullan�lan break ifadesini zaten g�rd�n�z. Bir switch ifadesinin d���na atlamak i�in kullanm��t�k. Break ifadesi ayr�ca bir d�ng�den ��kmak i�in de kullan�labilir.
	
	//For d�ng�s�nde
	
	for (int i = 0; i < 10; i++) {
	  if (i == 4) {
	    break;
	  }
	  cout << i << "\n";
	}
	
	//While d�ng�s�nde
	
	int i = 0;
	while (i < 10) {
	  cout << i << "\n";
	  i++;
	  if (i == 4) {
	    break;
	  }
	}
	
	//Continue => Continue ifadesi, belirtilen bir ko�ul olu�ursa bir yinelemeyi (d�ng�de) keser ve d�ng�deki bir sonraki yinelemeyle devam eder.
	 
	 for (int i = 0; i < 10; i++) {
	 if (i == 4) {
	    continue;
	  }
	  cout << i << "\n";
	}
	
	//�RNEKLER
	
 	//�rnek1: 1'den 100e kadar olan say�lar�n toplamini bulan uygulama yazin.
 	
 	//�rnek2: girilen sayinin faktoriyelini bulan program yaz.
 	
 	//�rnek3: Bir hesap makinesi yap. 4 i�lem yapabilsin ve kullan�c� ��kmak isteyene kadar �al��s�n.	
	
	//�rnek4: Bir say� tahmin etme oyunu yap. Kullan�c�n�n 5 can� olsun ve her yanl�� bildi�inde 1 can� eksilsin. 1 le 100 aras�nda rastgele bir say�y� tahmin etmeye �al��s�n. Rastgele say�y� sen tan�mla.
	 	
    //�rnek5: girilen say�n�n ka� basamakl� oldu�unu s�yleyen program yaz

 	//�rnek6: �arp�m tablosunu ekrana yazd�r.
 	
 	//numx1=num
	//�rnek7: girilen �ok basamakl� say�y� tersten yazd�r. �rn 1234 -> 4321.
	 int num;
	 cout << "Give me a number: ";
	 cin >> num;
	 for (int i = 1; i <= 10; i++) {
		 //num x 1 = de?er
		 cout << num << " x " << i << " = " << (num * i);
		 //2 x 1 = 22 x 2 = 4
		 /*
		 .
		 .
		 .
		 .
		 */
		 //2 x 10 = 20
	 }
	 for (int i = 1; i <= 10; i++) {
		 for (int a = 1; a < 11; a++) {
			 cout << num << " x " << i << " = " << (num * i) << endl;
		 }
	 }
    return 0;
}
