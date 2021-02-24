#include <stdio.h>

#define SUM(x, y) (x + y)

#define SQUARE(x) (x * x)
#define CUBE(x) (x * x * x)

#define IS_UPPER(x) (x >= 'A' && x <= 'Z')
#define IS_LOWER(x) (x >= 'a' && x <= 'z')

int main() {
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    printf("__DATE__ = %s\n", __DATE__);
    printf("__TIME__ = %s\n", __TIME__);
    printf("__STDC__ = %d\n\n", __STDC__);

    char ch = '\0';

    // input from user
    printf("Enter any character: ");
    ch = getchar();

    if (IS_UPPER(ch)) {
        printf("'%c' is uppercase\n\n", ch); }
    else if (IS_LOWER(ch)) {
        printf("'%c' is lowercase\n\n", ch); }
    else {
        printf("Entered character is not alphabet\n\n"); }

    int num1 = 0;
    int num2 = 0;

    printf("Enter any two numbers:\n");
    scanf("%d%d", &num1, &num2);

    printf("Sum(%d, %d) = %d\n\n", num1, num2, SUM(num1, num2));

    int num3 = 0;
    
    // input from user
    printf("Enter any number to find square and cube: ");
    scanf("%d", &num3);

    printf("SQUARE(%d) = %d\n", num3, SQUARE(num3));
    printf("CUBE(%d) = %d\n\n", num3, CUBE(num3));

    return 0;
}