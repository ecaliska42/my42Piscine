/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:07:49 by ecaliska          #+#    #+#             */
/*   Updated: 2023/07/24 14:08:11 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT.H
# define FT.H

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_swap(int *a, int *b)

void ft_putstr(char *str);

int ft_strlen(char *str);

int ft_strcmp(char *s1, char *s2);


#endif
