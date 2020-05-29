/*
P      M 
 R    A  
  O  R   
   G    
  O  R   
 R    A  
P      M 
*/
#include<stdio.h>
int main()
{
  char x[]="PROGRAM";
  int i,j;
  for(i=0;i<7;i++)
  {
    for(j=0;j<7;j++)
    {
       if (i==j)
        printf("%c ",x[j]);
       else if (i+j==6)
        printf("%c ",x[j]);
       else
        printf(" ");
    }
    printf("\n");
  }
}

/*
#include<stdio.h>
int sqrt(float n)
{
	float x=n,y=1;
	while(x-y>0.00001)
	{	
  		x=(x+y)/2;
  		y=n/x;
	}
return x;
}
int main(void)
{
	int i,j,n,b,index,k,c;
	char s1[50],s2[50],a[50][50];
	printf("Enter the string: ");
	scanf("%s",s1);
	for(n=0;s1[n];n++);
	if(n=sqrt(n)*sqrt(n))
 	b=sqrt(n)+1;
	else
 	b=sqrt(n);
	for(index=0,i=0;i<b;i++)
  		for(j=0;j<b && s1[index];j++)
   		{ 
      	a[i][j]=s1[index++];
   		}
		for(i=0;i<b;i++)
		{
  			for(j=0;j<b;j++)
   			printf("%c ",a[i][j]);
  			printf("\n");
		}
	printf("find words:");
	scanf("%s",s2);
	for(i=0;i<b;i++)
  		for(j=0;j<b;j++)
    	if(a[i][j]==s2[0])
    	{  
			for(k=j,c=0;a[i][k]==s2[c] && a[i][k]!='\0';k++,c++);
        	if(s2[c]=='\0'){
        	printf("\nStart index:%d ,%d  End index:%d, %d\n",i,j,i,k-1);}
    	}
		for(i=0;i<b;i++)
  			for(j=0;j<b;j++)
    			if(a[j][i]==s2[0])
    			{ 
      				for(k=j,c=0;a[k][i]==s2[c] && a[k][i]!='\0';k++,c++);
       				if(s2[c]=='\0')
					   {
         			printf("\nStart index :%d ,%d   End index:%d,%d\n",j,i,k-1,i);
					 }
    			}		          
			return 0;
	}*/

