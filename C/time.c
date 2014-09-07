#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[]) {

	time_t time = 0x7FFFFFFF;

	printf("Largest time_t value:\n%s\n", asctime(gmtime(&time)));

	return 0;
}
