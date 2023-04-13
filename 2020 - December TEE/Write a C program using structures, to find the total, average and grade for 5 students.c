#include<stdio.h>
struct student {
    int marks[5];
    int total,grade,average;

};
int main () {
    int i;
    struct student students[5];
    for(i=0;i<5;i++) {
        printf("Enter marks for %d student: ", i+1);
        scanf("%d", &students[i].marks);
    }
}