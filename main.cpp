#include <iostream>
#include "tubes.h"
using namespace std;

int main()
{
    ListDokter LD;
    ListPAS PA;
    infotypeDOK info;
    adr_dokter K;
    adrPAS ps;
    dokter d;
    creatListDokter(LD);
    createLP(PA);

    pilih=pilihmenu();
    while(pilih!=0){
        if(pilih==1){
            if(d!=NULL){
                tambahps(PA,LD,spealisasi,tanggal);
            }else{
                cout<<"dokter harus diisi terlebih dahulu"<<endl
            }
            tambahps(PA,LD,speasialisasi,tanggal);
        }else if(pilih==2){
			cout << "=== Tambah Data ===" << endl;
			cout << "ID : ";
			cin >> d.id;
			cout << "Nama : ";
			cin >> d.nama;
			cout << "Spesialisasi : ";
			cin >> d.spesialisasi;
			cout << "Tanggal (dd-mm-yyyy) : ";
			cin >> d.tanggal;
			cout << "Jam Praktek (Start) : ";
			cin >> d.jam_praktek_start;
			cout << "Jam Praktek (End) : ";
			cin >> d.jam_praktek_end;
			cout << "Kuota Pasien : ";
			cin >> d.kuota;
			adr_dokter newdata = createElementDokter(d);
			insertFirstDokter(LD,newdata);
        }else if(pilih==3){
            showPAS(PA);
        }else if(pilih==4){
            cout<<"-----data sebelum pindah---------"<<endl;
            cout<<""
        }
    }

    createLD(D);

    return 0;
}
