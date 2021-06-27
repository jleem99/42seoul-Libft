/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_color_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleem <jleem@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 00:50:30 by jleem             #+#    #+#             */
/*   Updated: 2021/06/28 02:31:36 by jleem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

#define ANSI_RESET				"\033[0m"
#define ANSI_BLACK				"\033[0;30m"
#define ANSI_RED				"\033[0;31m"
#define ANSI_GREEN				"\033[0;32m"
#define ANSI_YELLOW				"\033[0;33m"
#define ANSI_BLUE				"\033[0;34m"
#define ANSI_MAGENTA			"\033[0;35m"
#define ANSI_CYAN				"\033[0;36m"
#define ANSI_WHITE				"\033[0;37m"
#define ANSI_BRIGHT_BLACK		"\033[0;90m"
#define ANSI_BRIGHT_RED			"\033[0;91m"
#define ANSI_BRIGHT_GREEN		"\033[0;92m"
#define ANSI_BRIGHT_YELLOW		"\033[0;93m"
#define ANSI_BRIGHT_BLUE		"\033[0;94m"
#define ANSI_BRIGHT_MAGENTA		"\033[0;95m"
#define ANSI_BRIGHT_CYAN		"\033[0;96m"
#define ANSI_BRIGHT_WHITE		"\033[0;97m"
#define ANSI_BG_BLACK			"\033[0;40m"
#define ANSI_BG_RED				"\033[0;41m"
#define ANSI_BG_GREEN			"\033[0;42m"
#define ANSI_BG_YELLOW			"\033[0;43m"
#define ANSI_BG_BLUE			"\033[0;44m"
#define ANSI_BG_MAGENTA			"\033[0;45m"
#define ANSI_BG_CYAN			"\033[0;46m"
#define ANSI_BG_WHITE			"\033[0;47m"
#define ANSI_BG_BRIGHT_BLACK	"\033[0;100m"
#define ANSI_BG_BRIGHT_RED		"\033[0;101m"
#define ANSI_BG_BRIGHT_GREEN	"\033[0;102m"
#define ANSI_BG_BRIGHT_YELLOW	"\033[0;103m"
#define ANSI_BG_BRIGHT_BLUE		"\033[0;104m"
#define ANSI_BG_BRIGHT_MAGENTA	"\033[0;105m"
#define ANSI_BG_BRIGHT_CYAN		"\033[0;106m"
#define ANSI_BG_BRIGHT_WHITE	"\033[0;107m"
#define EMPTY_STR				""

static char	*get_ansi_escape(char const *color)
{
	if (!ft_strcmp(color, "black") || !ft_strcmp(color, "BLACK"))
		return (ANSI_BLACK);
	else if (!ft_strcmp(color, "red") || !ft_strcmp(color, "RED"))
		return (ANSI_RED);
	else if (!ft_strcmp(color, "green") || !ft_strcmp(color, "GREEN"))
		return (ANSI_GREEN);
	else if (!ft_strcmp(color, "yellow") || !ft_strcmp(color, "YELLOW"))
		return (ANSI_YELLOW);
	else if (!ft_strcmp(color, "blue") || !ft_strcmp(color, "BLUE"))
		return (ANSI_BLUE);
	else if (!ft_strcmp(color, "magenta") || !ft_strcmp(color, "MAGENTA"))
		return (ANSI_MAGENTA);
	else if (!ft_strcmp(color, "cyan") || !ft_strcmp(color, "CYAN"))
		return (ANSI_CYAN);
	else if (!ft_strcmp(color, "white") || !ft_strcmp(color, "WHITE"))
		return (ANSI_WHITE);
	else
		return (EMPTY_STR);
}

static char	*get_ansi_escape_bg(char const *color)
{
	if (!ft_strcmp(color, "black") || !ft_strcmp(color, "BLACK"))
		return (ANSI_BLACK);
	else if (!ft_strcmp(color, "red") || !ft_strcmp(color, "RED"))
		return (ANSI_RED);
	else if (!ft_strcmp(color, "green") || !ft_strcmp(color, "GREEN"))
		return (ANSI_GREEN);
	else if (!ft_strcmp(color, "yellow") || !ft_strcmp(color, "YELLOW"))
		return (ANSI_YELLOW);
	else if (!ft_strcmp(color, "blue") || !ft_strcmp(color, "BLUE"))
		return (ANSI_BLUE);
	else if (!ft_strcmp(color, "magenta") || !ft_strcmp(color, "MAGENTA"))
		return (ANSI_MAGENTA);
	else if (!ft_strcmp(color, "cyan") || !ft_strcmp(color, "CYAN"))
		return (ANSI_CYAN);
	else if (!ft_strcmp(color, "white") || !ft_strcmp(color, "WHITE"))
		return (ANSI_WHITE);
	else
		return (EMPTY_STR);
}

static char	*get_ansi_escape_bright(char const *color)
{
	if (!ft_strcmp(color, "b_black") || !ft_strcmp(color, "B_BLACK"))
		return (ANSI_BLACK);
	else if (!ft_strcmp(color, "b_red") || !ft_strcmp(color, "B_RED"))
		return (ANSI_RED);
	else if (!ft_strcmp(color, "b_green") || !ft_strcmp(color, "B_GREEN"))
		return (ANSI_GREEN);
	else if (!ft_strcmp(color, "b_yellow") || !ft_strcmp(color, "B_YELLOW"))
		return (ANSI_YELLOW);
	else if (!ft_strcmp(color, "b_blue") || !ft_strcmp(color, "B_BLUE"))
		return (ANSI_BLUE);
	else if (!ft_strcmp(color, "b_magenta") || !ft_strcmp(color, "B_MAGENTA"))
		return (ANSI_MAGENTA);
	else if (!ft_strcmp(color, "b_cyan") || !ft_strcmp(color, "B_CYAN"))
		return (ANSI_CYAN);
	else if (!ft_strcmp(color, "b_white") || !ft_strcmp(color, "B_WHITE"))
		return (ANSI_WHITE);
	else
		return (EMPTY_STR);
}

static char	*get_ansi_escape_bg_bright(char const *color)
{
	if (!ft_strcmp(color, "b_black") || !ft_strcmp(color, "B_BLACK"))
		return (ANSI_BLACK);
	else if (!ft_strcmp(color, "b_red") || !ft_strcmp(color, "B_RED"))
		return (ANSI_RED);
	else if (!ft_strcmp(color, "b_green") || !ft_strcmp(color, "B_GREEN"))
		return (ANSI_GREEN);
	else if (!ft_strcmp(color, "b_yellow") || !ft_strcmp(color, "B_YELLOW"))
		return (ANSI_YELLOW);
	else if (!ft_strcmp(color, "b_blue") || !ft_strcmp(color, "B_BLUE"))
		return (ANSI_BLUE);
	else if (!ft_strcmp(color, "b_magenta") || !ft_strcmp(color, "B_MAGENTA"))
		return (ANSI_MAGENTA);
	else if (!ft_strcmp(color, "b_cyan") || !ft_strcmp(color, "B_CYAN"))
		return (ANSI_CYAN);
	else if (!ft_strcmp(color, "b_white") || !ft_strcmp(color, "B_WHITE"))
		return (ANSI_WHITE);
	else
		return (EMPTY_STR);
}

void		ft_putstr_fd_color(char const *s, char const *color, int bg, int fd)
{
	if (bg)
	{
		ft_putstr_fd(get_ansi_escape_bg(color), fd);
		ft_putstr_fd(get_ansi_escape_bg_bright(color), fd);
	}
	else
	{
		ft_putstr_fd(get_ansi_escape(color), fd);
		ft_putstr_fd(get_ansi_escape_bright(color), fd);
	}
	while (*s)
		ft_putchar_fd(*(s++), fd);
	ft_putstr_fd(ANSI_RESET, fd);
}
