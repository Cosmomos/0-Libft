/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwattez <vwattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:20:37 by vwattez           #+#    #+#             */
/*   Updated: 2026/10/23 16:20:37 by vwattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nb, size_t size);
void	*ft_memset(void *p, int val, size_t nb);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memchr(const void *mem_block, int ch, size_t size);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t destSize);
size_t	ft_strlcpy(char *dest, const char *src, size_t destSize);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_atoi(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
int		ft_memcmp(const void *p1, const void *p2, size_t size);

#endif