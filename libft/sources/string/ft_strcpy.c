/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggwin-go <ggwin-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:31:39 by ggwin-go          #+#    #+#             */
/*   Updated: 2019/01/04 22:16:04 by ggwin-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char *res;

	res = dst;
	while (*src != '\0')
		*dst++ = *src++;
	*dst = *src;
	return (res);
}
