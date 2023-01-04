#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>
#define next(P) (P)->next
#define prev(P) (P)->prev
#define info(P) (P)->info
#define jadwalD(Q) Q->jadwalD
#define first(L) ((L).first)
#define last(L) ((L).last)

using namespace std;

struct dokter{
	string tanggal,nama,spesialisasi,jam_praktek_start,jam_praktek_end;
	int kuota,id;
};
struct pas{
    string namaPS,mID,jenis,hasil;
    int bDK,bOB,btotal;
};
typedef struct element_dokter *adr_dokter;
typedef struct elmPAS *adrPAS;
struct element_dokter {
	dokter info;
	adr_dokter next;
};
struct elmPAS{
    pas info;
    adrPAS next;
    adrPAS prev;
    adr_dokter jadwalD;
};
struct ListDokter{
	adr_dokter first;
};

struct ListPAS
{
    adrPAS first;
    adrPAS last;
};
//pasien
void createLP(ListPAS &PA);
adrPAS bikinDataPAS(pas PS);
void dataBaruPas(ListPAS &PA,adrPAS S);
void showPAS(ListPAS PA);
void showpd(ListPAS PA,string nama,string mid);
void deletePS(ListPAS &PA,string mid,string namaPS);
void biaya(ListPAS &PA,string nama,string mid,string hasil);
void showtanggal(ListDokter &LD,ListPAS &PA,string tanggal);
void tambahps(ListPAS &PA,ListDokter &LD,adrPAS ps,pas data,string speasialisasi,string tanggal);
void pindah_jadwal(ListDokter &LD,ListPAS &PA,string namaps,string mid,string spesialisasi_awal,string tanggal_awal,string spesialisasi_akhir,string tanggal_akhir);
adrPAS findps(ListPAS &PA,string namaps,string mid);
//dokter
void creatListDokter(ListDokter &LD);
adr_dokter createElementDokter(dokter data);
void insertFirstDokter(ListDokter &LD,adr_dokter data);
void showDokter(ListDokter LD);
void deleteDokter(ListDokter &LD, string nama,string tanggal);
bool checkDokter(ListDokter LD,string spesialisasi,string tanggal);
adr_dokter findDokter(ListDokter LD,string spesialisasi,string tanggal);



#endif // TUBES_H_INCLUDED
