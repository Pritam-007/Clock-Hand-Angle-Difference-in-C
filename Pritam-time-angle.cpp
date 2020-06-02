#include <stdio.h>
#include<stdlib.h>
using namespace std;

int findAngle(int hour, int min)
{
	int h = (hour * 360) / 12 + (min * 360) / (12 * 60);
	int m = (min * 360) / (60);
	int angle = abs(h - m);
	if (angle > 180)
		angle = 360 - angle;
		
	return angle;
}

int main()
{
	int hour, min;
	printf("Enter the hour\t");
	scanf("%d",&hour);
	printf("Enter the Minite\t");
	scanf("%d",&min);
	printf("The Angle Difference is : %d",findAngle(hour, min));

	return 0;
}

