#include <iostream>

int main()
{
	int size = 0; // changed unsigned int to int because unsigned int can never be smaller than 0 and that created an infinate loop

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	while (size >= 0)
	{
		std::cout << t1 << ", ";

		int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		size--;
	}

	return 0;
}