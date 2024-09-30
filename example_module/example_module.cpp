export module example_module;

#include <stdio.h>

namespace example_module {
	export void greet() {
		printf("Hello from example_module!\n");
	}
}