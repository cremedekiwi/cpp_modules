/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 09:00:15 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/06 10:22:26 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// replace all occurrences of s1 with s2 in given line
void replaceStr(std::string &line, const std::string &s1, const std::string &s2)
{
	// track the position of s1
	size_t pos = 0;

	// searches for the next occurence of s1 in line
		// if s1 is found, returns the index of its first occurence
		// if not it returns std::string::npos which breaks the loop
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		// delete s1
		line.erase(pos, s1.length());
		// insert s2 instead
		line.insert(pos, s2);
		// start at the index after s2 length
		pos += s2.length();
	}
}

int main(int argc, char **argv)
{
	// check nbr of arguments
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
		return (1);
	}

	// assign command line
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	// check for empty s1
	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}

	// open infile
	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cerr << "Error: unable to open file " << filename << std::endl;
		return (1);
	}

	// check for empty infile (if peek detect eof)
	if (infile.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Error: file " << filename << " is empty" << std::endl;
		infile.close();
		return (1);
	}

	// create outfile
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "Error: unable to create output file" << std::endl;
		infile.close();
		return (1);
	}

	// read line by line, and call replaceStr
	// writes the modified line to the output file
	std::string line;
	while (std::getline(infile, line))
	{
		replaceStr(line, s1, s2);
		outfile << line << std::endl;
	}

	// close files
	infile.close();
	outfile.close();

	// print when it's done
	std::cout << "Done : check " << filename + ".replace" << std::endl;

	return (0);
}

