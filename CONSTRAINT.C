    #include <stdio.h>
     int main() 
    {
    	int C[1000],i,j,t,l;
    	scanf("%d",&l);
    	for(i=0;i<l;i++)
    	scanf("%d",&C[i]);
    	for(i=0;i<l;i++)
    	{
    		for(j=0;j<l;j++)
    		{
    			if(C[i]>C[j])
    			{
    				t=C[j];
    				C[j]=C[i];
    				C[i]=t;
    			 }
     
    		}
    	}
    	printf("%d\t",C[l%2]);
    return 0;
    }
