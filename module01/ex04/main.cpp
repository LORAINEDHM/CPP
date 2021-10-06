/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:11:04 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/06 14:51:52 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		handleError( const char *str ) {
	
	std::cout << str << std::endl;
	return (0);
}

int		parsing( int ac, char **av ) {

	if (ac != 4)
		return(handleError("Error: wrong number of arguments"));	
	return (1);
}

void	fillFile( std::string filename, std::string s1, std::string s2, std::ifstream& ifs ) {
	
	std::ofstream ofs(filename);
	std::string line;
	int pos;
	int i = 0;

	if (!ofs) {
    	std::cerr << "Error: file could not be opened" << std::endl;
    	exit(1);
	}
	while (getline(ifs, line)) {
		if (i != 0)
			ofs << std::endl;
		if ((pos = line.find(s1)) != std::string::npos) {	
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		ofs << line;
		i++;
	}
	ifs.close();
	ofs.close();
}

std::string		getFilename( std::string filename ) {

	size_t pos = 0;
	size_t len;
	
	len = filename.length();
	if ( (pos = filename.find(".")) == std::string::npos)
		pos = len;
	if (pos != std::string::npos)
		filename.resize(pos);
	filename.resize(pos);
	return (filename.append(".replace"));
}

int main (int ac, char **av) {

	std::string filename;
	std::string word;
	
	if (parsing(ac, av ) == 0)
		return (1);
	std::ifstream ifs(av[1]);
	if (!ifs) {
    	std::cerr << "Error: file could not be opened" << std::endl;
    	exit(1);
	}
	filename = getFilename(av[1]);
	fillFile(filename, av[2], av[3], ifs);
	return 0;
}
