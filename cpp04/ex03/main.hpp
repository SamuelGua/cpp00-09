/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:50:13 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 11:38:51 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <string>
#include <iostream>

const std::string RESET = "\033[0m";
const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

#endif