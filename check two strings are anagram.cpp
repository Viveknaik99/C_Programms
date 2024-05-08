#include<stdio.h>
#include<string.h>
int areAnagrams(const char *str1, const char *str2) // Taking two character strings
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2) 
	{
	return 0;
}
   int freq1[256] ={0};
   int freq2[256] ={0};
   for (int i=0; i<len1; i++)
   {
   	freq1[(int) str1[i]]++;
   }
   for (int i =0; i<len2; i++)
   {
   	freq2[(int) str2[i]]++;
}
   for(int i=0; i< 256;i++)
   {
   	if (freq1[i]!= freq2[i])
   	{
   		return 0;	
}
   }
   return 1;
}
   int main()
{
	const char *str1= "listen";
	const char *str2= "silent";
   if (areAnagrams(str1,str2))
   {
   	printf("%s and %s are anagrams.\n",str1,str2);
   }
   else
   {
   printf("%s and %s are  not anagrams.\n",str1,str2);
   }
   return 0;
}
   
