#include "stdio.h"
#include "string.h"

int main()
{
    char W[100], S[100];
    int p, q;
    printf("Nhap W = ");
    gets(W);
    printf("Nhap S = ");
    gets(S);
    printf("P = ");
    scanf("%d", &p);
    printf("Q = ");
    scanf("%d", &q);

    int n = strlen(W);
    int m = strlen(S);
    if (p > n || q > n)
    {
        printf("p hoac q lon hon do dai cua W");
    }
    else
    {
        for (int i=n; i>=p;i--)
        {
            W[i + m] = W[i];
        }
        for (int i = 0; i < m; i++)
        {
            W[p + i] = S[i];
        }
        n += m;
        for (int i = n; i >= q; i--)
        {
            W[i + m] = W[i];
        }
        for (int i = 0; i < m; i++)
        {
            W[q + i] = S[i];
        }
        n += m;
        printf("Ket qua: %s", W);
    }

    return 0;
}
