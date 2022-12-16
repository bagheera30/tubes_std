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
    string namaDK,mID,jenis,hasil;
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
adrDK bikinDataDoK(infotypeDOK DK);
void insertDataDK(ListDOK &D,adrDK K);
void ShowallDOK(ListDOK D);
void deleteDok(ListDOK &D,adrDK &K);
void deleteDok(ListDOK &D,adrDK &K,int tgl,string nama);


#endif // TUBES_H_INCLUDED
