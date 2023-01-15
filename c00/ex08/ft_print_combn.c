/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:52:54 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/15 15:55:36 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUF_LEN 10

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

void fillzero(int *arr, int len) {
  int start = 0;
  while (start < len) {
    arr[start] = 0;
    start++;
  }
}

int m_is_uniq(int n, int length) {
  int counter[10];
  int previous_rightmost;
  int right_most;

  fillzero(counter, 10);
  previous_rightmost = 9;
  while (length > 0) {
    right_most = n % 10;
    n = n / 10;
    if (counter[right_most] > 0 || right_most > previous_rightmost) {
      return (0);
    } else {
      counter[right_most] = 1;
    }
    previous_rightmost = right_most;
    length--;
  }
  return (1);
}

char g_res[BUF_LEN];
char *into_str(int n) {
  int start = 0;
  while (start < BUF_LEN) {
    g_res[BUF_LEN - start - 1] = '0' + (n % 10);
    n /= 10;
    start++;
  }
  return g_res;
}

void ft_print_combn(int n) {
  int first;
  int last;
  int tot;

  first = 1;
  tot = 0;
  last = m_power(10, n);
  while (first < last) {
    if (m_is_uniq(first, n)) {
      if (tot > 0) {
        write(1, " ,", 2);
      }
      write(2, into_str(first) + BUF_LEN - n, n);
      tot += 1;
    }
    first = first + 1;
  }
}

int main(void) {
  ft_print_combn(2);
  return (0);
}
