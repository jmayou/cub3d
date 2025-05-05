#ifndef HEADER_H
#define HEADER_H
#include "get_next_line/get_next_line.h"
#include "ft_printf/ft_printf.h"
#include <fcntl.h>
#include <stdbool.h>


typedef struct s_identifiers
{
	char *identifier;
	char *path;
	int *arg_C;
	int *arg_F;
	struct s_identifiers	*next;
}					t_identifiers;

typedef struct s_data
{
	t_identifiers *ident ;
	bool no_set;
    bool so_set;
    bool we_set;
    bool ea_set;
    bool f_set;
    bool c_set;
	int cub_fd;
	int texture_fd;

}t_data;

// utils_func 
int	ft_strlen(char *str);
int	ft_atoi(char *str);
void	add_at_back(t_identifiers **head, t_identifiers *newnode);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	check_is_empty(char *str);
char	**ft_split(char  *s, char c);
int  ft_len(char **str);
char	*ft_strtrim(char  *s1, char  *set);
int	check_is_number(char *str);
t_identifiers	*ft_new_node(char *i, char *p, int *C,int *F);

// parsing 

void process_element(t_data *data);

#endif 