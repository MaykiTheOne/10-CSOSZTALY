#include <iostream>

using namespace std;

int main()
{
    int kezdo,vegso,i,c,a,b,d,palindrom,prim;
    palindrom = 0;
    prim = 0;
    cout << "a kezdo ertek ="<<endl;
    cin >> kezdo;
    cout << "az vegso ertek="<<endl;
    cin >> vegso;
    for(i=kezdo; i<=vegso; i++)
    {
        prim=1;
        c=0;
        a=i;
        while(a>0)
        {
            b=a%10;
            a=a/10;
            c=c*10+b;
        }
        if(c==i)
        {
            palindrom = 1;
        }
        for(d=2; d<=i/2; d++)
        {
            if(i%d==0)
            {
                prim=0;
            }
        }
        if((prim==1)&&(palindrom==1))
        {
            cout << i <<endl;
        }
        palindrom=0;

    }

    return 0;
}
