
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100], x = 0;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        int c = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            if (a[i] == 1)
                c++;
        }
        if (c >= 2)
            x++;
    }
    cout << x << endl;
    return 0;
}
