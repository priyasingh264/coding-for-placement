/*

Counting possible decoding of a given digit sequence
Here we will discuss how to count all the possible decodings of a given digit sequence. Before counting the number of decodings first let’s see how the numbers are assumed to be coded.

1 = A, 2 = B, 3 = C, . . . . , 26 = Z.

Now let’s take an example for reference,

Sequence = 131

Possible decoding (1, 3, 1,)    = ACA
Possible decoding (13, 1)   = MA
So, the total possible decodings of sequence 131 is 2.

*/
#include <cstring>
#include <iostream>

using namespace std;

int countDecoding(char* digits, int n)
{
	if (n == 0 || n == 1)
		return 1;
	if (digits[0] == '0')
		return 0;

	int count = 0;

	if (digits[n - 1] > '0')
		count = countDecoding(digits, n - 1);

	if (digits[n - 2] == '1'
		|| (digits[n - 2] == '2'
		&& digits[n - 1] < '7'))
		count = count + countDecoding(digits, n - 2);
	return count;
}

int main()
{
	char digits[] = "1234";
	int n = strlen(digits);
	cout << "Count is " << countDecoding(digits, n);
	return 0;
}
