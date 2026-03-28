/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:32:03 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/03/28 17:26:18 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	to_replace(std::string fileName, std::string str1, std::string str2)
{
	std::ifstream ifs(fileName.c_str());
	if (!ifs.is_open())
	{
		std::cerr << "Impossible to open " << std::endl;
		return ;
	}
	if (!ifs.peek())
	{
		std::cerr << "The file its empty" << std::endl;
		return ;
	}
	std::string newFile = fileName + ".replace";
	std::ofstream ofs(newFile.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Impossible to create " << std::endl;
		return ;
	}
	std::string line;
	while (std::getline(ifs, line))
	{
		size_t pos = line.find(str1);
		while (pos != std::string::npos)
		{
			line = line.substr(0, pos) + str2 + line.substr(pos + str1.length());
			pos = line.find(str1, pos + str2.length());
		}
		if (!ifs.eof())
			line += '\n';
		ofs << line;
	}
	ifs.close();
	ofs.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "its must be <./a.out> <filename>.replace <string s1> <string s2" << std::endl;
		return (1);
	}
	else
		to_replace(argv[1], argv[2], argv[3]);
	return (0);
}