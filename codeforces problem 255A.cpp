#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i,a[25],ch=0,bi=0,ba=0,j,k,l;
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(j=0; j<n; j=j+3)
    {
       ch = ch + a[j];
    }

    for(k=1; k<n; k=k+3)
    {
       bi = bi + a[k];
    }
    
    for(l=2; l<n; l= l+3)
    {
       ba = ba + a[l];
    }



if((ch>bi) && (ch>ba))
cout << "chest\n";

else if(bi>ba)
cout << "biceps\n";

else
cout << "back\n";

    return 0;
}
