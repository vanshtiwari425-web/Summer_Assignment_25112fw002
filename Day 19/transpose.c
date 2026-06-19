#include<stdio.h>
int main(){
    int n,m;
    printf("enter the row and columns : ");
    scanf("%d %d",&n,&m);
    int a[n][m],i,j;
    printf("enter the %d elements of matrix: \n",n*m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("****MATRIX****\n");
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("****TRANSPOSE OF MATRIX****\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d  ",a[j][i]);
        }
        printf("\n"); 
    }
    return 0;
}