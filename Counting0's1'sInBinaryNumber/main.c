#include <stdio.h>
void count(int);//function declaration

int main()
{
    int n;//variable declaration
    printf("Enter a number: ");
    scanf("%d", &n);
    count(n);//function call
    return 0;
}

//function defination
void count(int n)
{
    int count0 = 0, count1 = 0;
    while(n>0){
        //if loop to check for 0's and 1's using Bitwise And
        if(n&&1){
            count1++;
        }
        else{
            count0++;
        }
        n=n>>1;// eliminating last binary digit using right shift
    }
    printf("No.of 0's: %d\nNo.of 1's: %d\n", count0, count1);
    return 0;
}
