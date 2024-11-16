#include <iostream>
#include <string>

void toUpperInPlace(std::string &str)
{
	for (std::string::size_type i = 0; i < str.length(); ++i)
	{
		str[i] = std::toupper(static_cast<unsigned char>(str[i]));
	}
}

int main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		return ((std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl), 0);
	for (i = 1; i < argc; i++)
	{
		std::string input = argv[i];
		toUpperInPlace(input);
		std::cout << input;
	}
	return 1;
}
