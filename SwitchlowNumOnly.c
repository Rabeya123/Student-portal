#include<stdio.h>>
#include<stdlib.h>>
//main funtioin
main() {

	//variable declarations
	int choice = 0, highNum = 0, lowNum = 0, sum = 0, avg = 0;
	//should average number be double?????

	printf("enter 5 numbers\n");
	scanf_s("%i %i %i %i %i",&lowNum, &highNum, &sum, &avg, &choice);
	
	//use these numbers 18, 21, 17, 44, 9.
	scanf_s(" %i", &lowNum);

	switch (choice = 0) {
	
	case '1':
		printf("%i is lowNum", lowNum);//third line shows smllest 
		break;							//the smallest entered was 1.
}
	printf("the smallest number is %i\n", lowNum);
	
system("pause");
}
