#include<stdio.h>
#include<stdlib.h>

int main() {
    int row, col, i, j, a[10][10], count = 0;

    printf("Enter Number of Rows\n");
    scanf("%d", &row);

    printf("Enter Number of Columns\n");
    scanf("%d", &col);

    printf("Enter elements of Matrix\n");
    for (i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements of Matrix are\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
/*Code for sparse matrix*/
for(i=0; i<row; i++){
    for(j=0; j<col; j++){
        if(a[i][j] == 0)
        count++;
    }
}
if(count > ((row*col)/2))
printf("This is sparse matric");
else
printf("This is not a sparse matrix");
}