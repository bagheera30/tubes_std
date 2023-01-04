#include "tubes.h"

void createLP(ListPAS &PA){
    first(PA)=NULL;
    last(PA)=NULL;
}
adrPAS bikinDataPAS(pas PS){
    adrPAS ps=new elmPAS;
    next(ps)=NULL;
    prev(ps)=NULL;
    jadwalD(ps)=NULL;
    return ps;
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
    adrPAS q = first(PA);
	if(q!=NULL){
		cout << "=== Data pasien ===" << endl;
		while(q != NULL){
			cout << "medical record ID : " <<  info(q).mID<< endl;
			cout << "nama pasien : " <<  info(q).namaPS << endl;
			cout << "jenis pasien : " <<  info(q).jenis << endl;
			cout << "penyakit pasien : " <<  info(q).hasil << endl;
			cout << "biaya total : " <<  info(q).btotal  << endl;
			q = (q)->next;
		}
		cout << endl;
	}else {
		cout << "Data pasien Kosong :( " << endl;
	}
}
void deletePS(ListPAS &PA,string mid,string namaPS){
    adrPAS ps=findps(PA,namaPS,mid);
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
            while(next(prec)!=ps){
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
void showpd(ListPAS PA,string nama,string mid){
    adrPAS ps=first(PA);
   if(ps!=NULL){
        cout<<"data berikut informasi tentang pasien"<<endl;
        cout<<"medical record ID:"<<info(ps).mID<<endl;
        cout<<"nama pasien:"<<info(ps).namaPS<<endl;
        cout<<"jenis pengobatan:"<<info(ps).jenis<<endl;
        cout<<"hasil cek up:"<<info(ps).hasil<<endl;
        cout<<"total biaya:"<<info(ps).btotal<<endl;
        adr_dokter data=jadwalD(ps);
        if(jadwalD(ps)!=NULL){
            cout<<"tanggal pasien:"<<info(data).tanggal<<endl;
            cout<<"ID dokter:"<<info(data).id<<endl;
            cout<<"Nama dokter:"<<info(data).nama<<endl;
        }else{
            cout<<"jadwal dokter tidak ada"<<endl;
        }
   }else{
        cout<<"data pasien tidak di temukan"<<endl;
   }
}
void biaya(ListPAS &PA,string nama,string mid,string hasil){
     adrPAS ps=findps(PA,nama,mid);
     if(ps!=NULL){
        info(ps).hasil=hasil;
        adr_dokter data=jadwalD(ps);
        if(data->info.spesialisasi=="umum"||data->info.spesialisasi=="Umum"){
            info(ps).bDK=100000;
        }else{
            info(ps).bDK=200000;
        }
        cout<<"harga obat Rp.";cin>>info(ps).bOB;
        info(ps).btotal=info(ps).bDK+info(ps).bOB;
        if(info(ps).jenis=="BPJS"||info(ps).jenis=="bpjs"){
            if(info(ps).btotal>=500000){
                info(ps).btotal=info(ps).btotal-500000;
            }else{
                info(ps).btotal=0;
            }
        }
        cout<<endl<<"data biaya dan penyakit dipasien telah diperbaui"<<endl<<endl;
     }else{
        cout<<"data yang dicari tidak ada"<<endl;
     }
}
void showtanggal(ListDokter &LD,ListPAS &PA,string tanggal){
    adr_dokter data=first(LD);
    adrPAS ps;
    int jum=0;
    while(data!=NULL){
        if(info(data).tanggal==tanggal){
            jum++;
            showPAS(PA);
        }
        data=next(data);
    }
}
void tambahps(ListPAS &PA,ListDokter &LD,adrPAS ps,pas data,string spesialisasi,string tanggal){
    adr_dokter dataD=findDokter(LD,spesialisasi,tanggal);
    if(dataD!=NULL){
        if(info(dataD).kuota>0){
            adrPAS ps=bikinDataPAS(data);
            dataBaruPas(PA,ps);
            jadwalD(ps)=dataD;
            info(dataD).kuota--;
        }else{
            cout<<"mohon masukin ke jadwal lain"<<endl;
        }
    }else{
        cout<<"data yang dimasukan salah"<<endl;
    }

}
void pindah_jadwal(ListDokter &LD,ListPAS &PA,string namaps,string mid,string spesialisasi_awal,string tanggal_awal,string spesialisasi_akhir,string tanggal_akhir){
    adr_dokter data1=findDokter(LD,spesialisasi_awal,tanggal_awal);
    adrPAS ps=findps(PA,namaps,mid);
    if(data1!=NULL){
            if(ps!=NULL){
                if(jadwalD(ps)==data1){
                    jadwalD(ps)=NULL;
                    info(data1).kuota++;
                }
                adr_dokter data2=findDokter(LD,spesialisasi_akhir,tanggal_akhir);
                jadwalD(ps)=data2;
                info(data2).kuota--;
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
    return h;
}
//dokter
void creatListDokter(ListDokter &LD){
	(LD).first = NULL;
}
adr_dokter createElementDokter(dokter data){
	adr_dokter a = new element_dokter;
	(a)->next = NULL;
	(a)->info = data;
	return a;
}

void insertFirstDokter(ListDokter &LD,adr_dokter data){
	if((LD).first != NULL){
		(data)->next = (LD).first;
		(LD).first = data;
	}else{
		(LD).first = data;
	}
}

void showDokter(ListDokter LD){
	adr_dokter q = (LD).first;
	if(q!=NULL){
		cout << "=== Data Dokter ===" << endl;
		while(q != NULL){
			dokter d = (q)->info;
			cout << "ID : " <<  d.id << endl;
			cout << "Nama : " <<  d.nama << endl;
			cout << "Spesialisasi : " <<  d.spesialisasi << endl;
			cout << "Tanggal (dd-mm-yyyy) : " <<  d.tanggal << endl;
			cout << "Jam Praktek (Start) : " <<  d.jam_praktek_start  << endl;
			cout << "Jam Praktek (End) : " <<  d.jam_praktek_end  << endl;
			cout << "Kuota Pasien : " <<  d.kuota  << endl << endl;
			q = (q)->next;
		}
		cout << endl;
	}else {
		cout << "Data Dokter Kosong :( " << endl;
	}
}


bool checkDokter(ListDokter LD,string spesialisasi,string tanggal){
	adr_dokter q = (LD).first;
	bool ans=false;
	if(q!=NULL){
		while(q != NULL){
			dokter d = (q)->info;
			if (d.tanggal == tanggal && d.spesialisasi == spesialisasi) {
				ans=true;
			}
			q = (q)->next;
		}
	}
	return ans;
}

void deleteDokter(ListDokter &LD, string nama,string tanggal){
	adr_dokter q = (LD).first;
	if(q!=NULL){
		bool flag = false;
		adr_dokter qq = q;
		while(q != NULL){
			dokter d = (q)->info;
			if (d.tanggal == tanggal && d.nama == nama) {
				flag = true;
				break;
			}
			qq=q;
			q = (q)->next;
		}

		if (flag) {
			if(q == (LD).first){
				adr_dokter p = (LD).first;
				(LD).first = (p)->next;
				(p)->next = NULL;
			}else if ((q)->next == NULL) {
				(qq)->next = NULL;
			}else{
				(qq)->next = (q)->next;
				(q)->next = NULL;
			}
			cout << "Dokter berhasil di hapus" << endl;
		}else {
			cout << "Dokter bernama " << nama << " tidak bekerja pada tanggal " << tanggal << endl;
		}

	}
}
adr_dokter findDokter(ListDokter LD,string spesialisasi,string tanggal){
	adr_dokter q = (LD).first;
	adr_dokter ans;
	if(q!=NULL){

		while(q != NULL){
			dokter d = (q)->info;
			if (d.tanggal == tanggal && d.spesialisasi == spesialisasi) {
				ans=q;
			}
			q = (q)->next;
		}
	}
	return ans;
}

