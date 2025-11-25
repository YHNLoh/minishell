/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:09:22 by nloh              #+#    #+#             */
/*   Updated: 2025/11/25 15:44:16 by nloh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	prt(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	s[i] = '\n';
	write(1, s, i + 1);
	s[i] = '\0';
}

int	main(void)
{
	char	*cmd;

	while (1)
	{
		cmd = readline("prompt> ");
		prt(cmd);
		free(cmd);
	}
}
