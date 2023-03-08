/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 03:49:15 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/06 06:02:30 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void print(char *placeholders, ... )
{
  // the number of arguments to be expected is equal to the number of 
  // placeholder string chars as returns by strlen()

  int num_args = strlen(placeholders);

  va_list args;
  va_start(args, placeholders);
  
  for (int i = 0; i < num_args; i++)
  {
    // if the next char in the placeholder string is a 'd', extract the next 
    // argument as an int and print it out
    if (placeholders[i] == 'd')
    {
      int x = va_arg(args, int);
      printf("%d\n", x);
    }
    // if the next char in the placeholder string is a 'f', extract the next 
    // argument as a double and print it out    
    else if (placeholders[i] == 'f')
    {
      double x = va_arg(args, double);
      printf("%f\n", x);
    }
  }

  va_end(args);
}

int main()
{
    testit(0, 0xFFFFFFFF); // 1st problem: 0xffffffff is not an int
    testit(1, NULL);       // 2nd problem: NULL is not a char*
}