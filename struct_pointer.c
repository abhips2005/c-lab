#include <stdio.h>
typedef struct 
    {
        int rollno;
        char name;
    }student;
int main(){
    student s1;
    student *ptr;
    ptr = &s1;
    printf("Enter the roll no:");
    scanf("%d",&ptr->rollno);
    printf("%d",ptr->rollno);
    
    return 0;
}