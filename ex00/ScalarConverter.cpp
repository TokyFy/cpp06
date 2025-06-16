/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:39:20 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:39:21 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

void ScalarConverter::convert(const std::string& litteral)
{
    const ALiteralTypeHandler* handler = HandlerFactory::getHandler(litteral);

    if(handler)
        handler->handle(litteral);
    else
        std::cout << "char   : Impossible \nint    : Impossible \nfloat  : Impossible \ndouble : Impossible\n";
    delete handler;
}
