/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgarces- <felipegarces1608@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:04:16 by cgarces-          #+#    #+#             */
/*   Updated: 2025/02/18 23:04:16 by cgarces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(char c) 
{
    if( c >= '0' && c <= '9')
        return (1);
    return (0);

}

//#include <stdio.h>

//int main (void) 
//{

//    printf("%d", ft_isdigit('1'));
//    return (0);
//}