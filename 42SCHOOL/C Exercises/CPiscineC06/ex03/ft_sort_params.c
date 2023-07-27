/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 03:11:32 by ecaliska          #+#    #+#             */
/*   Updated: 2023/07/24 03:36:24 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	swap(char *big, char *small)
{
char	temp;
temp = *big;
*big = *small;
*small = temp;
}


int	main(int argc, char **argv)
{
int	c;
int	i;
int	j;

j = 0;
i = 0;
c = argc - 1;
	while (i <= c)
	{
		while(argv[i][j] != '\0')
		{
			if (argv[i][j] == argv[i+1][j])
				j++;
			else if(argv[i][j]>argv[i+1][j])
				swap(argv[i], argv[i+1]);
			else if(argv[i][j]<argv[i+1][j])
				swap(argv[i+1], argv[i]);
		}
	}
return(0);
}
