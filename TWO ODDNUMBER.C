#include<stdio.h> 

int main(){

           int f1=3,f2=29;
           int rem,i;

           printf("   Give the First number for the Range :   \n");

           scanf("%d",&f1);

           printf("   Give the Final number for the Range :   \n");

           scanf("%d",&f2);

           printf("\n The ODD numbers between %d and %d are ",f1,f2); 

           for(i=f1; i<f2;i++)
           {
           	if(i%2==1)
           	printf("\n %d",i);
           }
    return 0; 

    } 

   
