/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:47:48 by jtomala           #+#    #+#             */
/*   Updated: 2021/11/25 11:52:32 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int arg)
{
	if ((arg >= 65 && arg <= 90) || (arg >= 97 && arg <= 122))
		return (1);
	else
		return (0);
}