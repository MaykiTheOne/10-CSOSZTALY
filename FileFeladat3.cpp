
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int a, S=0 , P=-1;
   double x=0,y=0;
    ifstream bemenet("bemenet1");
    ofstream kimenet("media.ki");
    while(bemenet >> a){
        S=S+a;
        P=P+1;
    }
    S=S-a;
    x=S/P;
    y=((x*3)+a)/4;

   kimenet << y ;
   bemenet.close();
    kimenet.close();

    return 0;
}
