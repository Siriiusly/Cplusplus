#pragma once
#include <iostream>

using namespace std;

class Ogrenci {
private:
	int id;
	string ad;
	int sinavNotu;

public:
	Ogrenci(int idd, string add, int sinavnot);
	void setId(int idd);
	void setAd(string add);
	void setSinavNot(int sinavnot);
	int getId();
	string getAd();
	int getSinavNot();
	void bilgileriYaz();
};

