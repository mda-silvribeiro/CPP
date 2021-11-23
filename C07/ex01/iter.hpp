/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:00:52 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/23 02:00:53 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void iter(T *a, int size, void (*function)(const T &)) {
    if(!a)
        return ;
    for (int i = 0; i < size; i++)
        function(a[i]);
}

#endif