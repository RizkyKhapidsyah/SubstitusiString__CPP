#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	cout << "======================" << endl;
	cout << "CONTOH 1 - Swap String" << endl;
	cout << "======================" << endl;

	string Kalimat_1("Rizky Khapidsyah");
	string Kalimat_2("Dessy Puspita Sari Harahap");

	cout << "Awal:" << endl;
	cout << "1: " << Kalimat_1 << endl;
	cout << "2: " << Kalimat_2 << endl;

	/* Swap String */
	Kalimat_1.swap(Kalimat_2);

	cout << endl << "Akhir (Setelah di-Swap):" << endl;
	cout << "1: " << Kalimat_1 << endl;
	cout << "2: " << Kalimat_2 << endl << endl;

	cout << "=========================" << endl;
	cout << "CONTOH 2 - Replace String" << endl;
	cout << "=========================" << endl;

	cout << "Awal:" << endl;
	cout << "1: " << Kalimat_1 << endl;
	cout << "2: " << Kalimat_2 << endl;

	/* Replace String */
	Kalimat_1.replace(12, 3, "*Teks Yang Di-Replace*");
	Kalimat_2.replace(6, 7, "*Sebagian Teks Hilang*");

	cout << endl << "Akhir (Setelah di-Replace):" << endl;
	cout << "1: " << Kalimat_1 << endl;
	cout << "2: " << Kalimat_2 << endl << endl;

	cout << "===========================" << endl;
	cout << "CONTOH 3 - Replace String_2" << endl;
	cout << "===========================" << endl;

	string Kalimat_3("Apakah Kita Bahagia Hari ini?");

	cout << "Awal:" << endl;
	cout << Kalimat_3 << endl << endl;

	Kalimat_3.replace(Kalimat_3.find("Bahagia"), 7, "Sedih");

	cout << "Akhir:" << endl;
	cout << Kalimat_3 << endl << endl;

	cout << "========================" << endl;
	cout << "CONTOH 4 - Insert String" << endl;
	cout << "========================" << endl;

	string Kalimat_4("Saya ingin Mandi");
	
	cout << "Awal:" << endl;
	cout << Kalimat_4 << endl << endl;

	Kalimat_4.insert(16, " Dan Makan");

	cout << "Akhir:" << endl;
	cout << Kalimat_4 << endl << endl;

	_getch();
	return 0;
} 