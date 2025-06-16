/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:41:22 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:41:23 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <A.hpp>
#include <B.hpp>
#include <C.hpp>
#include <Base.hpp>

#include <ctime>
#include <cstdlib>
#include <iostream>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
