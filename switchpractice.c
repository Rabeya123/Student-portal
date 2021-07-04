#include<stdio.h>>
#include<stdlib.h>>
//main funtioin
main() {

	//variable declarations
	int choice=0, highNum = 1, lowNum = 2, sum = 3, avg = 4;
	//should average number be double?????


	printf("enter 5 numbers\n");//use these numbers 18, 21, 17, 44, 9.
	scanf_s(" %i %i %i %i" "%i", &choice, &highNum, &lowNum, &sum, &avg);
	
	

	

	switch (choice=0) {



	case '1':
		printf("%i is highNum", highNum);
		break;

	case '3':
		printf("%i is sum", sum);
		break;

	case '2':
		printf("%i is lowNum", lowNum);
		break;

	case '4':
		printf("%i is avg", avg);
		break;

	default:
		printf("invalid number\n");//error messege here

	}
	printf("the smallest number is %i\n", lowNum);
	printf("the largest number is %i\n", highNum);
	printf("the sum of numbers is %i\n", sum);
	printf("the avg number is %.2lf\n", avg);


		system("pause");
}
