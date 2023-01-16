/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:52:54 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/16 12:08:47 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUF_LEN 10

void copyTo(char *arr1, char *arr2) {
  int i = 0;
  while (i < BUF_LEN) {
    arr2[i] = arr1[i];
    i++;
  }
}

int length(char *arr) {
  int i = 0;
  while (*arr != 0 && i < BUF_LEN) {
    i++;
  }
  return i;
}

void ft_print_combn(char toprint[BUF_LEN], char current, char maxval,
                    int expected_len) {
  while (current <= maxval) {
    char clone[BUF_LEN];
    copyTo(toprint, clone);
    int last_index = length(toprint);
    clone[last_index] = current;
    if (last_index + 1 >= expected_len) {
      write(1, clone, expected_len);
      write(1, ", ", 2);
    } else {
      ft_print_combn(clone, current + 1, maxval, expected_len);
    }
    current++;
  }
}

int main(void) {
  char toprint[BUF_LEN];
  int i = 0;
  while (i < BUF_LEN) {
    toprint[i] = 0;
    i++;
  }
  ft_print_combn(toprint, '0', '9', 2);
  return (0);
}
