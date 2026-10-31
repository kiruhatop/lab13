/* 
Жигунов Кирилл Андреевич
П.И. 1-1
Возврат нескольких результатов
*/

#include <stdio.h>

int divide(int a, int b, int *q, int *r) {
    if (b==0) return 0;
    *q = a/b;
    *r = a%b;
    return 1;
}

int min_max(const int a[], int n, int *lo, int *hi) {
    if (n <= 0) return 0;
    else {
        for (int i; i<n; i++) {
            *hi = a[i];
            if (*hi < a[i]) *hi = a[i];
            if (*lo > a[i]) {
                *lo = a[i];
            }
        }
        return 1;
    }
}

int main(void) {
    int a, b, q, r;
    int n;
    int lo = 99;
    int hi = 99;
    scanf("%d", &n);
    int arr[] = {4, -2, 7};
    if (scanf("%d %d", &a, &b) != 2) return 1;
    if (a < -1000 || a > 1000 || b < -1000 || b > 1000) return 1;
    if(divide(a, b, &q, &r))
        printf("q=%d r=%d\n", q, r);
    else
        puts("Zero divisor");
    if(min_max(arr, n, &lo, &hi))
        printf("lo=%d hi=%d\n", lo, hi);
    else
        puts("Declined");

    return 0;

}

