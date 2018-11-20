//
// Created by Charles-henry DESVERNAY on 10/17/18.
//

#ifndef PROJECT_FT_MALLOC_H
# define PROJECT_FT_MALLOC_H

# include <stdlib.h>
# include <pthread.h>
# include <sys/mman.h>

# define TNY_MAX 16
# define SML_MAX
# define PROT_RDWR PROT_READ | PROT_WRITE

typedef struct		s_block
{
	struct s_block	*next;
	size_t 			size;
};

typedef struct		s_page
{
	struct s_page	*previous;
	struct s_page	*next;
	size_t 			size_max;
	size_t 			size;
	struct s_block	*first;
}					t_page;

#endif //PROJECT_FT_MALLOC_H
