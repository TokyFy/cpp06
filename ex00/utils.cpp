/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:39:32 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:45:13 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.hpp>

void castPrintChar(long double n)
{
    std::cout << "char   : ";
   
    if(std::isnan(n))
    {
        std::cout << "Impossible" << std::endl;
        return;
    }

    if(n > (long double)std::numeric_limits<char>::max() || n < (long double)std::numeric_limits<char>::min())
    {
        std::cout << "overflow" << std::endl;
        return;
    }

    if(!std::isprint(static_cast<char>(n)))
    {
        std::cout << "Non displayable" << std::endl;
        return;
    }

    std::cout << static_cast<char>(n) << std::endl;
    return;
}

void castIntPrint(long double n)
{
    std::cout << "int    : ";

    if(std::isnan(n))
    {
        std::cout << "Impossible" << std::endl;
        return;
    }

    if(n > (long double)std::numeric_limits<int>::max() || n < (long double)std::numeric_limits<int>::min())
    {
        std::cout << "overflow" << std::endl;
        return;
    }

    std::cout << static_cast<int>(n) << std::endl;
}

void castFloatPrint(long double n)
{
    std::cout << "float  : ";
    long double fract;

    if(std::isinf(n))
    {
        std::cout << ( (n < 0) ? "-inf" : "inf" ) << std::endl;
        return;
    }

    if(n > (long double)std::numeric_limits<float>::max() || n < -(long double)std::numeric_limits<float>::max())
    {
        std::cout << "overflow" << std::endl;
        return;
    }

    if( std::fabs( modf(n , &fract) ) < std::numeric_limits<double>::epsilon() )
    {
        std::cout << static_cast<float>(n) << ".0f" << std::endl;
        return;
    }
    (void)(fract);
    std::cout << static_cast<float>(n) << "f" << std::endl;
}

void castDoublePrint(long double n)
{
    std::cout << "double : ";
    long double fract;

    if(std::isinf(n))
    {
        std::cout << ( (n < 0) ? "-inff" : "inff" ) << std::endl;
        return;
    }

    if(n > (long double)std::numeric_limits<double>::max() || n < -(long double)std::numeric_limits<double>::max())
    {
        std::cout << "overflow" << std::endl;
        return;
    }

    if( std::fabs( modf(n , &fract) ) < std::numeric_limits<double>::epsilon() )
    {
        std::cout << static_cast<float>(n) << ".0" << std::endl;
        return;
    }
    (void)(fract);
    std::cout << static_cast<float>(n) << std::endl;
}
