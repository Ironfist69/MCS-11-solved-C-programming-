#include <stdio.h>
int main () {
    int student[20], min_marks,i;
    for (int i = 0; i < 20; i++)
    {
        printf("Enter marks of %d student: ",i+1);
        scanf("%d",&student[i]);
    }
    min_marks = student[0];
    for (int i = 1; i < 20; i++)
    {
        if (student[i] < min_marks)
        {
            min_marks = student[i];
        }
        
    }
    printf("The minimum marks is %d \n", min_marks);

    system("pause");
    return 0;    
}