// tokenize a string without using strtok()
// Sadik Rahman   Id: 201-15-3152
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[80];
    int i = 0, length, j = 0;
    scanf("%[^\n]%*c", str);
    length = strlen(str);
    char word[80];

    for (i = 0; i < length; i++)
    {
        if (str[i] != ' ')
        {
            word[j] = str[i];
            j++;
            if (str[i + 1] == ' ' || str[i + 1] == '\0')
            {
                word[j] = '\0';
                printf("%s\n", word);
                // clear the string
                char word[80] = {'\0'};
                j = 0;
            }
        }
    }
    return (0);
}