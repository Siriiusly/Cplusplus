#include <iostream>
#include "Ogrenci.h"
using namespace std;

Ogrenci::Ogrenci(int idd, string add, int sinavnot) {
	id = idd;
	ad = add;
	sinavNotu = sinavnot;
}
void Ogrenci::setId(int idd) {
	id = idd;
}
void Ogrenci::setAd(string add) {
	ad = add;
}
void Ogrenci::setSinavNot(int sinavnot) {
	sinavNotu = sinavnot;
}
int Ogrenci::getId() {
	return id;
}
string Ogrenci:: getAd() {
	return ad;
}
int Ogrenci::getSinavNot() {
	return sinavNotu;
}
void Ogrenci:: bilgileriYaz() {
	cout << "Ogrenci ID: " << id << endl << "Ogrenci Ad : " << ad << endl << "Ogrenci Sinav Notu: " << sinavNotu << endl;
}