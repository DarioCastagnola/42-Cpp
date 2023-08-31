/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:30:10 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/31 16:46:18 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replacer(char *file, std::string s1, std::string s2)
{
    std::ifstream   myfile;
    std::ofstream   rfile;
    std::string     newfile = file;
    std::string     line;
    std::string     start;

    newfile += ".replace";
    myfile.open (file);
    if (!myfile) 
    {
		std::cout << "No such file" << std::endl;
	}
	else 
    {
        rfile.open (newfile.c_str());
        while(getline(myfile, line))
		{
            size_t n = 0;
            size_t l = 0;
            while ((n = line.find(s1, l)) != std::string::npos)
            {
                start = line.substr(l, n - l);
                l = n + s1.length();
		        rfile << start << s2;
            }
            rfile << line.substr(l, n) << std::endl;
        }
	}
    rfile.close();
    myfile.close();
    return ;
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return 1;
    replacer(argv[1], argv[2], argv[3]);
    return 0;
}


// 	else 
//     {
// 		char ch;
//         rfile.open (newfile.c_str());

// 		while (1) 
//         {
// 			myfile >> ch;
// 			if (myfile.eof())
// 				break;

// 			rfile << ch;
// 		}
//         rfile << std::endl;
// 	}
//     rfile.close();
//     myfile.close();
//     return ;
// }