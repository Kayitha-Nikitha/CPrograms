/* C program to return multiple values from function using pointers */
#include <stdio.h>

//function declaration
void func(unsigned int *, int *, char *);

int main(void)
{
    unsigned int a;
    int b;
    char c;
    func(&a, &b, &c);//function call
    printf("a = %u, b = %d, c = %c", a, b, c);
    return 0;
}

/* function defination
    - To return multiple values*/
void func(unsigned int *a, int *b, char *c)
{
    *a = 25;
    *b = -20;
    *c = 'C';
}
