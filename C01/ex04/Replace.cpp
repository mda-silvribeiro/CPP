/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:10:13 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 16:46:17 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void Replace::init(std::string s1, std::string s2)
{
	if(!_ifs.is_open())
		std::cout << "\033[1;31m\033[1;43merror: invalid file " << std::endl;
	if (s1.empty() || s2.empty())
		std::cout << "\033[1;31m\033[1;43ms1 or s2 are empty" << std::endl;
	if (!(_ifs.is_open()) || s1.empty() || s2.empty() )
		exit (1);
	
}

Replace::Replace(const char *file, const char *s1, const char *s2)
{
	std::string file1(file);
	std::string	str_search(s1);
	std::string str_replace(s2);

	_ifs.open(file1.c_str());
	init(str_search, str_replace);
	replacefile = file1 + ".replace";
	_ofs.open(replacefile.c_str());
	while (getline(_ifs, line))
	{
		pos = 0;
		while ((pos = line.find(str_search)) != std::string::npos)
		{
			line.erase(pos, str_search.length());
			line.insert(pos, str_replace);
		}
		_ofs << line << std::endl;
	}
	return ;
}

Replace::~Replace( void )
{
	std::cout << "\033[1;32m\033[1;44m ****** SUCCESS ******" << std::endl;
	_ifs.close();
	_ofs.close();
	return ;
}
