/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <ledube@student.wethinkcode.co.za>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:31:34 by ledube            #+#    #+#             */
/*   Updated: 2020/07/15 14:01:50 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int                     i;
	unsigned int    r;

	if (nb < 0 || nb > 12)
		return (0);

			i= 2;
			r= 1;
			while (i <= nb)
			{ 		
                    r *= i;
                    ++i;
			}
			return (r);
}

int main()
{
	printf("%d",ft_iterative_factorial(13));
			return(0);
}
