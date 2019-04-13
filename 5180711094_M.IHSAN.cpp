#include <iostream>
using namespace::std;
struct yuk {
    float nilai;
    char grade;
    double uts,uas,tgs,abs,ttl;
}; yuk kuy;
double input (string text){
    cout<<" Input nilai "<<text<<" : ";cin>>kuy.nilai;
    return kuy.nilai;
    cout<<" ========================";}
double cabang (float ttl){
    if (kuy.ttl>=81){ kuy.grade='A';}
    else if (kuy.ttl>=61){ kuy.grade='B';}
    else if (kuy.ttl>=41){ kuy.grade='C';}
    else if (kuy.ttl>=21){ kuy.grade='D';}
    else if (kuy.ttl<=20){ kuy.grade='E';}
    cout<<"\n Grade nilai   : "<<kuy.grade;
    cout<<"\n ========================";
}
main(){
    kuy.uts=input("UTS  ");
    kuy.uas=input("UAS  ");
    kuy.tgs=input("Tugas");
    kuy.abs=input("Absen");
    kuy.ttl=(kuy.uts*0.2)+(kuy.uas*0.3)+(kuy.tgs*0.35)+(kuy.abs*0.15);
    cout<<" ========================";
    cout<<"\n Total nilai   : "<<kuy.ttl;
    cabang(kuy.ttl);
}
