#include <iostream>

using namespace std;

int main()
{
    int tomb[1000];
    int i , n , S=1;
    cout << "n=";
    cin >> n;
    for(i=0 ; i<n ; i++){
        cout << "tomb[" << i << "]=";
        cin >> tomb[i];
    }
    for(i=0 ; i<n ; i++){
        S=S*tomb[i];
    }
    cout << S;
    return 0;
}
