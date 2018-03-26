/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 01:45:59 by pfu               #+#    #+#             */
/*   Updated: 2018/03/23 10:51:52 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_digi(char *str)
{
	int		j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}

char	print_uppercase(int a)
{
	int		ans;
	int		lim;
	char	c;

	lim = 'Z' - (42 - 26);
	if (a <= lim)
		ans = a + (42 - 26);
	else if (a > lim)
		ans = a + (42 - 26) - 'Z' + 'A';
	c = ans;
	return (c);
}

char	print_lowercase(int b)
{
	int		ans;
	int		lim;
	char	c;

	lim = 'z' - (42 - 26);
	if (b <= lim)
		ans = b + (42 - 26);
	else if (b > lim)
		ans = b + (42 - 26) - 'z' + 'a';
	c = ans;
	return (c);
}

char	*ft_rot42(char *str)
{
	int		i;
	int		j;
	int		asc;
	char	*ret;

	ret = str;
	i = 0;
	j = get_digi(str);
	while (str[i] != '\0')
	{
		asc = str[i];
		if (asc >= 65 && asc <= 90)
		{
			str[i] = print_uppercase(asc);
		}
		else if (asc >= 97 && asc <= 122)
		{
			str[i] = print_lowercase(asc);
		}
		i++;
	}
	return (str);
}
