/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:41:26 by franaivo          #+#    #+#             */
/*   Updated: 2025/06/16 16:41:38 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <identify.hpp>

int main()
{
    std::srand(time(0));

    int i = 5;
    while(i-- > 0)
    {
        Base *base = generate();
        identify(base);
        identify(*base);
        delete base;
        std::cout << std::endl;
    }

    Base *null = NULL;
    identify(null);
    identify(null);

    return 0;
}
