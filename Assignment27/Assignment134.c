#include <stdio.h>
#include <stdbool.h>

// Function to check if a string contains vowels
bool CheckVowel(char ptr[]) {   
    while (*ptr != '\0') {
        // Check for both uppercase and lowercase vowels
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' ||
            *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            return true;  // Return true if a vowel is found
        }
        ptr++;  // Move to the next character
    }
    return false;  // Return false if no vowels are found
}

int main() {
    char Arr[100];
    bool bRet = false;

    // Prompt user to enter a string
    printf("Enter the String:\n");
    scanf("%[^'\n']s", Arr);

    // Check for vowels in the string
    bRet = CheckVowel(Arr);
    
    // Display the result
    if (bRet == true) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
