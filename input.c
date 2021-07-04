#include <stdio.h>
#include <stdlib.h>



main()
{
	double a = 0.0;                                  //Initialize Variables 
	double b = 0.0;
	double c = 0.0;

		printf("please enter a numbers(decimals):\n");    //Prompt user to input
	scanf_s("%lf %lf %lf", &a , &b , &c);                 //Take input


	printf("the number entered is %lf, %lf, %lf \n", a , b, c);   //Display input
	system("pause");											  //Pause the console					

}

