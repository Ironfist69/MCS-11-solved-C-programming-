#include<stdio.h>
int main () {
    int arr[10],i,j,temp;
    printf("Enter array of numbers: ");
    for(i=0;i<9;i++) {
        scanf("%d", &arr[i]);
    }
    
    //bubble shot algorithm
    for(i=0;i<9;i++) {
        for(j=0;j<9-i;j++) {
            if(arr[j] > arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Sorted array in ascending order is: \n");
    for(i=0;i<9;i++) {
        printf("%d \n", arr[i]);
    }
    system("pause");
    return 0;
}