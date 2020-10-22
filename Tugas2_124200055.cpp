#include <iostream>

using namespace std;

 main()
{
    int a, b, c, d, anak=15000, remaja=20000, dewasa=30000, total;
    float gol1, gol2, gol3,gol4;
    cout << "PROGRAM STATEMENT PENGENDALIAN\n NIM : 124200055 \n Nama : Duana puspitaningrum \n\n" ;
    cout <<"---------------------------------------------------------------------------------\n";
    cout << "umur ayah = "; cin >>a;
    if (a>20){
    gol1= dewasa;
    }
    else if (a>12 && a<20){
    gol1= remaja;
    }
    else if (a < 12){
    gol1= anak;
    }
    cout << "umur ibu  = "; cin >>b;
    if (b>20){
    gol2=dewasa;
    }
    else if (b>12 && b<20){
    gol2= remaja;
    }
    else if (b < 12){
    gol2=anak;
    }
    cout << "umur anak1= "; cin >>c;
    if (c>20){
        gol3=dewasa;
    }
    else if (c>12 && c<20){
    gol3 = remaja;
    }
    else if (c < 12){
    gol3= anak;
    }
    cout << "umur anak2= "; cin >>d;
    if (d>20){
    gol4=dewasa;
    }
    else if (d>12 && d<20){
    gol4= remaja;
    }
     else if (d <= 12){
    gol4=anak;
    }
    cout << endl;
    total =(gol1*30)+(gol2*30)+(gol3*30)+(gol4*30);
    cout << "Tagihan selama satu bulan adalah "<<total<<endl;
    return 0;
}
