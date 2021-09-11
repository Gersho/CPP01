/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:18:35 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/11 16:30:17 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	horde;
	int		i;
	int		n;

	n = 5;
	horde = Zombie::zombieHorde(n, "Agent Smith");
	i = 0;
	while (i < n)
	{
		horde[i].announce();
		i++;
	}
	delete [] (horde);
	return (0);
}