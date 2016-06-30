#include<stdio.h>
int main()
{
char s[50],cg;
int i,c=0;
clrscr();
printf("Enter any string:");
for(i=0;c!='\n';i++)
{
c=getchar();
s[i]=c;
}
s[i]='\0';
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
c++;
while(s[i]==' ')
i++;
}
}
printf("\n\nTotal words are %d",c+1);
return 0;
}
