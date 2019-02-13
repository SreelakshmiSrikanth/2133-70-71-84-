#include <stdio.h>
int main()
{

    int n, reversedInteger = 0, remainder, OriginalInteger;


    printf("Enter an integer: ");
    scanf("%d", &n);


    OriginalInteger = n;// reversed integer is stored in variable 

    while( n!=0 )
    {
        remainder = n%10;
        reversedinteger = reversedinteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal

    if (OriginalInteger == reversedInteger)
        printf("%d is a palindrome.", OriginalInteger);
    else
        printf("%d is not a palindrome.", OriginalInteger);

    
    return 0;
}
