#include <stdio.h>

int main()
{

    char X[] = "abccd";

    char Y[] = "dccba";

    int n = 5;
    int L[6][6];

    int i, j;

    for (i = 0; i <= n; i++)
    {

        for (j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
            }
            else if (X[i - 1] == Y[j - 1])
            {
                L[i][j] = L[i - 1][j - 1] + 1;
            }
            else
            {
                L[i][j] = (L[i - 1][j] > L[i][j - 1]) ? L[i - 1][j] : L[i][j - 1];
            }
        }
    }
    printf("%d", L[n][n]);
    return 0;
}