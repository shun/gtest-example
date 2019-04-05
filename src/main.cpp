#include <cstdio>
#include <tuple>

#include "myint.h"

std::tuple<int, int>
get_val() {
	return std::make_tuple(123, 456);
}

int main(int argc, char ** argv) {
	auto [a, b] = get_val();

	auto mi1 = MyInt(101);
	auto mi2 = MyInt(102);
	return 0;
}
