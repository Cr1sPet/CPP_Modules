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
	int			i;
	int			j;
	std::string ret;

	j = 0;
	ret = "";
	while (input[j])
	{
		if (is_lowcase(input[j])) {
			input[j] -= 'a' - 'A';
		}
		j++;
	}
	ret.append(input);
	return (ret);
}

int main (int argc, char **argv) {
	std::string output_message;

	std::cout << output_message.max_size();
	if (argc > 2) {
		std::cout << "error: too much arguments" << std::endl;
		return (1);
	}
	output_message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (2 == argc) {
		output_message = process(argv[1]);
	}
	std::cout << output_message;
	return (0);
}