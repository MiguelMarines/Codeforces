#include <stdio.h>
#define n 100000

int main()
{
    int i, j, k;
    char string[n];
    
    scanf("%i %i %i", &i, &j, &k);
    scanf("%s", string);
    
    if (string[j - 1] == string[k - 1])
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    
    return 0;
}
