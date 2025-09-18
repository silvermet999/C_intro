#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
main() {
	int fahr;

	for (fahr=LOWER; fahr <= UPPER; fahr = fahr+STEP)
		printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	/* int lower, upper, step;
	float fahr, celsius;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}*/
}
