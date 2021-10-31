#include <stdio.h>

int main()
{
    char email[1000];
    scanf("%s", email);
    int i = 0;
    int check = 0;
    int count = 0;
    int case1 = -1, case2 = -1;
    while (email[i] != '\0')
    {
        if ((email[i] >= 'A' && email[i] <= 'Z') || (email[i] >= 'a' && email[i] <= 'z') || (email[i] >= '0' && email[i] <= '9'))
            check = 1;
        else if ((email[i] == '.' || email[i] == '-' || email[i] == '_' || email[i] == '@') && (i != 0 && email[i + 1] != '\0'))
            check = 1;
        else
        {
            check = -1;
            break;
        }
        if (email[i] == '@')
        {
            count++;
            case1 = i;
        }
        if (count > 1)
        {
            check = -1;
            break;
        }
        if (email[i] == '.')
        {
            case2 = i;
        }
        i++;
    }
    if (case2 - case1 < 2)
        check = -1;
    if (check == 1)
        printf("Valid Email address\n");
    else
        printf("Invalid Email address\n");

    return 0;
}