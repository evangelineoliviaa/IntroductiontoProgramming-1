#include <stdio.h>
long long sum;
char portal[20][20] = {0};
int W;
int L;
void foo(int row, int col, long long int num, int ctk)
{
    long long final[20][20];
    final[row][col] = num;
    for (int i = row; i < W; i++)
    {
        for (int j = col; j < L; j++)
        {
            if ((i == row) && (j == col))
            {
                if (portal[i][j] == '1')
                {
                    if (ctk == 1)
                    {
                        foo(i - 2, j - 2, final[i][j], ctk + 1);
                        return;
                    }
                }
                continue;
            }
            else if (i == row)
            {
                final[i][j] = final[i][j - 1];
            }
            else if (j == col)
            {
                final[i][j] = final[i - 1][j];
            }
            else
            {
                final[i][j] = final[i - 1][j] + final[i][j - 1] + final[i - 1][j - 1];
            }
            if (portal[i][j] == '1')
            {
                if (ctk == 0)
                {
                    foo(i - 2, j - 2, final[i][j], ctk + 1);
                    final[i][j] = 0;
                }
                else if (ctk == 1)
                {
                    if (!(((row + 2) == i) && ((col + 2) == j)))
                    {
                        foo(i - 2, j - 2, final[i][j], ctk + 1);
                        final[i][j] = 0;
                    }
                }
            }
        }
    }
    sum += final[W - 1][L - 1];
    return;
}

int main()
{
    scanf("%d %d", &W, &L);
    for (int i = 0; i < W; i++)
    {
        for (int j = 0; j < L; j++)
        {
            scanf(" %c", &portal[i][j]);
        }
    }
    foo(0, 0, 1, 0);
    printf("%lld\n", sum);
    return 0;
}
