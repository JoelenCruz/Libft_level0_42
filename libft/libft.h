/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcruz-da <jcruz-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:47:28 by jcruz-da          #+#    #+#             */
/*   Updated: 2022/11/06 17:10:30 by jcruz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Include external libraries
//# include <stdarg.h>
# include <stdlib.h> //biblioteca do maloc
# include <stddef.h> //biblioteca do sizeof
# include <unistd.h> //biblioteca do write  

// =============================================================================
// Lists struct
// =============================================================================

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

// =============================================================================
// Part 1 - Libc Functions
// =============================================================================

// <ctype.h> functions:
/**
 * @brief Find if a Integer is alphanumeric.
 * @param c Integer containg a position in ASCII.
 * @return 0 if false or 1 if true.
**/
int			ft_isalnum(int c);

/**
 * @brief Find if a Integer is alphabetic.
 * @param c Integer containg a position in ASCII.
 * @return 0 if false or 1 if true.
**/
int			ft_isalpha(int c);

/**
 * @brief Find if a Integer is ASCII.
 * @param c Integer containg a position in ASCII.
 * @return 0 if false or 1 if true.
**/
int			ft_isascii(int c);

/**
 * @brief Find if a Integer is a digit.
 * @param c Integer containg a position in ASCII.
 * @return 0 if false or 1 if true.
**/
int			ft_isdigit(int c);

/**
 * @brief Find if a Integer is printable.
 * @param c Integer containg a position in ASCII.
 * @return 0 if false or 1 if true.
**/
int			ft_isprint(int c);

/**
 * @brief Lowercase a Integer accordingly with ASCII.
 * @param c Integer containg a position in ASCII.
 * @return The lowercase Integer.
**/
int			ft_tolower(int c);

/**
 * @brief Uppercase a Integer accordingly with ASCII.
 * @param c Integer containg a position in ASCII.
 * @return The uppercase Integer.
**/
int			ft_toupper(int c);

// <string.h> functions:
// Memory:

/**
 * @brief Compares the first n bytes of memory area.
 * @param str1 Pointer to a block of memory.
 * @param str2 Pointer to a block of memory.
 * @param n The number of bytes being compared.
 * @return if 0 indicates str1 is equals to str2.
 * @return if >0 indicates str1 is less than str2.
 * @return if <0 indicates str2 is less than str1.
**/
int			ft_memcmp(const void *str1, const void *str2, size_t n);

/**
 * @brief Searches fot he first occurence of the character.
 * @param str Pointer to block of memory where the search is performed.
 * @param c Integer searched byte per byte.
 * @param n The number of bytes being analyzed.
 * @return Pointer to the matching byte or NULL if it soes not occur.
**/
void		*ft_memchr(const void *str, int c, size_t n);

/**
 * @brief Copies the character c to the first n characters of a string.
 * @param str Pointer to block of memory to fill.
 * @param c Value to be set.
 * @param n The number of bytes to set the value.
 * @return Pointer to the memory area str.
**/
void		*ft_memset(void *b, int c, size_t n);

/**
 * @brief Copies n character from memory area src to memory area dest.
 * @param dest Pointer to the destination array.
 * @param src Pointer to the source of data to be copied.
 * @param n The number of bytes to be copied.
 * @return Pointer to to destination.
**/
void		*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copies character from src to dst, in case of overlapping memory blocks.
 * @param dst Pointer to the dst array where the content is to be copied.
 * @param src Pointer to the src of data to be copied.
 * @param n The number of bytes to be copied.
 * @return Pointer to the destination.
 
**/
void		*ft_memmove(void *dst, const void *src, size_t len);

// Strings:
/**
 * @brief Computes the length of the string, not including the null character.
 * @param str String whose length is to be found.
 * @return Length of string.
**/
size_t		ft_strlen(const char *str);

/**
 * @brief Compares the first (at most) n bytes of s1 and s2.
 * @param s1 String to be compared.
 * @param s2 String to be compared.
 * @param n Size in which s1 and s2 will be compared.
 * @return if >=0 indicates the value is found.
 * @return if <0 indicates the value is not found.
**/
int			ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Duplicate a String.
 * @param str String to be duplicated.
 * @return Pointer to the duplicated string.
 * @return NULL is insufficient memory was available.
**/
char		*ft_strdup(const char *s1);

/**
 * @brief Searches for the first occurence of the character.
 * @param str String to be scanned.
 * @param c The character to be searched in str.
 * @return Pointer the first occurence of the character.
 * @return NULL if the character is not found.
**/
char		*ft_strchr(const char *s, int c);

/**
 * @brief Searches for the last occurence of the character.
 * @param str String to be scanned.
 * @param c The character to be searched in str.
 * @return Pointer the first occurence of the character.
 * @return NULL if the character is not found.
**/
char		*ft_strrchr(const char *s, int c);

// BSD (<bsd/string.h>):
/**
 * @brief Copies up to size -1 character from src to dst.
 * @param dst Pointer to dst where the content is to be copied.
 * @param src Pointer to the source of data to be copied.
 * @return Total length of the String tried to create.
**/
size_t		ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * @brief Append to size -1 character from src to the end of dst.
 * @param dst Pointer to the dst array where the content is to be appended.
 * @param src Pointer to the source of data to be copied.
 * @return Total length of the String tried to create.
**/
size_t		ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief Locates the first occurence of the null-terminated String s2 in the s1.
 * @param s1 Pointer to be searched.
 * @param s2 Pointer that will be passed to search.
 * @param n Size limit to where to search s2.
 * @return Pointer to the first character where s2 is found.
 * @return If s2 is empty, s1 is returned.
 * @return If s2 does not occurs in s1 NULL is returned.
**/
char		*ft_strnstr(const char *s1, const char *s2, size_t n);

// <stdlib.h> functions:
/**
 * @brief Converts the String to Integer.
 * @param str String representation of an Integer.
 * @return If converted is done, return the Integer number.
 * @return If the converted is not done, return zero.
**/
int			ft_atoi(const char *str);

/**
 * @brief Allocates the requested memory.
 * @param count Number of elements to be allocated.
 * @param size Size of elements.
 * @return If converted is done, return the Integer number.
 * @return Pointer to the allocated memory, or NULL.
**/
void		*ft_calloc(size_t count, size_t size);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
void		ft_bzero(void *s, size_t n);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
char		*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
char		*ft_strnstr(const char *s1, const char *s2, size_t len);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
char		**ft_split(char const *s, char c);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
char		*ft_itoa(int n);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
void		ft_putchar_fd(char c, int fd);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
void		ft_putstr_fd(char *s, int fd);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
void		ft_putendl_fd(char *s, int fd);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
void		ft_putnbr_fd(int n, int fd);

// =============================================================================
// Part 2 - Bonus part Functions
// =============================================================================

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
t_list		*ft_lstnew(void *content);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
void		ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
int			ft_lstsize(t_list *lst);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
t_list		*ft_lstlast(t_list *lst);

/**
 * @brief Sets the fist n bytes of the area starting as s to zero.
 * @param s Pointer for memory block setted.
 * @param n Size of the memory block.
 * @return None.
**/
void		ft_lstadd_back(t_list **lst, t_list *new);

void		ft_lstdelone(t_list *lst, void (*del)(void*));

void		ft_lstclear(t_list **lst, void (*del)(void*));

void		ft_lstiter(t_list *lst, void (*f)(void *));

t_list		*ft_lstnew(void *content);

void		ft_lstadd_front(t_list **lst, t_list *new);

void		ft_lstiter(t_list *lst, void (*f)(void *));

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
