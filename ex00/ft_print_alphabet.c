/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <ledube@student.wethinkcode.co.za>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:01:18 by ledube            #+#    #+#             */
/*   Updated: 2020/07/09 15:34:37 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_print_alphabet(void){
	char h = 'a';
	while(h <= 'z'){
		ft_putchar(h);
		h++;
	}
