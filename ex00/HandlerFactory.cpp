/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandlerFactory.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:39:11 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:39:12 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HandlerFactory.hpp>

bool isCharLitteral(const std::string& litteral)
{
    return litteral.length() == 1 && std::isprint(litteral[0]) && !std::isdigit(litteral[0]);
}

bool isNumLitteral(const std::string& litteral)
{
    char *end;
    std::strtod(litteral.c_str() , &end);
    
    if ( *end != '\0' && *end != 'f')
        return false;

    if(*end != 0 && *(end + 1) != 0) 
        return false;

    return true;
}


const ALiteralTypeHandler* HandlerFactory::getHandler(const std::string& litteral)
{
    if(isCharLitteral(litteral))
        return new CharHandler();
    if(isNumLitteral(litteral))
        return new NumericsHandler();

    return NULL;
}
