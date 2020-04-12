#include<stdio.h>
#include<time.h>

clock_t start, end;
double cpu_time_used;

int main() {
    start = clock();

    int arr[100][100];
    
    int i;
    int j;

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            arr[i][j] = (i*10) + j;
        }
    }
    i = 0;
    j = 0;

    
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            printf("Value of var[%d][%d] = %d\n", i, j, *(*(arr + i) + j));
        }
    }

    end = clock();
    cpu_time_used = ((double) (end -start)) / CLOCKS_PER_SEC;
    printf("Access via Pointer took %f seconds to complete", cpu_time_used);

    return 0;
}