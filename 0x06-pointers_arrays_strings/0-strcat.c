#include <stdio.h>
#include "main.h" // Include the header file

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    
    _strcat(str1, str2);
    
    printf("Concatenated string: %s\n", str1);
    
    return 0;
}
