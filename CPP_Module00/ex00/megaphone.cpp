#include <iostream>
#include <string>

int	is_lowcase(char ch) {
	if (ch >= 'a' && ch <= 'z') {
		return (1);
	} else {
		return (0);
	}
}

std::string process(char *input) {
	size_t			j;
	std::string	ret;

	j = 0;
	ret = std::string(input);
	while (j < ret.length())
	{
		if (is_lowcase(ret.at(j))) {
			ret[j] = ret[j] - ('a' - 'A');
		}
		j++;
	} 
	return (ret);
}

int main (int argc, char **argv) {
	std::string	input_message;
	std::string output_message;

	if (argc > 2) {
		std::cout << "error: too much arguments" << std::endl;
		return (1);
	}
	output_message = std::string("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	if (2 == argc) {
		output_message = process(argv[1]);
	}
	std::cout << output_message;
	return (0);
}