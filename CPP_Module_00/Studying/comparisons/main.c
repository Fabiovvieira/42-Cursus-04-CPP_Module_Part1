/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:17:56 by fvalli-v          #+#    #+#             */
/*   Updated: 2023/06/01 20:17:56 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int	main(void)
{
	Sample instance(42);
	Sample instance1(42);

	if (&instance == &instance1)
		std::cout << "instance and instance1 are physically equal" << std::endl;
	else
		std::cout << "instance and instance1 are not physically equal" << std::endl;

	if (instance.compare (&instance) == 0)
		std::cout << "instance and instance are structually equal" << std::endl;
	else
		std::cout << "instance and instance are not structually equal" << std::endl;

	if (instance.compare (&instance1) == 0)
		std::cout << "instance and instance1 are structually equal" << std::endl;
	else
		std::cout << "instance and instance1 are not structually equal" << std::endl;

	return (0);
}