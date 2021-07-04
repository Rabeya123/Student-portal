#include<stdio.h>
#include<stdlib.h>

main() {

	int score, sum = 0;
	printf("Enter a test score(-1 to quit):");
	scanf_s("%i", &score);
	while (score != -1) {
		sum = sum + score;
		printf("Enter a test score(-1 to quit):");
		scanf_s("%i", &score);
		
	}
	printf("\nThe sum of the scores is : %i\n", sum);
	system("pause");

}
