#include<stdio.h>
#include<conio.h>
int main()
{
	int yer;
	
	printf("Enter a year : ");
	scanf("%d", &yer);
	
	if( ((yer % 4) && 1) == 0 )
		printf("\n\n%d is a leap year", yer);
		
	if( ((yer % 4) || 0) == 1 ) 
		printf("\n\n%d is not a leap year", yer);
	
	return 0;
}