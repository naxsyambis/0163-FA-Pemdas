#include <iostream>;
#include <math.h>;
#include <string>;
using namespace std;


class MasukkanUniversitas
{
private:
	int uangPendaftaran;
	// isi daftar variable yang dibutuhkan di bawah ini
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	int nilai;
	

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		default = 100000;
		
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk(SNBT||SNBP) { return; } 

	// isi disini dengan fungsi virtual yang dibutuhkan

	virtual void hitungTotalBiaya 

	void setUangPendaftaran(int nilai) { 
		this->uangPendaftaran = nilai; 
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBT
	void inputUangPendaftaran() // menerima uangPendaftaran, uangSemesterPertama, uangBangunan, hitungTotalBiaya
	{
		cout << "Masukkan uang pendaftaran " << endl;
		cin >> uangPendaftaran;
	}
	void UangSemesterPertama()
	{
		cout << "Masukkan uang semester pertama " << endl;
		cin >> uangSemesterPertama;
	}
	void UangBangunana()
	{
		cout << "Masukkan uang bangunan " << endl;
		cin >> uangBangunan;
	}
	void hitungTotalBiaya(int uangPendaftaran + int uangSemesterPertama, int uangBangunan;)
	{
		cout << "Total biaya " << endl;
		cin >> hitungTotalBiaya;
	}

};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
	// void input untuk uangPendaftaran, uangSemesterPertama, hitungTotalBiaya
};
int main() {
	// isi disini untuk fungsi main
}
//