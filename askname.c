#include <stdio.h>
#include <string.h>

void askname(char *first, char *last)
{
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */
    printf("Now enter your full last name: ");
    gets(last); /* buffer overflow? what&#39;s that? */
}