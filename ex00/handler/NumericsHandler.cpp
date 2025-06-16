/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NumericsHandler.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:38:54 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:38:55 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <NumericsHandler.hpp>

NumericsHandler::NumericsHandler()
{
    return;
}

NumericsHandler::~NumericsHandler()
{
    return;
}

void NumericsHandler::handle(const std::string& litteral) const
{
    double n = std::strtod(litteral.c_str() , NULL);
    castPrintChar(static_cast<long double>(n));
    castIntPrint(static_cast<long double>(n));
    castFloatPrint(static_cast<long double>(n));
    castDoublePrint(static_cast<long double>(n));
}
