/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 20:38:06 by pfu               #+#    #+#             */
/*   Updated: 2018/03/21 22:10:00 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char s);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (argc > 1 && i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
