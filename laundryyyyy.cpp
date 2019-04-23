#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
void menu();
main()
{   log:
    string user;
int pass;
    cout<<"\t\t==========================="<<endl;
    cout<<"\t\tHARAP LOGIN TERLEBIH DAHULU"<<endl;
    cout<<"\t\t==========================="<<endl;
    cout<<"\t\tNama     : ";cin>>user;
    cout<<"\t\tPass     : ";cin>>pass;
    cout<<"\t\t===========================";
    cout<<endl<<endl;
    if (user=="lala" && pass==12345)
    {
        menu();
    }
    else
     {

    cout<<"\t\tUSERNAME ATAU PASSWORD SALAH"<<endl<<endl;
    goto log;
     }
}

void menu()
{
ulang:
string nama,alamat,nohp;
long int berat,totalberat,biaya,jmlbyr,ukem,kodkat,pp;

    cout<<"========================================================"<<endl;
    cout<<"\t\t\tTWO L LAUNDRY"<<endl;
    cout<<"\nJl.Rindu NO.5 Ds.Rindu Kec.Kasih Sayang Kab.Mencintaimu"<<endl;
    cout<<"========================================================"<<endl;
    cout<<"\tInput Data Pesanan"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Nama Pelanggan           : ";cin>>nama;
    cout<<"Alamat                   : ";cin>>alamat;
    cout<<"No Handphone             : ";cin>>nohp;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"\tKategori Cucian"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"1. Reguler = 1hari"<<endl;
    cout<<"2. Express = 12jam"<<endl;
    cout<<"3. Kilat   = 6jam"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"\tPewangi Parfume"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"1. Sweet Paradise"<<endl;
    cout<<"2. Lavender"<<endl;
    cout<<"3. Aqua Fresh"<<endl;
    cout<<"4. Vanila"<<endl;
    cout<<"5. Casablanca Lily"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Berat Cucian (kg)        : ";cin>>berat;
    cout<<"Input No Kategori (1-3)  : ";cin>>kodkat;
    cout<<"Pewangi Parfume (1-5)    : ";cin>>pp;

    cout<<"--------------------------------------------------------"<<endl;
    cout<<"\tResi Pesanan Laundry"<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Nama Pelanggan           : "<<nama<<endl;
    cout<<"Alamat                   : "<<alamat<<endl;
    cout<<"No Handphone             : "<<nohp<<endl<<endl;
switch(kodkat)
    {
    case 1 :
            cout<<"Biaya                    : Rp. 6000"<<endl;
            break;
    case 2 :
            cout<<"Biaya                    : Rp. 12000"<<endl;
            break;
    case 3 :
            cout<<"Biaya                    : Rp. 18000"<<endl;
            break;
    default :
        cout<<"masukkan pilihan dengan benar"<<endl<<endl;
        goto ulang;

    }

switch(kodkat)
    {
    case 1 :
            totalberat=berat*6000;
            cout<<"Total Biaya              : Rp. "<<totalberat<<endl;
            break;
    case 2 :
            totalberat=berat*12000;
            cout<<"Total Biaya              : Rp. "<<totalberat<<endl;
            break;
    case 3 :
            totalberat=berat*18000;
            cout<<"Total Biaya              : Rp. "<<totalberat<<endl;
            break;
    }
switch(pp)
    {
    case 1 :
            cout<<"Pewangi Parfume          : Sweet Paradise"<<endl;
            break;
    case 2 :
            cout<<"Pewangi Parfume          : Lavender"<<endl;
            break;
    case 3 :
            cout<<"Pewangi Parfume          : Aqua Fresh"<<endl;
            break;
    case 4 :
            cout<<"Pewangi Parfume          : Vanila"<<endl;
            break;
    case 5 :
            cout<<"Pewangi Parfume          : Casablanca Lily"<<endl;
            break;
        default :
        cout<<"\n\nmasukkan pilihan dengan benar"<<endl<<endl;
        goto ulang;
    }
    cout<<"Total Bayar              : Rp. ";cin>>jmlbyr;
    ukem=jmlbyr-totalberat;
    cout<<"Kembalian                : Rp. "<<ukem<<endl;
    cout<<"======================================================="<<endl<<endl;

    char lagi;
    menulagi:
    cout<<"ingin masuk ke menu lagi (y/t) ?";cin>>lagi;
    if(lagi=='y' || lagi=='Y'){goto ulang;}
    else if(lagi=='t' || lagi=='T'){goto selesai;}
    else{cout<<"Silahkan inputkan y/t\n"<<endl;goto menulagi;}
    selesai :
    cout<<"\n\tTerima Kasih Telah Mencuci di Two L Laundry"<<endl<<endl;
    main();

    getch();
}


