#include <stdio.h>

int main () {
int list[100];
int search_elements;

    printf ("Enter 20 elements \n");
    for (int i=0; i<20; i++) {          //Enter elements
        scanf ("%d", &list[i]);
    }

    printf ("Enter a element to search for \n");
    scanf("%d", &search_elements);
    int index = -1;                     //initializing from -1
    for (int i=0; i<20; i++) {
        if (list[i] = search_elements)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        printf("The element %d is in %dth position ", search_elements);
    } else {
        printf ("The element %d not found", search_elements);
    }
      system ("pause");
      return 0;
}