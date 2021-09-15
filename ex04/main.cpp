/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:22:09 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/15 14:09:12 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>

int	basic_checks(int ac, char** av, std::ifstream& ifs, std::ofstream& ofs)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace filename s1 s2" << std::endl;
		return (-1);
	}
	if (av[2][0] == '\0' || av[3][0] == '\0')
	{
		std::cout << "s1 and s2 must not be empty";
		return (-1);
	}
	if (!ifs.is_open())
	{
		std::cout << "Cannot open file " << av[1] << std::endl;
		return (-1);
	}
	if (!ofs.is_open())
	{
		std::cout << "Cannot open output file" << std::endl;
		return (-1);
	}
	return (0);
}

int	main(int ac, char** av)
{
	std::ifstream		ifs(av[1]);
	std::stringstream	ostringstream;
	std::string			s1;
	std::string			s2;
	std::string			tmp;
	std::string			outfile;
	std::string			out;
	int					i;
	int					s1_len;
	int					tmp_len;


	outfile += av[1];
	outfile += ".replace";
	std::ofstream		ofs(outfile);

	if (basic_checks(ac, av, ifs, ofs) == -1)
		return (-1);
	s1 = av[2];
	s2 = av[3];
	ostringstream << ifs.rdbuf();
	tmp = ostringstream.str();
	s1_len = s1.length();
	tmp_len = tmp.length();

	i = 0;
	while (i < (tmp_len))
	{
		if (tmp.substr(i,s1_len) == s1)
		{
			out += s2;
			i += (s1_len - 1);
		}
		else
		{
			out += tmp[i]; 
		}
		i++;
	}
	ofs << out;
	ifs.close();
	ofs.close();
	return (0);
}