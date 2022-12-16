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
    while(K!=NULL&&info(K).nama!=nama&&info(K).tgl!=tanggal){
        K=next(K);
    }
    if(info(K).nama==nama,info(K).tgl==tanggal){
        return K;
    }else{
        return NULL;
    }
}
void deleteDok(ListDOK &D,adrDK &K,string nama,int tgl){
    K=findDOK(D,nama,tgl)
    if(K==first(D)){
        K=first(D);
		first(D)=next(K);
		next(K)= NULL;
    }else if(next(K)==NUL){
        adrDK Q
        P ← next(Q)
        next(Q) ← NULL
        next(P) ← NULL
    }else{
        adrDK prec=first(D);
        while(next(prec)!=K){
            prec=next(prec);
        }
        K=next(prec);
        next(prec)=next(K);
        next(K)=NULL;
    }
}
