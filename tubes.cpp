#include "tubes.h"

void createLD(ListDOK &D){
    first(D)=NULL;
}
void createLP(ListPAS &PA){
    first(P)=NULL;
    last(P)=NULL;
}
adrDK bikinDataDoK(infotypeDOK DK){
    adrDK K=new elmDK;
    info(K)=DK;
    next(K)=NULL;
    return K;
}
adrPAS bikinDataPAS(infotypePAS PS){
    adrPAS S=new elmPAS;
    info(S)=PS;
    next(S)=NULL;
    jadwalD(S)=NULL;
    prev(S)=NULL;
    return S;
}
void dataBaruPas(ListPAS &PA,adrPAS S){
    if(first(PA)!=NULL&&last(PA)!=NULL){
        prev(S)=last(PA);
        next(last(PA))=S;
        last(PA)=S;
    }else{
        last(PA)=S;
        firs(PA)=S;
    }
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
adrDK caritgl(ListDOK &D,int tgl){
     adrDK K=first(D);
    while(K!=NULL&&info(K).tgl!= tgl){
        K=next(K)
    }
    if(info(K).tgl==tgl){
        return K
    }else{
        return NULL
    }
}
adrPAS carips(ListPAS &PA,string ID,string namaPS){
    adrPAS S =first(PA);
    while(S!=NULL&&info(S).mid!=ID,info(S).namaPS!=namaPS){
        s=next(S)
    }
    if(info(S).mid!=ID,info(S).namaPS!=namaPS){
        return S
    }else{
        return NULL;
    }
}
void datapsbarutgl(ListDOK &D,ListPAS &PA,int tgl,int KP){
    adrDK K=caritgl(D,tgl);
    if(info(K).KP>=0){
        dataBaruPas(PA,S);
        info(K).kp--
    }else{
        cout<<"masukan ke dokter lain"<<endl;
    }
}

adrDK findDOK(ListDOK &D,string nama,int tanggal){
    adrDK K=first(D);
    while(K!=NULL&&info(K).nama!=nama&&info(K).tgl!=tanggal){
        K=next(K);
    }
    if(info(K).nama==nama&&info(K).tgl==tanggal){
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
void hapusPS(ListPAS &PS,adrPAS &S,string ID,string namaPS){
    S=carips(PA,ID,namaPS);
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
