#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* demo;
	char display;
	demo =fopen("demo_file.txt","w+");
	fprintf(demo,"%S\t" "%s\t" "%s\t","ID","NAME","Phone number" );
	fclose(demo);
	demo = fopen("demo_file.txt","r");
	while (1)
	{
		//reading file
		display=(fgetc(demo));
		//end of file indicator
		if (feof(demo))
		break;
		//display every character
		printf("%c", display);
	}
	fclose (demo);
	return 0;	
}
