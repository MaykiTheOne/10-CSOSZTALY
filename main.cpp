#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int v[100000];
    int n,i,j,aux;
    n=10000;
    for(i=0 ; i<n ; i++){
     //cout << "v[" << i << "]=";
     //cin >> v[i];}
     v[i]=rand()%1000;
    for(i=0 ; i < n ; i++){
        //cout << v[i] << " ";
    }
    cout << endl;
    for (i=0; i< n-1; i++)
    {
        for (j=i+1; j< n; j++)
        {


            if ( v[i]> v[j])
            {
                aux= v[j];
                v[j]= v[i];
                v[i]=aux;

            }

        }

    }
    for(i=0 ; i<n ; i++){
        cout << v[i] << " ";
    }

    return 0;
}}
