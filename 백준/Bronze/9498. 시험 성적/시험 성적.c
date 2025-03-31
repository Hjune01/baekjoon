#include <stdio.h>
int main(void)
{
    int s;
    char grade[] = "FFFFFFDCBAA";
    scanf("%d", &s);
    
    printf("%c", grade[s/10]);
   
    return 0;
}