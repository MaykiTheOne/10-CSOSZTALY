#include <iostream>

using namespace std;

int main()
{
    int tomb1[1000];
    int tomb2[1000];
    int i, n, m ,S=0;
    cout << "n=";
    cin >> n;

    for(i=0 ; i<n ; i++)
    {
        cout << "tomb1[" << i << "]=";
        cin >> tomb1[i];
    }
    cout << "m=";
    cin >> m;

    for(i=0 ; i<m ; i++)
    {
        cout << "tomb2[" << i << "]=";
        cin >> tomb2[i];}
    for(i=0 ; i<n ; i++)
    {
    if(tomb1[i]==tomb2[i]){
        S+=tomb2[i];
    }


   // }
   //int d=0;
   //while(S>0){
   //     e=S%10;
   //     S=S/10;
   //     d=d*10 + e;
    //}
    cout << S;

    return 0;
}}
