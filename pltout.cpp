#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long t=100*1024*1024;
	char *p=(char*)malloc(t);
	memset(p,65,t-1);
	*(p+t-1)=0;
	unsigned int i=12345;
	while(1)
	{
		puts(p);
		i=(i*7+13)%t;
		p[i]=65+(i%26);
	}
}
