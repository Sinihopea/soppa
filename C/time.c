#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[]) {

	time_t time = 0x7FFFFFFF;

	printf("Isoin: %s\n", asctime(gmtime(&time)));

	return 0;
}net
