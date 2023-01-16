/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <skulkamt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:14:07 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/16 13:39:14 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int m_power(int base, int pow) {
  int s_c;
  int s_accumulate;

  s_accumulate = 1;
  s_c = 0;
  while (s_c < pow) {
    s_accumulate *= base;
    s_c = s_c + 1;
  }
  return (s_accumulate);
}

int m_digitlen(unsigned int nb, unsigned int base) {
  int max_power;

  max_power = 0;
  while (nb / m_power(base, max_power) >= base) {
    max_power = max_power + 1;
  }
  return (max_power);
}

unsigned int remove_negative(int nb) {
  unsigned int newnb = 0;
  if (nb < 0) {
    nb += 1;
    nb *= -1;
    newnb = (unsigned int)nb + 1;
  } else {
    newnb = nb;
  }
  return newnb;
}

void m_put_nbr(int input, int base) {
  int s_cur_digit;
  int s_cur_power;
  char digit;
  int max_index;
  unsigned int nb;

  nb = remove_negative(input);
  max_index = m_digitlen(nb, base);
  if (input < 0) {
    write(1, "-", 1);
  }

  while (max_index >= 0) {
    s_cur_power = m_power(base, max_index);
    s_cur_digit = nb / s_cur_power;
    digit = '0' + s_cur_digit;
    write(1, &digit, 1);
    nb = nb - s_cur_power * s_cur_digit;
    max_index = max_index - 1;
  }
}

void ft_putnbr(int nb) { m_put_nbr(nb, 10); }

int main(void) {
  for (int i = 0; i < 157; i++) {
    ft_putnbr(i);
    ft_putnbr(-i);
    write(1, " ", 2);
  }
  ft_putnbr(-2147483648);
  write(1, " ", 2);
  ft_putnbr(2147483647);
  return (0);
}
