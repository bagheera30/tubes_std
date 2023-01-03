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
adrPAS penyakit(ListPAS &PA,string hasil){

}
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
			cout << "Dokter dengan nama " << nama << " tidak tersedia pada tanggal " << tanggal << endl;
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
void tambahps(ListPAS &PA,ListDokter &LD,string spesialisasi,string tanggal){
    data=findDokter(LD,spesialisasi,tanggal);
    if(info(data).kouta!=0){
        dataBaruPas(PA,ps);
        jadwalD(ps)=data;
        info(data).kouta--
    }
}
int pilihmenu(){
    int input;
    cout<<"========== Rumah Sakit  ========="<<endl;
    cout<<"1. tambah pasien"<<endl;
    cout<<"2. tambah dokter"<<endl;
    cout<<"3. tampilkan data pasien "<<endl;
    cout<<"0.keluar "<<endl;
    cout<<"pilih menu:"
    cin>>input;
    return input;

}
