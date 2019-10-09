#include <iostream>

using namespace std;

int main()
{
    int a, max=-INT_MAX, min=INT_MAX, i;
    for(i=0; i<5 ; i++){
        cout << "a " << i << ". szam: ";
        cin >> a ;
        if(a>max){
            max = a;
        }
        if(a<min){
            min = a;
        }
    }
    a = max;
    int b = min;
    while (a!=b){
        if(a>b){
            a-=b;
        }
        if(b>a){
            b-=a;
        }


    }
    cout << "maximum= " << max;
        cout << "  minimum= " << min;

}
