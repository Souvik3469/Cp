/*
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    int m1, m2, m3, m4, m5, m6, m7;

    printf("Enter the 4 elements of first matrix: ");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the 4 elements of second matrix: ");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    printf("\nThe first matrix is\n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
            printf("%d\t", a[i][j]);
    }

    printf("\nThe second matrix is\n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
            printf("%d\t", b[i][j]);
    }

    m1 = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
    m2 = (a[1][0] + a[1][1]) * b[0][0];
    m3 = a[0][0] * (b[0][1] - b[1][1]);
    m4 = a[1][1] * (b[1][0] - b[0][0]);
    m5 = (a[0][0] + a[0][1]) * b[1][1];
    m6 = (a[1][0] - a[0][0]) * (b[0][0] + b[0][1]);
    m7 = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);

    c[0][0] = m1 + m4 - m5 + m7;
    c[0][1] = m3 + m5;
    c[1][0] = m2 + m4;
    c[1][1] = m1 - m2 + m3 + m6;

    printf("\nAfter multiplication using Strassen's algorithm \n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
            printf("%d\t", c[i][j]);
    }

    return 0;
}*/

#include <stdio.h>

void strassen(int *A, int *B, int *C)
{
    // Base case: if the matrices are 1x1, just do a regular multiplication
    // if ( == 1)
    // {
    //     C[0][0] = A[0][0] * B[0][0];
    //     return;
    // }

    // Divide matrices A and B into four submatrices each
    int A11[2][2], A12[2][2], A21[2][2], A22[2][2];
    int B11[2][2], B12[2][2], B21[2][2], B22[2][2];
    int C11[2][2], C12[2][2], C21[2][2], C22[2][2];
    int P1[2][2], P2[2][2], P3[2][2], P4[2][2], P5[2][2], P6[2][2], P7[2][2];
    int i, j;

    // Divide matrices A and B into four submatrices each
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + 2];
            A21[i][j] = A[i + 2][j];
            A22[i][j] = A[i + 2][j + 2];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + 2];
            B21[i][j] = B[i + 2][j];
            B22[i][j] = B[i + 2][j + 2];
        }
    }

    // Compute the seven products of the submatrices recursively
    strassen(A11, B11, P1);
    strassen(A12, B21, P2);
    strassen(A11, B12, P3);
    strassen(A12, B22, P4);
    strassen(A21, B11, P5);
    strassen(A22, B21, P6);
    strassen(A21, B12, P7);
    strassen(A22, B22, C11);

    // Compute the values of the submatrices of C
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C11[i][j] = P1[i][j] + P2[i][j];
            C12[i][j] = P3[i][j] + P4[i][j];
            C21[i][j] = P5[i][j] + P6[i][j];
            C22[i][j] = P7[i][j] + C11[i][j] - P3[i][j] - P6[i][j];
        }
    }

    // Combine the submatrices of C back into a single matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C[i][j] = C11[i][j];
            C[i][j + 2] = C12[i][j];
            C[i + 2][j] = C21[i][j];
            C[i + 2][j + 2] = C22[i][j];
        }
    }
}

int main()
{
    int A[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int B[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int C[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

    strassen(A, B, C);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
