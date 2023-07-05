#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;

	}

	virtual float hitungNilaiAkhir() {return 0;}
	virtual void cekKelulusan() {return 0;}
	virtual void input() {return 0;}

	void setPresensi (float nilai) {
		this->presensi = nilai;
	}
	
void input() {

	float getPresensi()
		cout << "Masukan Nilai Presensi : ";
		float p = getPresensi();
		cin >> p;
		SetPresensi(p);

		cout << "Masukan Nilai Activity :";
		float a = getActivity();
		cin >> a;
		SetActivity(a);

		cout << "Masukan Nilai Exercise :";
		float e = getExercise();
		cin >> e;
		SetExercise(e);

}

};

class Pemrograman : public MataKuliah {
	
};

int main() {
	cout << "Program Dibuat" << endl;


} 