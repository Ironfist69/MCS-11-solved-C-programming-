#include <stdio.h>
#include <string.h>

struct student {
    char name [100];
    int rollnumber;
    char grade;
    int marks[4];
};

int main () {
    int n,roll,i,index=-1;
    printf("Enter number of students: \n");
    scanf("%d", &n);
    struct student student[n];
    for(i=0;i<n;i++) {

        printf("Enter the details of student \n");
        printf("Enter roll number of %d student: \n",i+1);
        scanf("%d", &student[i].rollnumber);
        printf("Enter name of %d student: \n", i+1);
        scanf("%s", student[i].name);
        printf("Enter marks of Math for student %d: \n", i+1);
        scanf("%d", &student[i].marks[0]);
        printf("Enter marks of Physics for student %d:\n", i+1);
        scanf("%d", &student[i].marks[1]);
        printf("Enter marks of Chemistry for student %d: \n", i+1);
        scanf("%d", &student[i].marks[2]);
        printf("Enter marks of Biology for student %d: \n", i+1);
        scanf("%d", &student[i].marks[3]);

        int avg = (student[i].marks[0]+student[i].marks[1]+student[i].marks[2]+student[i].marks[3])/4;
        if (avg >= 90) {
            student[i].grade = 'A';
        } else if (avg >= 80) {
            student[i].grade = 'B';
        } else if (avg >= 70) {
            student[i].grade = 'C';
        } else if (avg >= 60) {
            student[i].grade = 'D';
        } else {
            student[i].grade = 'F';
        }
    }

    printf ("Enter the student roll number to check his/her marks: ");
    scanf ("%d", &roll);
    for (i=0;i<n;i++){
        if(student[i].rollnumber == roll) {
                index = i;
                break;
        }
    }
    if(index != -1) {
        printf ("Student Name: %s Roll number: %d\n",student[index].name,student[index].rollnumber);
        printf ("Math: %d\n",student[index].marks[0]);
        printf ("Physics: %d\n",student[index].marks[1]);
        printf ("Chemistry: %d\n",student[index].marks[2]);
        printf ("Biology: %d\n",student[index].marks[3]);
        printf ("Overall Grade: %c\n",student[index].grade);
    } else {
        printf("Record not found \n");
    }

    system("pause");
    return 0;
}
       
