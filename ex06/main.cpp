/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:19:52 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/15 18:51:37 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	get_saltlevel(char* str)
{
	if (std::strcmp(str, "DEBUG") == 0) 
		return DEBUG;
	if (std::strcmp(str, "INFO") == 0)
		return INFO;
	if (std::strcmp(str, "WARNING") == 0)
		return WARNING;
	if (std::strcmp(str, "ERROR") == 0)
		return ERROR;
	return OTHER;
}

int main(int ac, char** argv)
{
	Karen	karen;
	int		level;
	
	if (ac < 2)
	{
		std::cout << "[SILENCE]" << std::endl << "Karen says nothing for once" << std::endl;
		return (0);
	}
	if (ac > 2)
	{
		std::cout << "[ Karen is trying to complain about too many things at the same time ]" << std::endl;
		return (0);
	}
	level = get_saltlevel(argv[1]);
	switch (level)
	{
		case DEBUG:
			karen.complain("DEBUG");
		case INFO:
			karen.complain("INFO");
		case WARNING:
			karen.complain("WARNING");
		case ERROR:
			karen.complain("ERROR");
			break;
		case OTHER:
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}