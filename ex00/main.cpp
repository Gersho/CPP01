/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:18:35 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/22 17:19:03 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapzombie;

	heapzombie = Zombie::newZombie("heap-kun");
	heapzombie->announce();
	delete (heapzombie);
	Zombie::randomChump("stack-chan");
	return (0);
}