/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelefos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/08 16:45:02 by pdelefos          #+#    #+#             */
/*   Updated: 2016/05/09 15:17:30 by pdelefos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <locale.h>

int		main(void)
{
	setlocale(LC_ALL, "en_US.UTF-8");
	printf("|%12@d|\n");
	printf("|%-12@d|\n");
	printf("|%l+d|\n", 21);
	printf("|%8l-d|\n", 21);
	printf("|% 2d|\n", 21);
	printf("|%0d|\n", 21);
}