#include "adf.h"

struct test {
	void hello() {
	}
};
struct test2 {
	test tt;
	void hello2() {
	}
};
struct myGraph:public adf::graph {
	adf::input_gmio in[3];
};

