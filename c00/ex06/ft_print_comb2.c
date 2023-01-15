/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:11:29 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 15:33:48 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char g_res[2];
char *into_str(int n) {
  g_res[1] = '0' + (n % 10);
  g_res[0] = '0' + ((n / 10) % 10);
  return g_res;
}

void my_comb(int maxval) {
  int left;
  int right;

  left = 0;
  while (left <= maxval) {
    right = left + 1;
    while (right <= maxval) {
      if (left > 0 || right > 1) {
        write(1, ", ", 2);
      }
      write(1, into_str(left), 2);
      write(1, " ", 1);
      write(1, into_str(right), 2);
      right = right + 1;
    }
    left = left + 1;
  }
}

void ft_print_comb2(void) { my_comb(99); }

int main(void) {
  ft_print_comb2();
  return (0);
}
