#include <stdio.h>

int main () {
    int marks;
    printf("Enter student's marks: ");
    scanf ("%d", &marks);

    if (marks<40) {
        printf("Grade of the student is 'E' \n");
    } else if (marks>40 && marks<50) {
        printf("Grade of the student is 'D' \n");
    } else if (marks>50 && marks<60) {
        printf("Grade of the student is 'C' \n");
    } else if (marks>60 && marks<75) {
        printf("Grade of the student is 'B' \n");
    } else if (marks>75) {
        printf("Grade of the student is 'A' \n");
    }
    
    system ("pause");
    return 0;
}