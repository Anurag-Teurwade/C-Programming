
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);

    // Lets counts number times oldWord occur in th string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i = i + oldWordLength - 1;
        }
    }

    // Making new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}
int main()
{
    FILE *ptr1 = NULL;
    FILE *ptr2 = NULL;
    ptr1 = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str[200];
    fgets(str, 200, ptr1);
    printf("\n\nThe given bill template was :%s\n", str);

    // call replaceWord function and generate newStr
    char *newStr;
    newStr = replaceWord(str, "{{item}}", "Trimmer");
    newStr = replaceWord(newStr, "{{outlet}}", "Swaminee");
    newStr = replaceWord(newStr, "{{name}}", "Anurag");
    printf("The actual bill generated is : %s\n", newStr);
    printf("The generated bill has been written to the file genBill.txt\n\n\n");

    fprintf(ptr2, "%s", newStr);
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}