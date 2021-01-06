#include <stdio.h>

int main() {
	int n, i=0,cut = 0,score=0;
	int sum = 0, fail = 0;
	printf("Number of class: ");
	scanf("%d", &n);
	printf("Cutline: ");
	scanf("%d", &cut);


	while(i<n){
		printf("Input score #%d: ",i);
		scanf("%d", &score);
		sum += score;
		if (score < cut)
			fail++;
	
		i++;
	}
	printf("Average score: %.2lf\n", (double)sum / n);
	printf("Number of failures: %d\n", fail);

	return 0;
}