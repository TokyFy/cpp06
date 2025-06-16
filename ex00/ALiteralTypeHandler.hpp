/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ALiteralTypeHandler.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:39:07 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:39:08 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ALiteralTypeHandler
{
    private:
        ALiteralTypeHandler(const ALiteralTypeHandler &);
        ALiteralTypeHandler& operator=(const ALiteralTypeHandler&);
    public:
        ALiteralTypeHandler();
        virtual ~ALiteralTypeHandler();

        virtual void handle(const std::string&) const = 0;
};
