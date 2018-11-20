//
// Created by charly on 16/10/18.
//

#include <stdlib.h>
#include <sys/mman.h>

int main() {
	char	*str;
	size_t	mmap_size;

	//mmap_size = 100 * 1024 * getpagesize();
	//str = (char *)mmap(NULL, mmap_size, PROT_READ | PROT_WRITE,MAP_ANON | MAP_PRIVATE, -1, 0);
	str = (char*)malloc(sizeof(char) * 100000);
	return 0;
}
