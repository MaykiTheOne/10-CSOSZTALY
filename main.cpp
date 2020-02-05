#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int v[10000];
    int n,i,j,aux;
    srand(time(NULL));
    cout << "n=";
    cin >> n;
    for(i=0 ; i<n ; i++)
    {
        v[i]=rand()%100;
        cout<< v[i] << " ";
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
        cout << v[i] << " "<<endl;
    }
    cout << "masodik legnagyobb elem"<<v[i-2]<<endl;
    cout << "a harmadik legkisebb elem "<<v[2];



    return 0;
}
