#include <iostream>

using namespace std;
// This is the limit from the problem
#define LIMIT 1000

int sum_multiple(int value){
	int sum = 0;
	for(int i=value; i<LIMIT; i+=value){
		sum += i;
	}
	return sum;
}


int main() {
	// This is a simple include exclude principle problem - this optimisation runs the code upto 40% faster than before
    cout << sum_multiple(3) + sum_multiple(5) - sum_multiple(15) << endl;
    return 0;
}
