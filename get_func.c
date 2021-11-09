#include "main.h"
/**
 *@funcs - structure to hold cast types
 */
convert funcs[] = {
			{"c", _print_char},
					{"s", _print_string},
							{"%", _print_percent},
									{"d", _print_int},
											{"i", _print_int},
													{NULL, NULL}
				}
/**
 */
int get_func(const char  s, va_list arg)
{
	int i;
	i = 0;
		while(funcs[i].c != NULL)
		{
			if(s == funcs[i].sym)
			{
				count = count + func[i].f(arg);
				return(count);
			}
		i++;
		}
		return(0);
}

