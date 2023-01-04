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
    pas info;
    creatListDokter(LD);
    createLP(PA);

    string speasialis_awal,speasialis_akhir,tanggal_awal,tanggal_akhir,namaP,spealisasi,tanggal,mid;
    int kuota;

    int n=1;

    while(n!=0){
        cout<<"========== Rumah Sakit  ========="<<endl;
        cout<<"1. tambah pasien"<<endl;
        cout<<"2. tambah dokter"<<endl;
        cout<<"3. tampilkan data pasien "<<endl;
        cout<<"4. pindah jadwal "<<endl;
        cout<<"5. total biaya "<<endl;
        cout<<"6. tampikan data dokter "<<endl;
        cout<<"7. tampikan data dokter "<<endl;
        cout<<"8. jumlah pasien "<<endl;
        cout<<"9. delete pasien "<<endl;
        cout<<"10. pasien dan dokternya "<<endl;
        cout<<"0.keluar "<<endl;
        cout<<"pilih menu:";
        cin>>n;
        if(n==1){
            if(first(LD)!=NULL){

                cout<<"medical record Id: ";cin>>a.mID;
                cout<<"nama : ";cin>>a.namaPS;
                cout<<"jenis : ";cin>>a.jenis;
                cout<<"hasil periksa : ";cin>>a.hasil;
                cout<<"pilih dokter :";cin>>spealisasi;
                cout<<"tanggal periksa :";cin>>tanggal;
                d.kuota=kuota;
                d.spesialisasi=spealisasi;
                d.tanggal=tanggal;
                adrPAS pa=bikinDataPAS(a);
                tambahps(PA,LD,pa,a,spealisasi,tanggal);
            }else{
                cout<<"dokter harus diisi terlebih dahulu"<<endl;
            }

        }else if(n==2){
			dokter d;
			cout << "=== Tambah Data ===" << endl;
			cout << "ID : ";cin >> d.id;
			cout << "Nama Dokter : ";cin >> d.nama;
			cout << "Spesialisasi : ";cin >> d.spesialisasi;
			cout << "Tanggal : ";cin >> d.tanggal;
			cout << "Jam Praktek (Mulai) : ";cin >> d.jam_praktek_start;
			cout << "Jam Praktek (Berakhir) : ";cin >> d.jam_praktek_end;
			cout << "Kuota Pasien : ";cin >> d.kuota;
			adr_dokter newdata = createElementDokter(d);
			insertFirstDokter(LD,newdata);
        }else if(n==3){
            showPAS(PA);
        }else if(n==4){
            cout<<"nama pasien: ";cin>>namaP;
            cout<<"medical record: ";cin>>mid;
            cout<<"-----data sebelum pindah---------"<<endl;
            cout<<"dokter spesialisasi: ";cin>>speasialis_awal;
            cout<<"tanggal: ";cin>>tanggal_awal;
            cout<<"-----data akan pindah---------"<<endl;
            cout<<"dokter spesialisasi pindah: ";cin>>speasialis_akhir;
            cout<<"tanggal pindah: ";cin>>tanggal_akhir;
            pindah_jadwal(LD,PA,namaP,mid,speasialis_awal,tanggal_awal,speasialis_akhir,tanggal_akhir);
        }else if(n==5){
            string hasil;
            a.hasil=hasil;
            biaya(PA,namaP,mid,hasil);
        }else if(n==6){
            showDokter(LD);
        }else if(n==7){
            string tanggal;
            cout<<"masukan tanggal diinginkan: ";cin>>tanggal;
            showtanggal(LD,PA,tanggal);
        }else if(n==8){
            string nama,tanggal;
			cout << "Nama : ";cin >> nama;
			cout << "Tanggal : ";cin >> tanggal;
			deleteDokter(LD,nama,tanggal);
        }else if(n==9){
            string mid,namaps;
            cout<<"masukan medical ID: ";cin>>mid;
            cout<<"masukan nama pasien: ";cin>>namaps;
            deletePS(PA,mid,namaps);
        }else if(n==10){
            string mid,namaps;
            cout<<"masukan medical ID: ";cin>>mid;
            cout<<"masukan nama pasien: ";cin>>namaps;
            showpd(PA,namaps,mid);
        }
    }



    return 0;
}
