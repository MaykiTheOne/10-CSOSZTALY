#include <iostream>

using namespace std;

int main()
{
    int szamrendszer ,szmjgy , szam ,hatv=1 ,nwszam=0;
    cout << "Az atalakitando szam=";
    cin >> szam;
    while(szam > 0){
        szmjgy=szam % 10 ;
        szam = szam /10;
        nwszam = nwszam+hatv * szmjgy;
        hatv=hatv*2;
    }
    cout << "Az ujszam  : " << nwszam;

    return 0;
}
