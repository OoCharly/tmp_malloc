#include "ft_malloc.h"

void	*get_page(size_t size)
{
	void	*ptr;

	if (size <= TNY_MAX) {
		ptr = mmap(NULL, getpagesize() * TNY_MAX)
	}
}
