/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:52:54 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/16 13:33:36 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define BUF_LEN 10

void print_comb(char toprint[BUF_LEN], int cur_dex, int expected_len) {
  if (cur_dex >= expected_len) {
    return;
  }
  if (cur_dex <= 0) {
    toprint[cur_dex] = '0';
  } else {
    toprint[cur_dex] = toprint[cur_dex - 1] + 1;
  }

  while (toprint[cur_dex] <= '9') {
    print_comb(toprint, cur_dex + 1, expected_len);
    if (cur_dex == expected_len - 1) {
      if (!(toprint[0] == '0' &&
            toprint[expected_len - 1] == '0' + expected_len - 1)) {
        write(1, ", ", 2);
      }
      write(1, toprint, expected_len);
    }
    toprint[cur_dex]++;
  }
}

void ft_print_combn(int n) {

  char toprint[BUF_LEN];
  int i = 0;
  while (i < BUF_LEN) {
    toprint[i] = '0';
    i++;
  }
  print_comb(toprint, 0, n);
}

int main(void) {
  ft_print_combn(1);
  ft_print_combn(2);
  ft_print_combn(3);
  ft_print_combn(9);
  return (0);
}
