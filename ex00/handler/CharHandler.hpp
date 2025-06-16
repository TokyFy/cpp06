/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharHandler.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:38:49 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:38:50 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../ALiteralTypeHandler.hpp"
#include "../utils.hpp"

class CharHandler : public ALiteralTypeHandler
{
    private:
        CharHandler(const CharHandler&);
        CharHandler& operator=(const CharHandler&);
    
    public:
        CharHandler();
        ~CharHandler();
        
        void handle(const std::string&) const;
};
