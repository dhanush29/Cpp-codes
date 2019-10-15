/*INPUT=string str containing lower-case english alphabets and integer l
  OUTPUT=find the number of distinct substrings of length l of the given string str */


#include<stdio.h>
#include<string.h>
int main()
{
	char str[20000],ch1[20000],ch2[20000];//array declarations
	int i,j,k,l,n,check=0,count=0;//variable declarations
	scanf("%s %d",str,&n);//inputs of string and length of substring we want
	l=strlen(str);//length of the string we input
	if(n>l)
	{
		printf("0");
	}
	else
	{
	for(i=0;i<(l-n+1);i++)
	{
		for(j=0;j<n;j++)
		{
			ch1[j]=str[i+j];//inserting the substrings of the length which we want
		}
		
		for(j=0;j<(l-n-i);j++)
		{
			for(k=0;k<n;k++)
			{
				ch2[k]=str[i+j+k+1];
			}
			
			if(strncmp(ch1,ch2,n)==0)//comparing strings ch1 and ch2
			{
				check++;
			
			}
		}
		if(check==0)
		{
			count++;
		}
		check=0;
	}
	printf("%d",count);// count is our answer
	}
return 0;
}
	

