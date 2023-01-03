#include <iostream>
#include "tubes.h"
using namespace std;

int main()
{
    ListDokter LD;
    ListPAS PA;

    adr_dokter K;
    adrPAS ps;
    dokter d;
    pas a;
    creatListDokter(LD);
    createLP(PA);

    string

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
            cout<<"nama pasien: ";cin>>namaP;
            cout<<"medical record: ";cin>>mid;
            cout<<"-----data sebelum pindah---------"<<endl;
            cout<<"dokter spesialisasi: ";cin>>speasialis_awal;
            cout<<"tanggal: ";cin>>tanggal_awal;
            cout<<"-----data akan pindah---------"<<endl;
            cout<<"dokter spesialisasi pindah: ";cin>>speasialis_akhir;
            cout<<"tanggal pindah: ";cin>>tanggal_akhir;
            pindah_jadwal(LD,PA,namaP,mid,speasialis_awal,tanggal_awal,speasialis_akhir,tanggal_akhir);
        }else if(pilih==5){

        }
    }

    createLD(D);

    return 0;
}
