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

struct dokter{
	string tanggal,nama,spesialisasi,jam_praktek_start,jam_praktek_end;
	int kuota,id;
};
struct pas{
    string namaPS,mID,jenis,hasil;
    int bDK,bOB;
};
typedef struct element_dokter *adr_dokter;
typedef struct elmPAS *adrPAS;
typedef dok infotypeDOK;
typedef pas infotypePAS;
struct element_dokter {
	dokter info;
	adr_dokter next;
};
struct elmPAS{
    infotypePAS info;
    adrPAS next;
    adrPAS prev;
    adrPAS jadwalD;
};
struct ListDokter{
	adr_dokter first;
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
