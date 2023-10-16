#include <iostream>
#include <vector>
#include <memory>

template<typename T>
void move_vectors(std::vector<T>& lhs, std::vector<T>& rhs)
{
	rhs = std::move(lhs);
}

int main()
{
	std::vector<std::string> one = { "test_string1", "test_string2" };
	std::vector<std::string> two;

	move_vectors(one, two);
	return 0;
}
