#include <stdlib.h>
#include <stdio.h>

#define unit_test(func_name)				\
	__attribute__((constructor)) void func_name()

#define test_assert(exp)						\
	do {								\
		if (exp) {} else {					\
			printf("[FAIL] %s: %d: in function %s(): "	\
				"assertion `%s' failed.\n",		\
				__FILE__, __LINE__, __func__, #exp);	\
			exit(-1);					\
		}							\
	} while (0)

#define test_file_end				\
	int main() {				\
		return 0;			\
	}
