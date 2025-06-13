/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:58:10 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/13 14:12:56 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>
#include <ALiteralTypeHandler.hpp>
#include <iostream>

int main(int argc , char** argv)
{
    if(argc != 2)
    {
        std::cout << "usage : convert [ litteral ]" << std::endl;
        return 1;
    }

    ScalarConverter::convert(argv[1]);
}
