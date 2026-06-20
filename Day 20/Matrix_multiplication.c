#include<stdio.h>
int main(){
    int n,m,p;
    printf("enter the number of rows of first matrix:  ");
    scanf("%d",&n);
     printf("enter the number of columns of first matrix:  ");
    scanf("%d",&m);
     printf("enter the number of columns of second matrix:  ");
    scanf("%d",&p);
    int a[n][m],b[m][p],c[n][p],i,j,k;
    printf("enter the elements of matrix A: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix B: \n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            c[i][j]=0;
            for(k=0;k<m;k++){
                c[i][j]= c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("\n****MATRIX A****\n");
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
     printf("\n****MATRIX B****\n");
      for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf(" %d ",b[i][j]);
        }
           printf("\n");
    }
    printf("\n****MULTIPLICATION OF MATRIX****\n");
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf(" %d ",c[i][j]);
        }
         printf("\n");
    }
    return 0;
}