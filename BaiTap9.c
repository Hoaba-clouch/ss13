#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 100

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void input_matrix(int matrix[MAX][MAX], int *rows, int *cols) {
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", cols);

    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *cols; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void print_corners(int matrix[MAX][MAX], int rows, int cols) {
    printf("Cac phan tu o goc:\n");
    printf("%d %d %d %d\n", matrix[0][0], matrix[0][cols-1], matrix[rows-1][0], matrix[rows-1][cols-1]);
}

void print_border(int matrix[MAX][MAX], int rows, int cols) {
    printf("Cac phan tu tren duong bien:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows-1 || j == 0 || j == cols-1) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
}

void print_diagonals(int matrix[MAX][MAX], int rows, int cols) {
    printf("Cac phan tu tren duong cheo chinh:\n");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\nCac phan tu tren duong cheo phu:\n");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", matrix[i][cols-i-1]);
    }
    printf("\n");
}

void print_primes(int matrix[MAX][MAX], int rows, int cols) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (is_prime(matrix[i][j])) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int matrix[MAX][MAX];
    int rows, cols;
    int choice;

    while (1) {
        printf("\nMENU:\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                input_matrix(matrix, &rows, &cols);
                break;
            case 2:
                print_matrix(matrix, rows, cols);
                break;
            case 3:
                print_corners(matrix, rows, cols);
                break;
            case 4:
                print_border(matrix, rows, cols);
                break;
            case 5:
                print_diagonals(matrix, rows, cols);
                break;
            case 6:
                print_primes(matrix, rows, cols);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le, vui long thu lai.\n");
        }
    }

    return 0;
}
