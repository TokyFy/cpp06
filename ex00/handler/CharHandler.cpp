/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:38:43 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:38:46 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <CharHandler.hpp>

CharHandler::CharHandler()
{
    return;
}

CharHandler::~CharHandler()
{
    return;
}

void CharHandler::handle(const std::string& litteral) const
{
   castPrintChar(static_cast<long double>(litteral[0]));  
   castIntPrint(static_cast<long double>(litteral[0]));
   castFloatPrint(static_cast<long double>(litteral[0]));
   castDoublePrint(static_cast<long double>(litteral[0]));
}
