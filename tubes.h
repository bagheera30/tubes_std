#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>
#define next(P) (P)->next
#define prev(P) (P)->prev
#define info(P) (P)->info
#define jadwalD(Q) ((Q).jadwalD)
#define first(L) ((L).first

using namespace std;

struct dok{
    int tgl,ID,kd,jam;
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
    infotypeDOK infoDOK;
    nextDOK adrDK;
};
struct elmPAS{
    infotypePAS infoPAS;
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


#endif // TUBES_H_INCLUDED
