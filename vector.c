#include <stdio.h>

int main ()
{
    int A[3];

    A[0]=25;
    A[1]=36;
    A[2]=52;

    for (int i=0; i < 3; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
}