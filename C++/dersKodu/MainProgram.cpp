#include<iostream>
#include<cmath>

using namespace std;

//int main() {

	//EKRANA YAZDIRMA FONKSIYONU
	/*string isim;
	int yas;
	yas = 21;
	isim = "Mehmet kocak";
	char notOrtalamasi = 'A'; //ascii tabloya gore decimal karsiligi da yazilabilir
	float sayisalNotOrt = 3.25; //double daha kapsamli
	bool sinavaGirdiMi = true; //dogruysa 1 ya da true,yanlissa 0 ya da false.

	cout << "Merhaba Ben Mehmet" << endl << endl; // endl karakteri alt satira inmeyi saglar. cout=>printf. endl=>\n
	cout << "Ogrenci Adi:" << isim << endl << "Ogrenci Yasi:" << yas << endl;
	cout << "Not Ortalamasi:" << notOrtalamasi << endl;
	cout << "Ogrenci sayisal not ortalamasi:" << sayisalNotOrt << endl;
	cout << "Ogrenci Sinava girdi mi:" << sinavaGirdiMi << endl;*/


	//KULLANICIDAN GIRIS ALMA FONKSIYONU
	/*int en, boy, alan;
	cout << "Merhaba" << endl;

	cout << "Lutfen dikdortgenin enini giriniz:";
	cin >> en;
	cout << endl;

	cout << "Lutfen dikdortgenin boyunu giriniz:";
	cin >> boy;
	cout << endl;
	//cout << "Lutfen dikdorgenin enini-boyunu giriniz:";
	//cin >> en >> boy;
	
	alan = en * boy;
	cout << "Dikdortgenin alani:" << alan << endl;*/


	//CMATH FONKSIYONLARI
	/*int y;
	y = pow(2, 5);
	cout << y << endl;
	y = floor(2.5);//araliktaysa alttakine
	cout << y << endl;
	y = ceil(2.5);//araliktaysa usttekine
	cout << y << endl;
	y = round(2.6);//yuvarla
	cout << y << endl;*/



	/*//sifre belirleme
	
	int sifre;
	cout << "Lutfen bir sifre giriniz:";
	cin >> sifre;
	cout << "Sifreniz belirlendi..." << endl;

	//sifre sorma

	int sifreSorgulama;
	cout << "Lutfen sifrenizi giriniz:";
	cin >> sifreSorgulama;
	if (sifreSorgulama == sifre) 
	{
		cout << "Sifre Dogru!";
	}
	else
	{
		cout << "Sifre Yanlis!";
	}*/

	/*int num1, num2;
	cout << "Lutfen ilk sayiyi giriniz:";
	cin >> num1;
	cout << "Lutfen ikinci sayiyi giriniz:";
	cin >> num2;

	char islem;
	cout << "Lutfen yapilacak islemi seciniz:";
	cin >> islem;
	cout << "Sonuc:";
	if (islem == '+')
	{
		cout << num1 + num2;
	}
	else if (islem == '-') 
	{
		cout << num1 - num2;
	}
	else if(islem=='*')
	{
		cout << num1 * num2;
	}
	else if (islem == '/')
	{
		cout << num1 / num2;
	}*/

	/*int num1, num2, secilenIslem, sonuc;
	sonuc = -1;
	cout << "Lutfen ilk sayiyi giriniz:";
	cin >> num1;
	cout << "Lutfen ikinci sayiyi giriniz:";
	cin >> num2;
	
	cout << "Lutfen yapilacak islemi seciniz(1:+ 2:- 3:* 4:/):";
	cin >> secilenIslem;
	cout << endl;
	if (secilenIslem == 1)
	{
		sonuc = num1 + num2;
	}
	else if (secilenIslem == 2)
	{
		sonuc = num1 - num2;
	}
	else if (secilenIslem == 3)
	{
		sonuc = num1 * num2;
	}
	else if (secilenIslem == 4)
	{
		sonuc = num1 / num2;
	}
	else 
	{
		cout << "Hatali tuslama yaptiniz:";
	}
	if (sonuc != -1)
	{
		cout << sonuc;

	}*/

	/*int sayi1, sayi2;
	cout << "1. sayiyi giriniz:";
	cin >> sayi1;
	cout << "2. sayiyi giriniz:";
	cin >> sayi2;
	if (sayi1 > 0 and sayi2 > 0) 
	{
		cout << "Her iki sayida pozitiftir.";
	}
	else if (sayi1 <0 && sayi2 < 0)
	{
		cout << "Her iki sayida negatiftir.";
	}
	else if (sayi1 < 0 || sayi2 < 0)
	{
		cout << "Iki sayidan biri negatiftir.";
	}*/

	//KULLANICIDAN 3 TANE TAM SAYI ALIP EKRANA EN BUYUK ELAMANI YAZDIRMA

	/*int num1, num2, num3,sonuc;
	cout << "Lutfen 3 tane sayi giriniz:";
	cin >> num1 >> num2 >> num3;
	cout << endl;
	if (num1 >= num2 && num1 >= num3)
	{
		sonuc = num1;
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		sonuc = num2;
	}
	else
	{
		sonuc = num3;
	}

	cout << "En buyuk sayi:" << sonuc<<endl;*/
	/*int index = 1;
	int max;
	cout << "Lutfen max degeri giriniz:";
	cin >> max;
	while (index <= max) {
		if (index % 7 == 0) {
			cout << index << " ";
		}
		index++;
	}*/
	/*int num;
	cout << "Lutfen bir sayi giriniz:";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i<<" ";
		}
		cout << endl;
	}
	return 0;

}*/
/*struct Address {
	string cityName;
	int No;

};
struct Employee {
	int id;
	string name;
	string department;
	Address address;
};
void showEmployee(Employee emp1) {
	emp1.id = 32;
	cout << "ID: " << emp1.id << endl;
	cout << "Name: " << emp1.name << endl;
	cout << "Department: " << emp1.department << endl;
}
void show(Employee *emp1) {
	emp1->id = 32;
	cout << "ID: " << emp1->id << endl;
	cout << "Name: " << emp1->name << endl;
	cout << "Department: " << emp1->department << endl;

}


int main() {
	Employee employee1 = { 4,"Mehmet Kocak","Computer Science",{"Hatay",31}};
	//showEmployee(employee1);
	//show(&employee1);
	//cout << employee1.id << endl;

	cout << "ID: " << employee1.id << endl;
	cout << "Name: " << employee1.name << endl;
	cout << "Department: " << employee1.department << endl;
	cout << "City Name: " << employee1.address.cityName << endl;
	cout << "House No: " << employee1.address.No << endl;

	return 0;
}*/

