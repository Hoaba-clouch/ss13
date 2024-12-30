#include <stdio.h>
#define MAX 100
void taoMaTran(int rows, int cols, int mat[MAX][MAX]) {
    printf("Nhap cac gia tri cho ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void inMaTran(int rows, int cols, int mat[MAX][MAX]) {
    printf("Ma tran la:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int mat[MAX][MAX];
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);
    if (rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) {
        printf("Kich thuoc ma tran khong hop le! Vui long nhap lai.\n");
        return 1;
    }
    taoMaTran(rows, cols, mat);
    inMaTran(rows, cols, mat);

    return 0;
}
