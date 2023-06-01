/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvalli-v <fvalli-v@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:43:47 by fvalli-v          #+#    #+#             */
/*   Updated: 2023/06/01 20:43:47 by fvalli-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"


int	main(void){

	Sample	instance;
	Sample	instance1;
	Sample	*instancep = &instance;

	int	Sample::*p = NULL;
	void	(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value member foo on instance: " << instance.foo << std::endl;
	std::cout << "Value member foo on instance1: " << instance1.foo << std::endl;
	instance.*p = 21;
	instance1.*p = 41;
	std::cout << "Value member foo on instance: " << instance.foo << std::endl;
	std::cout << "Value member foo on instance1: " << instance1.foo << std::endl;
	instancep->*p = 41;
	std::cout << "Value member foo on instance: " << instance.foo << std::endl;
	std::cout << "Value member foo on instance1: " << instance1.foo << std::endl;
	instance.foo = 50;
	std::cout << "Value member foo on instance: " << instance.*p << std::endl;
	std::cout << "Value member foo on instance1: " << instance1.*p << std::endl;


	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return (0);
}
