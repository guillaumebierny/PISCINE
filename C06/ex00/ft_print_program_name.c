/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:44:02 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/30 20:12:38 by gbierny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	(void)argc;

	i = -1;
	while (argv[0][++i])
		write(1, &argv[0][i], 1);
	write(1, "\n", 1);
	return (0);
}
