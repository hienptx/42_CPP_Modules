/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:02:04 by hipham            #+#    #+#             */
/*   Updated: 2024/11/28 15:02:21 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl me;

	me.complain("DEBUG");
	me.complain("INFO");
	me.complain("WARNING");
	me.complain("ERROR");
	me.complain("EMPTY");
}