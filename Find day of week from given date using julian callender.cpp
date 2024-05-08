#include<stdio.h>
int main()
{
	int year, month,day;
	printf("Enter year(2001 - 2030):");
	scanf("%d", &year);
	
	printf("Enter month 12:");
	scanf("%d", &month);
	
	printf("Enter day 31:");
	scanf("%d", &day);
	
	if (month<3)
	{
		month +=12;
		year -=1;
	}
	int a = (day + (13 * (month + 1)) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	printf("The day of the week on %d-%d-%d is %s.\n", year, month, day, days[a]);
	        return 0;
}
	    
