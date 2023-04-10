#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "Nim= " << nim;
		cout << "\nNama= " << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMk() {

		cout << "\nMasukan jumlah SKS= ";
		cin >> sks;
		cout << "\nMasukan Kode MK= ";
		cin >> kode;
		cout << "\nMasukan Nama MK = ";
		cin >> namaMK;		
	}

	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode MK= " << kode;
		cout << "\nNama MK= " << namaMK << endl;

	}
};

int main() {

	Mahasiswa mhs;
	Matakuliah mk;

	cout << "\nMasukan NIM= ";
	cin >> mhs.nim;
	cout << "\nMasukan Nama= ";
	cin >> mhs.nama;

}