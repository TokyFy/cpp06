/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:40:48 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:40:49 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>

typedef struct Data {
    int _data_;
} Data;

class Serializer 
{
    private :
        Serializer();
        ~Serializer();
        Serializer(Serializer&);
        Serializer& operator=(Serializer&);

    public :
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw); 
};
