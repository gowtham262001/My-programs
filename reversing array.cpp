#include<stdio.h>
#include<string.h>
void reverseWord(char str[]){
    int i=0,count=0,k,l;
  count=strlen(str);
k=0;
l=count-1;
for(k=0;k<count/2;k++)
{
    int temp=str[k];
    str[k]=str[l];
    str[l]=temp;
    l--;
}
	printf("%s",str);
}
int main()
{
	char str[10]="gowtham";
	reverseWord(str);
	return 0;
	
}
