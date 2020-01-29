 //szukseges konyvtarak deklaralasa
    #include <iostream>

    using namespace std;

    //fofuggveny
    int main()
    {
    //szukseges valtozok deklaralasa
        int i, j, v[100], aux, n, k=0, p=0;
    //kiirja, hogy n=
        cout<<"n=";
    //beolvassa az n erteket
        cin>>n;
    //vegigmegyunk a tombon s egyenkent beolvassuk az ertekeket
        for(i=0; i<n; i++){
            //kiirja, hogy v[i]=
            cout << "v["<<i<<"]=";
            //beolvassa a v[i] erteket
            cin >> v[i];

        }

        //buborekos rendezes algoritmus
        do
        {
            //kezdetben nincs csere
            p=0;
            //elmegyunk a tomb utolso elotti elemeig
            for (i=0; i<n-1-k; i++)
                //ha a tomb i+1 edik eleme nagyobb az i ediknel, csereljuk oket
            {
                if (v[i]>v[i+1])
                {
                    aux=v[i+1];
                    v[i+1]=v[i];
                    v[i]=aux;
                    //volt csere, tehat a p valtozo 1 lesz
                    p=1;
                }
            }
            //a k erteket noveljuk, mert az utolso k helyen a legnagyobb elemek vannak
            k++;
        }
        while(p==1);
    //kiiras
        for (i=0; i<n; i++)
        {
            //kiirja a v[i] t
            cout << v[i] << " ";
        }
        return 0;
    }
