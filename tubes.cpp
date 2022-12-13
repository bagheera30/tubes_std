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

}
void ShowallDOK(ListDOK D);
void deleteDok(ListDOK &D,adrDK &K);
