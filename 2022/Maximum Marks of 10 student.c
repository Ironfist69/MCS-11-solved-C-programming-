#include <stdio.h>

int main () {
    
    int student[10],max_marks;
    for (int i=0; i<10; i++) {
        printf("Enter student number %d number: ", i+1);
        scanf("%d", &student[i]);
    }
    max_marks = student [0];
    
    for (int i=1; i<10; i++) {
        if (max_marks < student [i])
        {
            max_marks = student[i];
            
        }
    }
    printf("The maximum mark given is %d to the student \n", max_marks);
        
    system("pause");
    return 0;
}