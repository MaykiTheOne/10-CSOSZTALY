#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,i,f;
    bool pa=false;
    cout << "az intervallum kezdo pontja:";
    cin >> a;
    cout << "az intervallum vegso pontja:";
    cin >> b;
    for(i=a; i<=b; i++)
    {
        bool pr=true;
        d=i;
        c=0;
        while(d>0)
        {
            e=d%10;
            d=d/10;
            c=c*10+e;
        }
        if(c==i)
        {
            pa = true;
        }
        for(f=2; f<=i/2; f++)
        {
            if(i%f==0)
            {
                pr=false;
            }
        }
        if((pr==true)&&(pa==true))
        {
            cout << i <<endl;
        }
        pa=false;

    }

    return 0;
}



