// Dajanek Davis
// May 4, 2021
#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char fromRod,char toRod, char auxRod)
{
    if(n == 1)
    {
        cout <<"Move disk 1 from rod " << fromRod <<" to rod " << toRod<<endl;
        return;
    }
    towerOfHanoi(n - 1, fromRod, auxRod, toRod);
    cout << "Move disk " << n << " from rod " << fromRod <<" to rod " << toRod << endl;
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);
}
 
int main()
{
    int n = 4; // How many disk there are.

    towerOfHanoi(n, 'A', 'C', 'B'); 

    return 0;
}