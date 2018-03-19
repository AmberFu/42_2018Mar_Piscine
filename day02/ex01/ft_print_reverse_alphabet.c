/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 23:37:06 by pfu               #+#    #+#             */
/*   Updated: 2018/03/15 23:37:14 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char a);

void	ft_print_reverse_alphabet(void)
{
	int	n;

	n = 'z';
	while (n >= 'a')
	{
		ft_putchar(n);
		n = n - 1;
	}
	ft_putchar('\n');
}
