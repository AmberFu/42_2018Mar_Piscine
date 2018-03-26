/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:05:45 by pfu               #+#    #+#             */
/*   Updated: 2018/03/20 21:51:04 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_substr(int i, int dgi, char *str, char *to_find)
{
	int		j;

	j = 0;
	while (str[i] == to_find[j])
	{
		j++;
		i++;
	}
	if (j == dgi)
		return (1);
	else
		return (-1);
}

int		find_dgi(char *c)
{
	int		d;

	d = 0;
	while (c[d] != '\0')
		d++;
	return (d);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		tf;
	int		dgi;
	int		strlen;

	i = 0;
	tf = 0;
	if (to_find[0] == '\0')
		return (str);
	dgi = find_dgi(to_find);
	strlen = find_dgi(str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			tf = check_substr(i, dgi, str, to_find);
			if (tf == 1)
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}
