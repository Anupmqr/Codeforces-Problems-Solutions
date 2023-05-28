#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int x, y, a, b;

    while (n--)
    {
        cin >> x >> y >> a >> b;
        int diff = y - x;

        if (diff % (a + b) == 0)
        {
            int seconds = diff / (a + b);
            cout << seconds << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
