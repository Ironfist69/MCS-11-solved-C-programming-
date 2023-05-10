#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
    char input_string[100];
    int vowel_counts[5] = {0};
    
    printf("Enter a string: ");
    scanf("%99s", input_string); // Read input string, maximum of 99 characters
    
    for (int i = 0; input_string[i] != '\0'; i++) {
        if (is_vowel(input_string[i])) {
            switch (input_string[i]) {
                case 'a':
                case 'A':
                    vowel_counts[0]++;
                    break;
                case 'e':
                case 'E':
                    vowel_counts[1]++;
                    break;
                case 'i':
                case 'I':
                    vowel_counts[2]++;
                    break;
                case 'o':
                case 'O':
                    vowel_counts[3]++;
                    break;
                case 'u':
                case 'U':
                    vowel_counts[4]++;
                    break;
            }
        }
    }
    
    // Display individual vowel counts
    printf("Individual vowel counts:\n");
    printf("a: %d\n", vowel_counts[0]);
    printf("e: %d\n", vowel_counts[1]);
    printf("i: %d\n", vowel_counts[2]);
    printf("o: %d\n", vowel_counts[3]);
    printf("u: %d\n", vowel_counts[4]);
    
    return 0;
}
