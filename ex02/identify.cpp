/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:41:17 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:47:18 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <identify.hpp>

Base * generate(void)
{
    switch(std::rand() % 3)
    {
        case 0 : return new A(); 
        case 1 : return new B();
        case 2 : return new C();
        default : return NULL;
    }
}

void identify(Base* p)
{
    std::cout << "Type of " << p << ": ";

    if      (dynamic_cast<A*>(p))   std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))   std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))   std::cout << "C" << std::endl;
    else                            std::cout << "Unkowns" << std::endl;
}


void identify(Base& p) {
    std::cout << "Type of " << &p << ": ";

    try { (void) dynamic_cast<A&>(p); std::cout << "A" << std::endl ; return ; } catch (...) {}
    try { (void) dynamic_cast<B&>(p); std::cout << "B" << std::endl ; return ; } catch (...) {}
    try { (void) dynamic_cast<C&>(p); std::cout << "C" << std::endl ; return ; } catch (...) {}
    
    std::cout << "Unknown\n";
}

