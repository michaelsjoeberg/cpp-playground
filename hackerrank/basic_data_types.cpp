/* 

Input consists of the following space-separated values: int, 
long, char, float, and double, respectively.

Print each element on a new line in the same order it was 
received as input. Note that the floating point value should 
be correct up to 3 decimal places and the double to 9 decimal 
places.

*/

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	// 3 12345678912345 a 334.23 14049.30493
	// int, long, char, float, double
	int d;
	long ld;
	char c;
	float f;
	double lf;

	scanf("%d %ld %c %f %lf", &d, &ld, &c, &f, &lf);
    printf("%d\n%ld\n%c\n%f\n%lf", d, ld, c, f, lf);

    return 0;
}

/*

> ./basic_data_types
> 3 12345678912345 a 334.23 14049.30493

3
12345678912345
a
334.230011
14049.30493

*/