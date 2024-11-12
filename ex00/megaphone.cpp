/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:15:10 by hipham            #+#    #+#             */
/*   Updated: 2024/11/12 19:15:38 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *ag[])
{
    std::string input;

    if (ac > 1)
    {
        for(int i = 1; i < ac; i ++)
        {
            input = ag[i];
            // for(char&c : input)
            // {
            //     c = std::toupper(c);
            // }
            for(int j = 0; input[j] != '\0'; j++)
            {
                input[j] = std::toupper(input[j]);
            }
            std::cout << input;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return(0);
}