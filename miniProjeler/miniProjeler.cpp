
#include <iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

//sayı tahmin oyunu
/*
int main() {
	srand(time(0));
	int tutulan, tahmin, hak = 5;
	string devamMı;

	while (true) {
		tutulan = rand() % 100;


		}
	while (true) {
		if (hak <= 0) {
			cout << "maalesef hakkınız kalmadı:(... sayımız: " << tutulan;
			break;
		}

		cout << "tahmininiz: "; cin >> tahmin;

		if (tahmin == tutulan) {
			cout << "tebrikler bildiniz:)" << endl;
			break;
		}
		else if (tahmin < tutulan) {
			cout << "tahmininizi büyültünüz:)" << endl;
		}
		else {
			cout << "tahmininizi küçültünüz:)" << endl;
		}
		hak--;

		}
	cout << "devam etmek ister misiniz: [E/H] "; cin >> devamMı;
	if (devamMı == "e" || devamMı == "E") {
		hak = 5;
		system("cls");
	}
	else {
		cout << "oyunu bitirdiniz..." << endl;
	}
	
}
*/  


//verilen iki sayıyı toplama
/*
int main() {

	int sayi1, sayi2;

	cout << "sayi1 = ";
	cin >> sayi1;
	cout << "sayi2 = ";
	cin >> sayi2;

	sayi1 += sayi2;    // sayi1 ve sayi2'yi topla değerini sayi1'e ata

	cout << "sayi+=sayi2 isleminin degeri = " << sayi1 << endl;

	return 0;

}
*/

// harf notu hesaplama
/*
int main() {

	int sinav_notu;
	char harf_notu;

	cout << "Başari Notunuzu giriniz : ";
	cin >> sinav_notu;

	if (sinav_notu >= 90) { harf_notu = 'A'; }
	if (sinav_notu >= 80) { harf_notu = 'B'; }
	if (sinav_notu >= 70) { harf_notu = 'C'; }
	if (sinav_notu >= 60) { harf_notu = 'D'; }
	else { harf_notu = 'F'; }
	cout << "Harf notunuz : " << harf_notu;
	*/

//benzin fiyatı hesaplama
/*
int main() {

	// İlk 100 km gidilen yol için 0.7 tl ödenecek
	// İlk 100 km'den sonrası herkilometre için 0.3 tl ödenecektir

	double yuz_alti = 0.5;
	double yuz_ustu = 0.2;
	int kilometre;
	double toplam_ucret;

	cout << "Gidilen kilometreyi giriniz : ";
	cin >> kilometre;

	if (kilometre <= 100) {
		toplam_ucret = kilometre * yuz_alti;
		cout << "Odenecek ucret : " << toplam_ucret << " tl " << endl;

	}
	else if (kilometre > 100) {
		toplam_ucret = (100 * yuz_alti) + ((kilometre - 100) * yuz_ustu);
		cout << "Odenecek ucret : " << toplam_ucret << " tl " << endl;

	}

}
*/



// kelime ters çevirme
/*
int main() {

	char kelime[100], tmp;
	cin >> kelime;

	int uzunluk;
	for (uzunluk = 0; kelime[uzunluk] != '\0'; ++uzunluk);
	// kelimenin ortasını belirler ve yer değiştirir
	for (int i = 0; i < (uzunluk / 2); i++) {
		tmp = kelime[i];
		kelime[i] = kelime[uzunluk - i - 1];
		kelime[uzunluk - i - 1] = tmp;
	}
	cout << kelime;
	return 0;
}
*/


// faktoriel hesaplama

/*
int main() {

	int number, faktor=1;

	cout << "enter number: " << endl;
	cin >> number;

	for (int i = number; i >= 1; i--) {
		
		faktor *= i;
	}
	cout << faktor;
}
*/

// sayı sayma programı
/*
int main() {
	int a, b = 0;
	cout << "how long should you sort the number by" << endl;
	cin >> a;

	while (b<=a) {
		cout << b << " ";
		b++;

	}

}
*/

//asal mı
/*

int main() {

	int a, b = 0;
	cout << "enter the number: " << endl;
	cin >> a;

	if (a > 2) {

		for (int i = 2; i < a; i++) {

			if (a % i == 0) {
				b++;
			}
		}
		if (b >= 1) {
			cout << "number is not prime." << endl;
		}
		else {
			cout << "number id prime." << endl;
		}
	}
	else if (a == 2) {
		cout << "the smallest prime number is 2" << endl;
	}
	else
		cout << "number cannot be 0,1 or negative number" << endl;

}
*/
