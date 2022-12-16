#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>
#define next(P) (P)->next
#define prev(P) (P)->prev
#define info(P) (P)->info
#define jadwalD(Q) ((Q).jadwalD)
#define first(L) ((L).first)
#define last(L) ((L).last)

using namespace std;

struct dok{
    int tgl,ID,kp,jam;
    string nama,sp;
};
struct pas{
    string namaPS,mID,jenis,hasil;
    int bDK,bOB;
};
typedef struct elmDOK *adrDK;
typedef struct elmPAS *adrPAS;
typedef dok infotypeDOK;
typedef pas infotypePAS;
struct elmDK{
    infotypeDOK info;
    nextDOK adrDK;
};
struct elmPAS{
    infotypePAS info;
    adrPAS next;
    adrPAS prev;
    adrPAS jadwalD;
};
struct ListDOK
{
    adrDK first;
};
struct ListPAS
{
    adrPAS first;
    adrPAS last;
};

void createLD(ListDOK &D);
void createLP(ListPAS &PA);
adrPAS bikinDataPAS(infotypePAS PS)
adrDK bikinDataDoK(infotypeDOK DK);
void dataBaruPas(ListPAS &PA,adrPAS S);
adrDK caritgl(ListDOK &D,int tgl);
adrPAS carips(ListPAS &PA,string ID,string namaPS);
void datapsbarutgl(ListDOK &D,ListPAS &PA,int tgl,int KP);
adrDK findDOK(ListDOK &D,string nama,int tanggal);
void hapusPS(ListPAS &PS,adrPAS &S,string ID,string namaPS)
void insertDataDK(ListDOK &D,adrDK K);
void ShowallDOK(ListDOK &D);
void deleteDok(ListDOK &D,adrDK &K,int tgl,string nama);


#endif // TUBES_H_INCLUDED
