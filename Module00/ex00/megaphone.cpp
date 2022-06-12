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
	std::string output_message;

	output_message = std::string("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	if (argc >= 2) {
		for (int i = 1; i < argc; i++) {
			output_message = process(argv[i]);
			std::cout << output_message;
		}
        std::cout << std::endl;
	} else {
		std::cout << output_message << std::endl;
	}
	return (0);
}