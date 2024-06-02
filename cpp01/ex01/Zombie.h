/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:59:13 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 10:18:36 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
#include <limits.h>
#include "Zombie.hpp"

Zombie *zombieHorde( int n, std::string name );

#endif