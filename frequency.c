#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp1,*fp2;
	int i,count=0,n=0,flag=0;
	char ch1,ch2;
	char letter[26];
	fp1=fopen("data.txt","r");
		fp2=fopen("data.txt","r");
	if(fp1==NULL || fp2==NULL)
	{
		printf("File doesn't exist \n ");
	}
	else
	{   
		while(!feof(fp1))
		{  
			ch1=fgetc(fp1);
			      count=0;
			    while(!feof(fp2))
			   {
				ch2=fgetc(fp2);
				if(ch1==ch2)
				count++;
		    	}
			   fseek(fp2,0,SEEK_SET);
			    if(count>0 && count !=18)
			    {  
			        for(i=0;i<n;i++)
			        if(ch1==letter[i])
			        {
			          flag=1;
			          break;
			        }
			        
			        if(flag==1)
			        {
			        	flag=0;
					}
			        else
			        {
			          printf("%c frequency %d \n",ch1,count);
			          letter[n]=ch1;
			          n++;
			      }
		       }
		}
	}
}
