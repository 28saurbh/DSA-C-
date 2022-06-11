#include <iostream>
using namespace std;

int fabo(int x)
{
    int a = 0;
    int b = 1;
    int i = 1, ans = 0;

    if (x == 1)
        return 0;

    if (x == 2)
        return 1;

    while (x >= i)
    {
        ans = a + b;
        a = b;
        b = ans;
        i++;
    }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << fabo(n);
}