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
int pilihmenu(){
    int input=0;
    cout<<"========== Rumah Sakit  ========="<<endl;
    cout<<"1. tambah pasien"<<endl;
    cout<<"2. tambah dokter"<<endl;
    cout<<"3. tambah dokter"<<endl;

}
