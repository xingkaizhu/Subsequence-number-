include<stdio.h>
int main()
{ 
char a[1000],b[1000];
int i,j,m, n,k;
n=0;
for(i=0;i<1000;i++) 
{a[i]='\0';b[i]='\0';}
fgets(a,1000,stdin);
fgets(b,1000,stdin);
for(i=0;a[i]!='\n';i++){m=i;
k=0;
for(j=0;b[j]!='\n';j++)
{if(a[m]!=b[j])
{k=1;
break;
}
m++;
}
if(k==0)
n++;
}	
printf("%d",n);	
	return 0;
}
