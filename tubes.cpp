#include "tubes.h"

void createLP(ListPAS &PA){
    first(PA)=NULL;
    last(PA)=NULL;
}
adrPAS bikinDataPAS(infotypePAS PS){
    adrPAS p=new elmPAS;
    next(p)=NULL;
    prev(p)=NULL;
    jadwalD(P)=NULL;
    return p;
}
void dataBaruPas(ListPAS &PA,adrPAS S){
    if(first(PA)!=NULL&&last(PA)!=NULL){
        prev(S)=last(PA);
        next(last(PA))=S;
        last(PA)=S;
    }else{
        last(PA)=S;
        first(PA)=S;
    }
}
void showPAS(ListPAS PA){
    adrPAS S=first(PA);
    if(S!=NULL){
        cout<<"-----Data Pasien------"<<endl;
        while(S!=NULL){
            pas i=info(S);
            cout<<"medical record ID: "<<i.mID<<endl;
            cout<<"nama pasien: "<<i.namaPS<<endl;
            cout<<"jenis pasien: "<<i.jenis<<endl;
            cout<<"penyakit pasien: "<<i.hasil<<endl;
            cout<<"biaya dokter: "<<i.bDK<<endl;
            cout<<"biaya obat: "<<i.bOB<<endl;
            S=next(S)
        }
        cout<<endl;
    }else{
        cout<<"data pasien tidak ada"<<endl;
    }
}
void deletePS(ListPAS &PA,string mid,string namaPS){
    adrPAS ps=first(PA)
    if(ps!=NULL){
		while (ps!=NULL) {
			pas s = info(ps);
			if (s.mID == mid && d.namaps == namaPS) {
				break;
			}
			ps = next(ps);
		}
		if(ps!=NULL){
                //delete last
			if(ps==last(PA)){
				last(PA) = prev(ps);
				next(ps) = NULL;
				prev(ps) = NULL;
				next(last(PA)) = NULL;
				//delete first
			}else if(ps==first(PA)) {
				first(PA) = next(ps);
				next(ps) = NULL;
				prev(ps) = NULL;
				prev(first(PA)) = NULL;
			}else{
			    //delete after
				adrPAS prec=first(PA);
				while(next(prec)!=pa){
                    prec=next(prec);
				}
				ps=next(prec);
				next(prec)=next(ps);
				prev(next(ps))=prec;
				next(ps)=NULL;
				prev(ps)=NULL;
			}
			cout << "pasien berhasil terhapus" << endl;

		}else {
		    //jika tidak ada nama pasien yang dicari untuk di hapus
			cout << "pasien dengan nama " << namaPS << "dan medical record ID " << mid << endl;
		}

	}
}
void biaya(ListPAS &PA,ListDokter &LD,string speasialis,string tanggal,string nama,string mid){
     adrPAS ps=findps(PA,nama,mid);
     adr_dokter data=findDokter(LD,speasialis,tanggal);
     if(ps!=NULL){
        if()
     }
}
void showtanggal(ListDokter &LD,ListPAS &PA,string tanggal){
    adr_dokter data=first(LD);
    adrPAS ps;
    int jum=0
    while(data!=NULL){
        dokter r=info(data);
        if(r.tanggal==tanggal){
            jum++;
            showPAS(PA);
        }
        data=next(data);

    }
}
void tambahps(ListPAS &PA,ListDokter &LD,string spesialisasi,string tanggal){
    adr_dokter data=findDokter(LD,spesialisasi,tanggal);
    adrPAS ps;
    if(data!=NULL){
        if(info(data).kouta>0){
            pas p=info(ps)
            cout<<"medical record Id: ";cin>>p.mID;
            cout<<"nama : ";cin>>p.namaPS;
            cout<<"jenis : ";cin>>p.jenis;
            cout<<"hasil periksa : ";cin>>p.hasil;
            cout<<"biaya jasa dokter : ";cin>>p.hasil;
            cout<<"biaya obat : ";cin>>p.bOB

            ;

            dataBaruPas(PA,ps);
            jadwalD(ps)=data;
            info(data).kouta--;
        }else{
            cout<<"mohon masukin ke jadwal lain"<<endl;
        }
    }else{
        cout<<"data yang dimasukan salah"<<endl;
    }

}
void pindah_jadwal(ListDokter &LD,ListPAS &PA,string namaps,string mid,string spesialisasi_awal,string tanggal_awal,string spesialisasi_akhir,string tanggal_akhir){
    adr_dokter data1=findDokter(LD,spesialisasi_awal,tanggal_awal);
    adrPAS ps=findps(PA,namaps,mid)
    if(data1!=NULL){
            if(ps!=NULL){
                if(jadwalD(ps)==data1){
                    jadwalD(ps)=NULL;
                }
                adr_dokter data2=findDokter(LD,spesialisasi_akhir,tanggal_akhir);
                jadwalD(ps)=data2;
                ps=next(ps);
            }else{
                cout<<"pasien yang dicari tidak ada"<<endl;
            }

        }else{
            cout<<"dokter yang di cari tidak ada"<<endl;
    }
}
adrPAS findps(ListPAS &PA,string namaps,string mid){
    adrPAS P=first(PA);
    adrPAS h;
    while(P!=NULL){
        pas ps=info(P);
        if(ps.namaPS==namaps&&ps.mID==mid){
            h=P;
        }else{
            h=NULL;
        }
        P=next(P);
    }
    return h
}


int pilihmenu(){
    int input;
    cout<<"========== Rumah Sakit  ========="<<endl;
    cout<<"1. tambah pasien"<<endl;
    cout<<"2. tambah dokter"<<endl;
    cout<<"3. tampilkan data pasien "<<endl;
    cout<<"4. pindah jadwal "<<endl;
    cout<<"5. total biaya "<<endl;
    cout<<"0.keluar "<<endl;
    cout<<"pilih menu:"
    cin>>input;
    return input;

}
