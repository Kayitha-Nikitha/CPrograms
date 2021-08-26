// C program for Decimal to binary conversion using bitwise operator
#include<stdio.h>

// Function to convert
int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for(int i = 31; i >= 0; i--){
        int k = n >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
}

// driver code
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decToBinary(n);
}
