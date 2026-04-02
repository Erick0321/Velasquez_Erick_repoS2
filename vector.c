#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
int n;
{
    do {
       printf ("Indique el tamaño del vector: ");
    scanf ("%d", &n); 
    }
    if (n==0){
        printf ("El tamaño no puede ser 0. Intente nuevamente. \n");
    }
} while (n==0);
int A[n];
srand (time(NULL));
for (int i=0; i<n;i++){
    A[i]=rand()%100+1;
}
for (int i=0; i<n;i++){
    printf("%d ", A[i]);
}
return 0
}
