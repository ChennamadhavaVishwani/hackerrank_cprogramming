#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100
int main() 
{
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];
    
    scanf(" %c", &ch);
    printf("%c\n", ch);
    scanf("%s", s);
    printf("%s\n", s);
    scanf(" %[^\n]" , sen);
    printf("%s", sen);
    
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
