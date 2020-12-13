//To check whether the 2 given circles intersect or not.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int diff_of_rad,x1,y1,x2,y2,r1,r2;
	float centre_distance;
	
	scanf("%d %d %d %d %d %d", &x1 , &y1 , &x2, &y2 , &r1 , &r2);
	diff_of_rad = abs(r1 - r2);
	centre_distance = sqrt(((x1 - x2)*(x1 - x2))+((y1 - y2)*(y1 - y2))); 

	if(r1>=0 && r2>=0)           
	{
		if(centre_distance <= r1 + r2 && centre_distance >= diff_of_rad)
			printf("YES\n");

		else if(centre_distance> r1 + r2 || centre_distance < diff_of_rad)
			printf("NO\n");
	}

	else if(r1<0 || r2<0)
		printf("Invalid input\n");	
	
	return 0;
}
	

		
	
