 #include<stdio.h>
int main()
{
int x=100,y=200;
printf("THE TWO NUMBERS BEFORE SWAPPING x=%d y=%d",x,y); /* this will print the numbers before swapping */
x=x+y; /* 100+200 */
y=x-y; /* 300-200 */
x=x-y; /* 300-100 */
printf("\n THE TWO NUMBERS AFTER SWAPPING x=%d y=%d",x,y); /* this will print the numbers after swapping */
return 0;
}
