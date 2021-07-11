#include <stdio.h>      /* printf */
#include <math.h>       /* hypot */
#include <conio.h>

int main() {
	double sikuX, sikuY, hasil;
	sikuX = 80;
	sikuY = 90;
	hasil = hypot(sikuX, sikuY);
	printf("%f, %f and %f form a right-angled triangle.\n", sikuX, sikuY, hasil);
	_getch();
	return 0;
}