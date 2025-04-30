#include <stdio.h>
#include <stdlib.h>
int main(){
    int *matrix;
    int rows=2,cols=2;
    matrix =(int *)malloc(rows*cols*sizeof(int *));
    printf("Enter the elements :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d\t", (matrix+i * cols+j));
        }
    
    }    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", *(matrix+i * cols+j));
        }
     printf("\n");    
    }
    
    
 return 0;
}