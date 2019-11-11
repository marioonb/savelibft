/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:53:29 by mbelorge          #+#    #+#             */
/*   Updated: 2019/11/06 17:55:36 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int	ft_atoi(const char *str); 	
////void	ft_bzero(void *s, size_t n); 
int 	ft_isascii (int c); 
int 	ft_isalpha(int c); 
int	    ft_isdigit (int nombre);
int 	ft_isalnum (int c); 
int 	ft_isprint (int c); 
size_t	ft_strlen (const char *str); 
char 	*ft_strdup (const char *s1); 
int 	ft_strncmp (const char *s1, const char *s2, size_t size); 
char	*ft_strchr (const char *s, int c); 
char	*ft_strrchr (const char *s, int c); 
//// char	*ft_strnstr (const char *haystack, const char *needle, size_t len); 
//size_t	ft_strlcpy (char *dst, const char *src, size_t dst size); 
//size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); 
int 	ft_toupper (int c);
int 	ft_tolower (int c); 
//// void 	*ft_calloc (size_t count, size_t size); 

void 	*ft_memmove (void *dst, const void *src, size_t len);
void 	*ft_memset (void *b, int c, size_t len);  
////void 	*ft_memccpy (void *dst, const void *src, int c, size_t n);
void 	*ft_memcpy (void *dst, const void *src, size_t n);  
////void	*ft_memchr (const void *s, int c, size_t n); 
////int 	ft_memcmp (const void *s1, const void *s2, size_t n); 

#endif
