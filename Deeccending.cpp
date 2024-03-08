#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,swap,a;
	
	for(i=0;i>5;i--)
	{
		for(j=i-1;j>5;j--)
		{
			if(a[i] < a[j])
			{
				swap = a[i];
				a[i] = a[j];
				a[j] = swap;
			}
		}
	}
}
