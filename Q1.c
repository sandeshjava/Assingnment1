#include <stdio.h>

int main()
{
    char number[1000];
    printf("Enter the value\n");
    scanf("%s", number);
    int i = 0;
    int case_1 = 0, case_2 = 0;
    while (number[i] != '\0')
    {
        if (number[i] == '.')
        {
            case_1++;
            if (number[i + 1] != '\0')
                case_2 = 1;
        }
        i++;
    }
    if (case_1 == 1 && case_2 == 1)
        printf("Valid floating point number\n");
    else
        printf("Invalid floating point number\n");

    return 0;
} 