#include <iostream>
#include <string>

using namespace std;

//Basit bir class �rne�i
class MyClass{
	public:
		int num;
		string str;
};

//Class methodlar� �rne�i
class SelamBot {
	public:
		int num;
		string str;
		
		void selamVer(){
			cout << "Selamlar" << endl;
		}
		
		void selamVer2(string str){
			cout << "Selamlar " << str << endl;
		}
};

class Mat {
	public:
		int kareAl(int sayi);
		
};

Mat::kareAl(int sayi){
	return sayi*sayi;
}

//Constructor ve Destructor �rne�i: Constructorlar classlardan bir obje olu�turulurken o objeyi yaratmam�za olanak sa�layan yap�c� fonksiyonlard�r. Destructorlar ise o objeler silinece�i zaman
//o objeleri silen fonksiyondur. Kendimiz �zel olarak constructor ve destructor tan�mlayabiliriz. E�er tan�mlamazsak c++ otomatik basit constructorlar ve destructorlar kullan�r.
class Player{
	public:
		string name;
		int health;
		int armor;
		
		//Default Constructor �rne�i
		Player(){
			//Health ve armoru default nasil ayarlamak istiyorsak o de�erleri set ediyoruz.
			name = "Player1";
			health = 100;
			armor = 100;
			
			cout << "Yeni bir Player objesi olusturuldu" << endl;
		}
		
		//Parametreli Constructor �rne�i
		Player(string name, int health, int armor){
			//this keywordu classin i�indeki variable � belirtmek i�in kullan�l�r. Burada fonksiyona da health ve armor ad�nda de�i�kenler gelmi�.
			//E�er health = health diye tan�mlasayd�k class�n variabl� olan healthi mi yoksa parametre olarak gelen health i mi belirtti�imizi c++ anlayamazd�.
			//Bu y�zden neyi kast etti�imizi tam belirtmek i�in this keyword� kullan�l�r.
			this->name= name;
			this->health = health;
			this->armor = armor;
			
			cout << "3 args Player objesi olusturuldu" << endl;
		}
		
		//Destructor �rne�i
		~Player(){
			cout << name << " objesi silindi" << endl;
		}
};

//Access Specifiers �rne�i: C++'ta private, protected ve public diye 3 access specifier�m�z vard�r. Private verilere hi�bir yerden eri�emeyiz, sadece class�n i�inden eri�ilebilir. Protected verilere class�n �ocuklar� 
//eri�ebilir(Inheritance konusu haftaya)Public verilere ise her yerden eri�ebiliriz. E�er class� yarat�rken public, private vs diye belirtmeden tan�mlama yaparsak o de�erler default olarak private olur. �rn: Example2
class Access{
	private:
		int age;
	protected:
		string name;
	public:
		double salary;
};

//Example2
class Access2{
	int x;
	int y;
	public:
		int z;
};

//Encapsulation �rne�i: Kaps�llemenin anlam�, "hassas" verilerin kullan�c�lardan gizlendi�inden emin olmakt�r. Bunu ba�armak i�in, 
//s�n�f de�i�kenlerini/�zniteliklerini private olarak bildirmelisiniz (s�n�f�n d���ndan eri�ilemez). Ba�kalar�n�n �zel bir variable�n de�erini 
//okumas�n� veya de�i�tirmesini istiyorsan�z, genel get ve set y�ntemleri sa�layabilirsiniz.
class Encaps{
	private:
		int salary;
	public:
		Encaps(){
			salary = 10000;
		}
		
		int getSalary(){
			return salary;
		}
		
		void setSalary(int salary){
			this->salary = salary;
			cout << "salary setted to " << this->salary;
		}
};



int main(){

	//Basit bir class �rne�i, obje olu�turma ve kullanma
	MyClass obje;
	
	obje.num = 15;
	obje.str = "Erhan";
	
	cout << "Objenin icindeki sayi: " << obje.num << "\nObjenin icindeki string: " << obje.str << endl;
	
	//Methodlar� �a��rma
	SelamBot bot;
	
	bot.selamVer();
	
	bot.selamVer2("GDSC Ailesi");
	
	Mat obj;
	
	cout << obj.kareAl(5) << endl;

	//Constructors �rne�i
	
	Player player1;
	Player player2("Player2",250, 250);
	
	cout << "Player1 health: " << player1.health << "\nPlayer1 armor: " << player1.armor << endl;
	cout << "Player2 health: " << player2.health << "\nPlayer2 armor: " << player2.armor << endl;
	
	//Access Specifiers �rne�i
	Access accessObj;
	
	accessObj.age = 32; // Hata verecek ��nk� private de�er
	accessObj.name = "Tan"; // Hata verecek ��nk� protected de�er
	accessObj.salary = 110000; //Hata vermeyecek ��nk� public. D��ardan eri�ilebilir.
	
	Access2 access2Obj;
	
	access2Obj.x = 10; //Hata verecek ��nk� private.
	access2Obj.y = 20; //Hata verecek ��nk� private.
	access2Obj.< = 30; // Hata vermeyecek ��nk� public.
	
	//Encapsulation �rne�i
	Encaps obj;
	
	cout << "Obj maasi: " << obj.getSalary() << endl;
	
	obj.setSalary(15000);
	
	cout << "Obj maasi: " << obj.getSalary() << endl;
	
	//�rnek Sorular
	//�rnek1: Bir student classi yaziniz. Student �zellikleri: private:name,grade,letterGrade|public:Constructor, getter ve setterlar. Bu classtan 10 b�y�kl���nde bir array olusturarak ��rencilerin isim ve grade bilgilerini 
	//kullan�c�dan alin. Daha sonra bu gradelere g�re Harf notlar�n� hesaplay�p her ��renciye set edecek bir program yaz�n. AA -> 90-100, BB-> 75-90, CC-> 60-75, DD -> 40-60, FF -> 0-40

	
	return 0;
}


























