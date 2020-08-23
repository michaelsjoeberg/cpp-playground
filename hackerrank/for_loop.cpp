/*

You will be given two positive integers, a and b (a <= b), 
separated by a newline.

For each integer n in the interval [a, b]:

- If 1 <= n <= 9, then print the English representation of 
it in lowercase. That is "one" for 1, "two" for 2, and so on.

- Else if n > 9 and it is an even number, then print "even".

- Else if n > 9 and it is an odd number, then print "odd".

*/

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            if (i == 1) { cout << "one" << endl; }
            if (i == 2) { cout << "two" << endl; }
            if (i == 3) { cout << "three" << endl; }
            if (i == 4) { cout << "four" << endl; }
            if (i == 5) { cout << "five" << endl; }
            if (i == 6) { cout << "six" << endl; }
            if (i == 7) { cout << "seven" << endl; }
            if (i == 8) { cout << "eight" << endl; }
            if (i == 9) { cout << "nine" << endl; }
        } else {
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        };
    }

    return 0;
}