To perform following operation on strings using string functions 1. Addition 2. Copying 3. Reverse 4. Length of String.

#include<conio.h> #include<stdio.h> #include<string.h> void main() { char a[20],b[20],c[20]; int l; clrscr(); printf("Enter the First String"); scanf("%s",&a); printf("Enter the Second String"); scanf("%s",&b); strcat(a,b); printf("\nConcatenation of String a and b is:%s",a); l=strlen(a); printf("\nLength of String is %d",l); strcpy(c,a); printf("\nthe Copied String is %s",c); strrev(a);
printf("\nreverse of String is %s",a); getch(); }