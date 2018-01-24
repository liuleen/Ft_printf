#include "ft_printf.h"

void		get_arg(va_list args, const char **format, int *ret)
{
	size_t	len;

	len = 0;
}

int			read_format(va_list args, const char *format)
{
	int ret;
	int i;

	ret = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			//valid format check?
			get_arg(argument, &(*format), &ret);
		}
		else
		{
			ft_putchar(format[i]);
			i++;
		}
		i++;
	}
	return (ret);
}

int			ft_printf(const char *format, ...)
{
	int		ret;
	va_list	argument;

	va_start(argument, format);
	ret = read_format(argument, format);
	va_end(argument);
	return(ret);
}