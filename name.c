#include <stdio.h>
#include <string.h>
#define MORE 3

int main (void)
{
	unsigned int str1,str2,a;
	char f_name[18],s_name[18];
	printf ("Please enter your full name:\n");
	a=scanf ("%s %s",f_name,s_name);
	str1=strlen(f_name)+MORE;
	str2=strlen(s_name)+MORE;
	printf ("%*s %*s\n",str1,f_name,str2,s_name);
	printf ("%*lu %*lu\n",str1,strlen(f_name),str2,strlen(s_name));
	printf ("%d\n",a);
	return 0;
}
