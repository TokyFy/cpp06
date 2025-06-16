/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HandlerFactory.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:39:16 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:39:17 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdlib.h>
#include <CharHandler.hpp>
#include <NumericsHandler.hpp>
#include <ALiteralTypeHandler.hpp>

class HandlerFactory
{
    private:
        HandlerFactory();
        ~HandlerFactory();
        HandlerFactory(const HandlerFactory&);
        HandlerFactory operator=(const HandlerFactory&);

    public:
        static const ALiteralTypeHandler* getHandler(const std::string&);
};
