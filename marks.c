#include<stdio.h>
main()
{
	int m1, m2, m3, m4, m5, per;
	
	printf("enter marks in five subjects ");
	scanf("%d %d %d %d %d",&m1, &m2, &m3, &m4, &m5 );
	
	per = ( m1+m2+m3+m4+m5 )*100/500;
	
	if(per>=85)
	    printf("grade A\n");
	else
	{
		if(per>=70)
		    printf("grade B\n");
		else
		{
			if(per>=55)
			    printf("grade C\n");
			else
			{
				if("per>=40")
				     printf("grade D\n");
			   else
			         printf("grade F\n");
			}
		}    
	}
	
	
	return 0;    
}
