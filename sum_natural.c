/***  Filename: sum_natural.c****  Computes sum of N natural numbers using 3 different methods.*/
#include <stdio.h>

// let declare some ints
int sumof_nat_num(int);
int nGlbl = 0;
int sumGbl = 0;

//make funstion for sum 
int sumOfNtlNum_noProto(int n) {
    int sum = (n * (n + 1)) / 2;
    return sum;
}
// makeing a void function for sum
void sumOfNtlNums_usesGlbalvar(void) {
    sumGbl = (nGlbl * (nGlbl + 1)) / 2;
}

//the main function
int main(void) {
    int n = 0;
    int sum = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    sum = sumOfNtlNum_noProto(n);
    printf("Sum of natural numbers (no prototype) from 1 to %d: %d\n", n, sum);
    sum = sumof_nat_num(n);
    printf("Sum of natural numbers (with prototype) from 1 to %d: %d\n", n, sum);
    nGlbl = n;
    sumOfNtlNums_usesGlbalvar();
    printf("Sum of natural numbers (using global vars) from 1 to %d: %d\n", nGlbl, sumGbl);
    return 0;
}

//function for sum of nat num
int sumof_nat_num(int n) {
    int sum = (n * (n + 1)) / 2;
    return sum;
}
