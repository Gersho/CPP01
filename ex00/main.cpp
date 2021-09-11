/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:18:35 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/11 14:22:01 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* heapzombie;

	heapzombie = Zombie::newZombie("heap-kun");
	if (!heapzombie)
		return (-1);
	heapzombie->announce();
	delete (heapzombie);
	Zombie::randomChump("stack-chan");
	return (0);
}