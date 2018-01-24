#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include ""



typedef struct 		s_type
{
	unsigned char 	c;
	char 			*s;
	wchar_t			*wct;
	wint_t			wit;
	intmax_t		i;
	uintmax_t		u;
}					t_type;

typedef struct 		s_format
{
	char			hash;
	char			zero;
	char			space;
	char			negative;
	char			positive;
	int 			min_width;
	int 			precision;
	char			*length_mod;
	char			con_spec;
	t_type			argument;
	int 			argument_length;
	int 			width_prec_length;
}					t_format;