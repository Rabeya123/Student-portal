#include<stdio.h>
#include<stdlib.h>

main()
{
	int i;
	for (i = 5; i < 60; i++) {//greater than zero and less than 60
		if (i % 5 == 0)//equal too
		{
			printf("\n%i", i);
		}
	}
		system("pause");
}