/*struct Address {
	string cityName;
	int No;

};
struct Employee {
	int id;
	string name;
	string department;
	Address* address;
};

int main() {

	Employee employee;
	employee.id = 4;
	employee.name = "Mehmet Kocak";
	employee.department = "Computer Science";
	Address adress = { "Hatay",31 };
	employee.address = &adress;
	Employee* ptr=&employee;

	cout << ptr->id << endl;
	cout << ptr->name << endl;
	cout << ptr->department << endl;
	cout << ptr->address->cityName << endl;
	cout << ptr->address->No << endl;
	return 0;
}*/

/*struct Student {
	int id;
	char letter;
};

int main() {
	
	//cout << "Integer:" << sizeof(int) << endl;cout << "Char:" << sizeof(char) << endl;cout << "Double:" << sizeof(double) << endl;
	//cout << "Float:" << sizeof(float) << endl;cout << "String:" << sizeof(string) << endl;cout << "Struct:" << sizeof(Student) << endl;
	int* ptr;
	int size;
	cout << "Kac deger sakliyacaksiniz:";
	cin >> size;
	ptr = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Deger:";
		cin >> ptr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << "Eleman:" << ptr[i] << endl;
	}
	delete[] ptr;
	return 0;
}*/
		//NULL POINTER VE DANGLING REFERANSI
/*int main() {
	int* p1 = nullptr;
	int* p2 = nullptr;
	p1 = new int;
	*p1 = 10;
	p2 = p1;
	cout << *p1 << endl;
	delete p1;
	//cout << *p2 << endl; suan hicbir yeri gostermeyip deger atamasi yaptigimiz icin hata verir
	cout << endl << endl;
	//FOR DONGUSU
	
	int a[] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}

	cout << endl << endl;
	//FOREACH DONGUSU
	for (int item : a) {
		cout << item << endl;
	}
	return 0;
}*/

