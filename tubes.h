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
    int tgl,ID,kp,jamstr,jamend;
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

void createLP(ListPAS &PA);
adrPAS bikinDataPAS(infotypePAS PS);
void dataBaruPas(ListPAS &PA,adrPAS S);
void showPAS(ListPAS PA);
void deletePS(ListPAS &PA,string mid,string namaPS);



#endif // TUBES_H_INCLUDED
