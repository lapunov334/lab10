#include <stdio.h>
#include <stdlib.h>
main (){
int i,j;
float b[3][4];
for(i=0; i<3; i++)
    for(j=0; j<4; j++)
	{
		scanf("%f", &b[i][j]);
    }
	printf("Matrica : \n");
	for(i=0; i<3; i++)
	{
    	for(j=0; j<4; j++)
        {
            printf("%.2f ",b[i][j]);
        }
    	printf("\n");
	}
	float daun;
	daun=b[0][0]; 
	for(i=0; i<3; i++)
	{
    	for(j=0; j<4; j++)
        {
            if(i==0)
            {
            	b[i][j]= b[i][j]/daun;
			}
        }
	}
	float daun1,tm;
	daun1=b[1][0];
	for(i=0; i<3; i++)
	{
    	for(j=0; j<4; j++)
        {
        	   tm=b[0][j];
        	   if(i==1)
        	   {
        			b[i][j]=tm*(-daun1)+b[i][j];
			   }
        }
	}
	float daun2;
	daun2=b[2][0];
	for(i=0; i<3; i++)
	{
    	for(j=0; j<4; j++)
        {
        	   tm=b[0][j];
        	   if(i==2)
        	   {
        			b[i][j]=tm*(-daun2)+b[i][j];
			   }
        }
	}
	float daun3;
	daun3=b[1][1];
	for(i=0; i<3; i++)
	{
    	for(j=0; j<4; j++)
        {
        	   if(i==1)
        	   {
        			b[i][j]/=daun3;
			   }
        }
	}
	float daun4;
	daun4=b[2][1];
	for(i=0; i<3; i++)
	{
    	for(j=0; j<4; j++)
        {
        	   tm=b[1][j];
        	   if(i==2)
        	   {
        			b[i][j]=tm*(-daun4)+b[i][j];
			   }
        }
	}
	float daun5;
	daun5=b[2][2];
	for(i=0; i<3; i++)
	{
    	for(j=0; j<4; j++)
        {
        	   if(i==2)
        	   {
        			b[i][j]/=daun5;
			   }
        }
	}

	printf("Matrica : \n");
	for(i=0; i<3; i++)
	{
    	for(j=0; j<4; j++)
        {
            printf("%.2f ",b[i][j]);
        }
    	printf("\n");
	}
	
	printf("\n");
	float x1,x2,x3;
	x3=b[2][3];
	x2=b[1][2]*x3-b[1][3];
	x1=b[0][3]+b[0][1]*x2-b[0][2]*x3;
	printf("Resualt x1: %f\n",x1);
	printf("Resualt x2: %f\n",x2*(-1));
	printf("Resualt x3: %f\n",x3);
	
		
 return 0;
}
