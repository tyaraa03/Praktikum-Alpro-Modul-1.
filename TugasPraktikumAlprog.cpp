#include <iostream>
using namespace std;
int main() {
	float gaji_perjam = 50000;
	float jam_kerja;
	
	cout << "Masukkan Jam Kerja :";
	cin  >> jam_kerja;
	
	float total_gaji = gaji_perjam * jam_kerja;
	cout << "total_gaji: RP" << total_gaji;
	return 0;
}


