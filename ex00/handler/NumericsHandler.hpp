/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NumericsHandler.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:38:57 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:38:58 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include "../utils.hpp"
#include "../ALiteralTypeHandler.hpp"

class NumericsHandler : public ALiteralTypeHandler
{
    private:
        NumericsHandler(const NumericsHandler&);
        NumericsHandler& operator=(const NumericsHandler&);
    
    public:
        NumericsHandler();
        ~NumericsHandler();
        
        void handle(const std::string&) const;
};
