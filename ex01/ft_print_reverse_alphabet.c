/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledube <ledube@student.wethinkcode.co.za>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:49:58 by ledube            #+#    #+#             */
/*   Updated: 2020/07/09 15:57:58 by ledube           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char);
void ft_print_reverse_alphabet(void){
	char h= 'z';
	while(h >= 'a'){
		ft_putchar(h);
		h--;
	}
