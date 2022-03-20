#include <iostream>
#include <stdlib.h> //stdlib.h berguna untuk menjalan system
using namespace std;

int main(){
    char pilihan, selanjutnya; //menggunakan type data integer dan character
    int a, b, i;

    menu: //menu berfungsi untuk memunculkan opsi menu dalam pemilihan
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout << "Kelipatan dan Deret Ganjil dan Genap"<<endl<<endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;

    cout << "=========="<<endl;
    cout << "1. Kelipatan Deret Ganjil"<<endl;
    cout << "2. Kelipatan Deret Genap"<<endl;
    cout << "=========="<<endl;
    cout << "Masukkin angka pilihan anda : ";
    cin >> pilihan;
    system("clear"); //system("clear") berfungsi untuk memfokuskan sebuah program yang telah terpilih

    switch (pilihan){ //menggunakan percabangan switch case
        case '1':
        cout << "Input rentang nilai A = ";
        cin >> a;
        cout << "Input rentang nilai B = ";
        cin >> b;
        
        cout << "Deret Ganjil = ";
        for(i=a; i<=b; i++){ //menggunakan perulangan for
            if (i%1 ==  0){
                cout << i << " ";
            }
        }
        cout << "\n\nKelipatan Ganjil = ";
        for(i=a; i<=b; i++){ //menggunakan perulangan for
            if (i%1 ==  0){
                cout << (i*i) << " ";
    }
    }
    cout << "Ingin menutup program? (Ya/Tidak) : ";
    cin>>selanjutnya;
    if (selanjutnya == 'Y' || selanjutnya == 'y'){
        system("clear");
        goto menu;
    } else if (selanjutnya == 'T' || 't'){ //menggunakan percabangan if else if, dan else if berfungsi untuk melanjutkan atau memberhentikan suatu program
        system("clear");
        goto end;
    }
    break; //break berfungsi sebagai memberi jeda

    case '2':
        cout << "Input rentang nilai A = ";
        cin >> a;
        cout << "Input rentang nilai B = ";
        cin >> b;
        
        cout << "Deret Genap = ";
        for(i=a; i<=b; i++){ //menggunakan perulangan for
            if (i%2 ==  0){
                cout << i << " ";
            }
        }
        cout << "\n\nKelipatan Genap = ";
        for(i=a; i<=b; i++){ //menggunakan perulangan for
            if (i%2 ==  0){ 
                cout << (i*i) << " ";
    }
    }
    cout << "Ingin menutup program? (Ya/Tidak) : ";
    cin>>selanjutnya;
    if (selanjutnya == 'Y' || selanjutnya == 'y'){
        system("clear");
        goto menu;
    } else if (selanjutnya == 'T' || 't'){ //menggunakan percabangan if else if, dan else if berfungsi untuk melanjutkan atau memberhentikan suatu program
        system("clear");
        goto end;
    }
    break;

    default:
    cout << "Nomor yang anda pilih tidak terdaftar dalam menu, silahkan masukkin angka yang tersedia !"<<endl<<endl;
    system("PAUSE");
    system("clear");
    goto menu;
    }
    end:
    cout << "*******************"<<endl;
    cout << "Selamat berjuang :)"<<endl;
    cout << "*******************"<<endl;
}