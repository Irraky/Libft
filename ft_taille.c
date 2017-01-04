/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taille.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 16:40:38 by drecours          #+#    #+#             */
/*   Updated: 2017/01/04 16:40:47 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_taille(char const *str, int i, char c)
{
	int		sheep;

	sheep = 0;
	while(str[i] != c && str[i])
	{
		i++;
		sheep++;
	}
	return (sheep);
}