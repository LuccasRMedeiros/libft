#include "libft.h"
#include <stdio.h>


unsigned int        ft_sign(const char *str, unsigned int i)

{

	    int    sign;



		    sign = 1;

			    if (str[i] == '-')

					    {

							        sign = -1;

									        i++;

											    }

				    else if (str[i] == '+')

						    {

								        i++;

										    }

					    return (sign);

}



int                    ft_atoi(const char *nptr)

{

	    int                sign;

		    unsigned int    i;

			    int                number;



				    i = 0;

					    while (nptr[i] == ' ')

							    {

									        i++;

											    }

						    sign = ft_sign(nptr, i);

							    number = 0;

								    while (nptr[i] != '\0')

										    {

												        if (ft_isdigit(nptr[i]))

															        {

																		            number = number * 10 + nptr[i] - '0';

																					            i++;

																								        }

														        else

																	        {

																				            return (0);

																							        }

																    }

									    return (sign * number);

}

int	main()
{
	char *str = "----90abcd";

	printf("%i\n", ft_atoi(str));
	return 0;
}
