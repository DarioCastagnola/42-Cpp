/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:54:34 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/28 14:32:35 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    public:
        Zombie( std::string );
        ~Zombie();
        void announce( void );
    private:
        std::string name;
};

void randomChump( std::string name );
Zombie  *newZombie( std::string name );

