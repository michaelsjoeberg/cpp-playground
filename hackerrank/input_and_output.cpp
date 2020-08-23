/* Read 3 numbers from stdin and print their sum to stdout. */

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;
	cout << a + b + c << endl;

	return 0;
}

/*

> ./input_and_output
> 1 2 3
6

*/