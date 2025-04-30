#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int *array;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    array= (int *) calloc(5,sizeof(int));
    printf("Enter the array elements:");
    for (int i=0;i<n;i++){
        scanf("%d",array+i);
    }
    for (int i=0;i<n;i++){
        printf("%d",*(array+i));
    }   
    free(array);
return 0;
}