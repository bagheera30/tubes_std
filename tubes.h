#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>

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
    nextPAS adrPAS;
    prev adrPAS;
    Class adrPAS;
};
struct ListDOK
{
    adrDK firstDK;
};
struct ListPAS
{
    adrPAS firstPAS;
    adrPAS last;
};

void createLD(ListDOK &D);
adrDK bikinDataDoK(infotypeDOK DK);
void insertDataDK(ListDOK &D,adrDK K);
void ShowallDOK(ListDOK D);
void deleteDok(ListDOK &D,adrDK &K);


#endif // TUBES_H_INCLUDED
