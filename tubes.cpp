#include "tubes.h"

void createLD(ListDOK &D){
    D.firstDK=NULL;
}
adrDK bikinDataDoK(infotypeDOK DK){
    adrDK K=new elmDK;
    K->infoDOK=DK;
    K->nextDOK=NULL;
    K->prev=NULL;
    return K
}
void insertDataDK(ListDOK &D,adrDK K){
    if(D.firstDK=NULL){
        D.firstDK=K
    }else{
        K->nextDOK=D.firstDK
        D.firstDK=K
    }
}
void ShowallDOK(ListDOK D){
    adrDK K;
    K = D.first;
    while (K != NULL)
    {
        cout <<"tanggal : " <<  K->info.tgl << "jam : "<<K->info.jam<<" ID dokter: " << K->info.ID <<" nama dokter : "<< K->info.nama << " penyakit di periksa : "<< K->info.sp  <<" kouta : "
        <<K->info.kd<<endl
        K = K->next;
        cout << endl;
    }
}
void deleteDok(ListDOK &D,adrDK &K){
    if(D.firstDK!=NULL){
        x=D.firstDK;
        if(x->nextDK)
    }
}
