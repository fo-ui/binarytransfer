#include "adf2.h"

struct test3 {
	void hello() {
	}
};
struct test4 {
	test3 tt;
	void hello2() {
	}
};
struct myGraph2:public adf::graph2 {
	adf::input_gmio2 in;
};
