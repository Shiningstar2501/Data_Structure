To search an element in the array using Iterative Binary Search.
#include<stdio.h> #include<conio.h> void main() { int a[20],n,mid,beg,i,end,item,loc=-1; clrscr(); printf("Enter the number of elements to be entered\n"); scanf("%d",&n); printf("Enter the elements in ascending order"); for(i=0;i<n;i++) { scanf("%d",&a[i]); } printf("Enter the element to be searched"); scanf("%d",&item); beg=0; end=n-1; while(beg<=end)
{ mid=(beg+end)/2; if(item==a[mid]) { loc=mid; break; } else if(a[mid]<item) beg=mid+1; else end=mid-1; } if(loc==-1) printf("Element Not Present"); else printf("Element found at =%d",loc); getch(); }