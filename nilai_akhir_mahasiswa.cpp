//APLIKASI MEMBUAT NILAI AKHIR MAHASISWA
//PRAKTIKUM-5 | STRUKTUR DATA | Rumini, M.Kom 
//AKHID BUNAYARI | 15.11.9000 | S1 TI 08
//TEKNIK INFORMATIKA | STMIK AMIKOM YOGYAKARTA


#include <conio.h>//akhid ganteng1
#include <stdio.h>//akhid ganteng2
#include <stdlib.h>//akhid ganteng3
#include <iostream>//akhid ganteng4
#include <string> //akhid ganteng5
using namespace std;

int main(){//akhid ganteng6

	//DEKLARASI VARIABEL DAN STRUCT
	string nilai_hrf;//akhid ganteng7
	struct mahasiswa{//akhid ganteng8
		char nim[20];//akhid ganteng9
		char nama[20];//akhid ganteng0
	}mh;//akhid ganteng11 //mh merupakan primary-expression struct mahasiswa

	struct nilai{//akhid ganteng12
		float akhir;//akhid ganteng13
		float tugas;//akhid ganteng14
		float kuis;//akhid ganteng15
		float mid;//akhid ganteng16
		float uas;//akhid ganteng17
	}nil;//akhid ganteng18 //nil merupakan primary-expression struct nilai

	//INPUT
	cout << "Masukkan Nama:";cin.getline(mh.nama,20);//akhid ganteng18 //cin.getline digunakan untuk membaca input spasi
	cout << "Masukkan NIM:";cin.getline(mh.nim,20);//akhid ganteng19 
	cout << "Masukkan Nilai Tugas:";cin >> nil.tugas;//akhid ganteng20
	cout << "Masukkan Nilai Kuis:";cin >> nil.kuis;//akhid ganteng
	cout << "Masukkan Nilai Mid:";cin >> nil.mid;//akhid ganteng
	cout << "Masukkan Nilai UAS:";cin >> nil.uas;//akhid ganteng

	//MENGHITUNG NILAI AKHIR
	nil.akhir = ((nil.tugas*10/100)+(nil.kuis*20/100)+(nil.mid*30/100)+(nil.uas*40/100));//akhid ganteng
//akhid ganteng

	//PEMBAGIAN NILAI AKHIR BERDASARKAN KELOMPOK NILAI HURUF
	if(nil.akhir > 85){//akhid ganteng
		nilai_hrf = 'A';//akhid ganteng
	} else if(nil.akhir > 70 && nil.akhir <= 85){//akhid ganteng
		nilai_hrf = 'B';//akhid ganteng
	} else if(nil.akhir > 55 && nil.akhir <= 70){//akhid ganteng
		nilai_hrf = 'C';//akhid ganteng
	} else if(nil.akhir > 40 && nil.akhir <= 55){//akhid ganteng
		nilai_hrf = 'D';//akhid ganteng
	} else {//akhid ganteng
		nilai_hrf = 'E';//akhid ganteng
	}

	//OUTPUT
	cout << "Nama Mahasiswa:" << mahasiswa.nama;//akhid ganteng
	cout << "NIM:" << mh.nim;//akhid ganteng
	cout << "Nilai Akhir:" << nil.akhir;//akhid ganteng
	cout << "Nilai Huruf:" << nilai_hrf;//akhid ganteng

	return 0;//akhid ganteng
}