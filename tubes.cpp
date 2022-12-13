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
adrDK findprec(ListDOK D,infotypeDOK DK){
    K=D.firstDK
    while(K!=NULL&&K->infoDOK!=DK){
        K=K->K;
    }
    if(K->infoDOK=DK){
        return K
    }else{
        return NULL;
    }
}
void deleteDok(ListDOK &D,adrDK &K){
    if(D.firstDK!=NULL){
        x=D.firstDK;
        if(x->nextDK=NULL){
            K=D.firstDK;
            D.firstDK=K->nextDK;
            K->nextDK=NULL;
        }else{
            while(x->nextDK->nextDK!=NULL){
                x=x->nextDK;
            }
            K=x->nextDK;
            x->nextDK=NULL;
            K->nextDK=NULL;
        }
    }else{

    }
}
