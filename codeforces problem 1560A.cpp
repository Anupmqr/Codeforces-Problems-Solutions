#include<iostream>
using namespace std;
 
 int main()
 {
    int t,k;
    cin >> t;

    while(t--)
    {
        cin >> k ;

        int i = 0;
            while(k>0)
            {
                i++;
                if((i%3 != 0) && (i%10 != 3))
                {
                    k--;
                }

            }
            cout << i << endl;
    }
 }
