#include "tubes.h"

void createLD(ListDOK &D){
    first(D)=NULL;
}
adrDK bikinDataDoK(infotypeDOK DK){
    adrDK K=new elmDK;
    info(K)=DK;
    next(K)=NULL;
    return K;
}
void insertDataDK(ListDOK &D,adrDK K){
    if(first(D)=NULL){
        first(D)=K;
    }else{
        next(K)=first(D)
        first(D)=K;
    }
}
void ShowallDOK(ListDOK D){
    adrDK K;
    K = first(D);
    while (K != NULL)
    {
        cout <<"tanggal : " <<  info(K).tgl << "jam : "<<info(K).jam<<" ID dokter: " << info(K).ID <<" nama dokter : "<< info(K).nama << " penyakit di periksa : "<< info(K).sp  <<" kouta : "
        <<info(K).kd<<endl
        K = next(K);
        cout << endl;
    }
}
adrDK findDOK(ListDOK &D,string nama,int tanggal){
    adrDK K=first(D);
    while(K!=NULL&&info(K).nama!=nama&&info(K).tanggal!=tanggal){
        K=next(K);
    }
    if(DK.nama==DK){
        return K
    }else{
        return NULL;
    }
}
void deleteDok(ListDOK &D,adrDK &K,int tgl,string nama){
    K=findDOK(ListDOK &D,string nama,int tanggal
    if(K==first(L)){

    }
}
