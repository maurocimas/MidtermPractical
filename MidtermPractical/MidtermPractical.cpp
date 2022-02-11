#include <iostream>

int GetValidatedInt(std::string strMessage, int nMinimumRange = 0, int nMaximumRange = 0);

int main()
{
    std::cout << "Which design pattern is concerned with capturing a request inside an object?\n"
        << "1.Composite\n"
        << "2.Command\n"
        << "3.Factory Method\n"
        << "4.Observer\n\n";

	int answer = GetValidatedInt("Enter answer: ", 1, 4);

	if (answer == 2)
		std::cout << "Correct.\n";
	else
		std::cout << "Incorrect.\n";
}

int GetValidatedInt(std::string strMessage, int nMinimumRange, int nMaximumRange)
{
	int number;
	bool valid = false;
	while (!valid)
	{
		std::cout << strMessage;
		std::cin >> number;
		if (std::cin.fail())
			std::cin.clear();
		else if (nMinimumRange == 0 && nMaximumRange == 0)
			valid = true;
		else if (number >= nMinimumRange && number <= nMaximumRange)
			valid = true;
		std::cin.ignore(INT_MAX, '\n');
	}
	return number;
}