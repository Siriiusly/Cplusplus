#include <iostream>
#include "Ogrenci.h"
#include <list>
using namespace std;

void menuGoster() {
	cout << endl;
	cout << "* * * * * * * * *"<<endl;
	cout << "*               *"<<endl;
	cout << "*     MENU      *"<<endl;
	cout << "*               *"<<endl;
	cout << "* * * * * * * * *"<<endl;
	cout << "1.Yeni Kayit Ekle"<<endl;
	cout << "2.Tum Listeyi Goster" << endl;
	cout << "3.Ogrenci ID'ye gore Kayit Sil" << endl;
	cout << "4.Ogrenci Ara" << endl;
	cout << "5.Menuden Cikis" << endl;
}
void ogrenciEkle(list<Ogrenci>*lst ) {
	int id,sinavnotu;
	string ad,soyad,isim;
	cout << "Lutfen ogrenci ID giriniz: ";
	cin >> id;
	cout << "Ad giriniz: ";
	cin >> ad>>soyad;
	isim = ad + " " + soyad;
	cout << "Ogrenci Sinav notunu giriniz :";
	cin >> sinavnotu;
	Ogrenci ogr(id, isim,sinavnotu);
	lst->push_back(ogr);
}
void showList(list<Ogrenci>* lst) {
	list<Ogrenci>::iterator it;
	cout << endl << "- - - - Tum Ogrenci Listesi - - - - \n";
	for (it = lst->begin(); it != lst->end(); it++) {
		it->bilgileriYaz();
		cout << endl;
	}
	cout << endl;
}
void ogrenciSil(list<Ogrenci>* lst) {
	int id;
	cout << "Lutfen silinecek ogrencinin ID bilgisini giriniz: ";
	cin >> id;
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++) {
		if (it->getId() == id)
			break;
	}
	if (it == lst->end())
		cout << "Belirtilen ID bulunamamistir,silme yapilamadi.";
	else
	lst->erase(it);
}
void ogrenciAra(list<Ogrenci>* lst) {
	int id;
	cout << "Aradiginiz ogrencini ID'sini giriniz: ";
	cin >> id;
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++) {
		if (it->getId() == id)
			break;
	}
	if(it == lst->end())
		cout << "Belirtilen ID bulunamamistir.";
	else{
		cout << "Aradiginiz ogrencinin bilgileri : \n";
		it->bilgileriYaz();
	}
}


int main() {

	list<Ogrenci>* ogrenciList = new list<Ogrenci>();

	int secim = 0;
	do {
		menuGoster();
		cout << "Seciminiz: ";
		cin >> secim;
		if (cin.fail()) {
			// Hatalý giriþ durumunda
			cin.clear(); // Hata durumunu temizle
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Geçersiz giriþi temizle
			cout << "Hatali islem girdiniz, lutfen tekrar deneyin!" << endl;
			continue;
		}
		switch (secim) {
		case 1:
			ogrenciEkle(ogrenciList);
			break;
		case 2:
			showList(ogrenciList);
			break;
		case 3:
			ogrenciSil(ogrenciList);
			break;
		case 4:
			ogrenciAra(ogrenciList);
			break;
		case 5:
			break;
		default:
			cout << "Hatali islem girdiniz,yeniden deneyin!"<<endl;
		}
	} while (secim != 5);







	return 0;
}