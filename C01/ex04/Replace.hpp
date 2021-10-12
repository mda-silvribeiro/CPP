/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:08:15 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 16:43:37 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <string>

class Replace
{
	public:
		Replace(const char * file, const char *s1, const char *s2);
		~Replace( void );
		void init(std::string s1, std::string s2);
		std::string line;
		std::string replacefile;
		size_t pos;
	private:
		std::ifstream _ifs;
		std::ofstream _ofs;
};

#endif
