#include <iostream>
#include "tubes.h"
using namespace std;

int main()
{
    ListDOK D;
    infotypeDOK infoDOK;
    adrDK K;
    int n;
    cin>>n;

    createLD(D);
    while(n>0){
        cout<<("nama dokter : ");
        cin >> infoDOK.nama;
        cout << "ID dokter   : ";
        cin >> infoDOK.ID;
        cout<<"tanggal";
        cin>>infoDOKtgl;
        K=bikinDataDoK(infoDOK);
        insertDataDK(D,K);
    }

        ShowallDOK(D);
        cin>>nama>>tgl;
        deleteDok(D,K,tgl,nama)
    return 0;
}
