#include<stdio.h>
int main(){
    int n,m;
    printf("enter order of matrix(n*m): ");
    scanf("%d %d",&n,&m);
    int a[n][n],b[n][n],i,j;
    printf("enter the elements of matrix A: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the elements of matrix B: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n****MATRIX A****\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n****MATRIX B****\n");
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n****SUBTRACT OF TWO MATRICES****\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d  ",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
