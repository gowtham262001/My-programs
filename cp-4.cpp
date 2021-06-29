#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char ip[10]={"194.168.0.62","192.168.0.60","192.168.0.68","132.147.3.3"};
char et[10]={"00_A8_00_40_8E_FS","00_16_17_31_8e_22","00_16_17_31_8E_F7","00_16_17_31_8E_08"};
char ipaddr[20],etaddr[20];
int i,op;
int x=0,y=0;

while(1)
{
printf("\n 1.ARP   2.RARP   3.EXIT");
printf("\n Enter your choice : ");
scanf("%d",&op);
switch(op)
{
case 1:
printf("\n Enter IP Address : ");
scanf("%s",ipaddr);
for(i=0;i<=20;i++)
{
if(strcmp(ipaddr,ip[i])==0)
{
printf("Ethernet address : %s\n\n",et[i]);
x=1;
} }
if(x==0)
printf("Invalid IP Address !!!\n\n");
x=0;
break;
case 2:
printf("Enter Ethernet Address : ");
scanf("%s",etaddr);
for(i=0;i<=20;i++)
{
if(strcmp(etaddr,et[i])==0)
{
printf("IP address : %s\n\n",ip[i]);
y=1;
} }
if(y==0)
printf("Invalid Ethernet Address!!!\n\n");
y=0;
break;
case 3:
exit(0);
} } }
