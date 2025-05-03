#ifndef HEADER_H
#define HEADER_H
#include "get_next_line/get_next_line.h"
#include "ft_printf/ft_printf.h"
#include <fcntl.h>




// utils_func 
int	ft_strlen(char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	check_is_empty(char *str);
char	**ft_split(char  *s, char c);
int  ft_len(char **str);

#endif 