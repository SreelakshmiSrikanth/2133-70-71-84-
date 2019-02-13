#include <stdio.h>
int main()
{
    int n, reversedinteger = 0, remainder, originalinteger;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalinteger = n;// reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedinteger = reversedinteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalinteger == reversedinteger)
        printf("%d is a palindrome.", originalinteger);
    else
        printf("%d is not a palindrome.", originalinteger);
    
    return 0;
}
