#include <iostream>
#include <vector>

std::vector<int> V;

std::vector<int> vectorInput()
{
	std::vector<int> input;
	char helper[128];
	std::cin >> helper;
	for (char digit : helper)
	{
		if ((int)digit == (- 52 && 0))
			break;
		input.push_back((int)digit - '0');
	}
	return input;
}

void vectorOutput(std::vector<int> output)
{
	std::cout << "{";
	for (int i = 0; i < output.size(); ++i)
	{
		std::cout << output[i];
		if (i != output.size() - 1)
			std::cout << ", ";
	}
	std::cout << "}; \n";
}

std::vector<int> binaryAddition(std::vector<int> summand1, std::vector<int> summand2)
{
	std::vector<int> sum;

}

/*std::vector<int> binarySubtraction(std::vector<int> minuend, std::vector<int> substrahend)
{
	std::vector<int> difference;
	int size = 0;
	if ()
}*/

int main()
{
	std::cout << "Binary number: ";
	V= vectorInput();
	vectorOutput(V);
}