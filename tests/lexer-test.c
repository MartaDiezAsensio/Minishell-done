/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer-test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:22:03 by mdiez-as          #+#    #+#             */
/*   Updated: 2023/10/26 18:19:07 by mdiez-as         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/minishell.h"

int	main(int argc, char **argv)
{
	char	*line;
	t_token	*res;

	line = argv[1];
	res = ft_lexer(line);
	while (res)
	{
		printf("%s  -  %d\n", res->value, res->type);
		res = res->next;
	}
}