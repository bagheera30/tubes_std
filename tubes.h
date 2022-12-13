#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>

using namespace std;

struct dok{
    int ID,kd,jam;
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
    prev adrDK;
};
struct elmPAS{
    infotypePAS infoPAS;
    nextPAS adrPAS;
};


#endif // TUBES_H_INCLUDED
