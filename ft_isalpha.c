/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:26:41 by esteiner          #+#    #+#             */
/*   Updated: 2023/01/09 14:24:24 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*
int main(void)
{
	char string_test1 = '';
	int result;
	result = is_alpha(string_test1);
	printf("mein is alpha: %d\n", result);
	result = isalpha(string_test1);
	printf("isalpha: %d\n", result);
	return (0);
}
*/