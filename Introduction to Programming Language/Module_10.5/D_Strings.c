#include <stdio.h>
int main()
{

    char A[11],B[11];
    
    scanf("%s", &A);
    scanf("%s", &B);

    int lenA = strlen(A);
    int lenB = strlen(B);

    printf("%d %d\n", lenA, lenB);
    printf("%s%s\n", A, B);

    char tmp = A[0];
    A[0] = B[0];
    B[0] = tmp;
    printf("%s %s\n", A, B);

    return 0;
}