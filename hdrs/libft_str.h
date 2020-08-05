/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 13:47:43 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/05 19:05:07 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_H
# define LIBFT_STR_H

# include "libft.h"

/**
 * \fn		int ft_isalnum(int c)
 * \brief	Reproduction of isalnum() function (test whether c is a
 * 		character of class alpha or digit in the current locale).
 * \return	1 if c is an alphanumeric character, otherwise 0.
 */
int		ft_isalnum(int c);

/**
 * \fn		int ft_isalpha(int c)
 * \brief	Reproduction of isalpha() function (test whether c is a character
 * 		of class alpha in the current locale).
 * \return	1 if c is an alphabetic character, otherwise 0.
 */
int		ft_isalpha(int c);

/**
 * \fn		int ft_isascii(int c)
 * \brief	Reproduction of isascii() function (test whether c is a 7-bit
 * 		US-ASCII character code).
 * \return	1 if c is a 7-bit US-ASCII character code between 0 and decimal
 * 		127 inclusive, otherwise 0.
 */
int		ft_isascii(int c);

/**
 * \fn		int ft_isdigit(int c)
 * \brief	Reproduction of isdigit() function (test whether c is a character of
 * 		class digit in the current locale).
 * \return	1 if c is a decimal digit, otherwise 0.
 */
int		ft_isdigit(int c);

/**
 * \fn		int ft_isprint(int c)
 * \brief	Reproduction of isprint() function (test whether c is a character of
 * 		class print in the current locale).
 * \return	1 if c is a printable character, otherwise 0.
 */
int		ft_isprint(int c);

/**
 * \fn		char *ft_strappend(char **dst, const char *src)
 * \brief	Extends an allocated string by appending another string at the end
 * 		of its current value.
 * \param	dst Address of string to extend
 * \param	src String to append
 * \return	Pointer to the new joined string.
 * 		If one or both strings in argument are null, return a null pointer.
 */
char	*ft_strappend(char **dst, const char *src);

/**
 * \fn		char *ft_strcat(char *dest, const char *src)
 * \brief	Reproduction of strcat() function (appends a string to another one).
 * \param	dest String to extend
 * \param	src String to append
 * \return	Pointer to the resulted string.
 */
char	*ft_strcat(char *dest, const char *src);

/**
 * \fn		char *ft_strchr(const char *s, int c)
 * \brief	Reproduction of strchr() function (locate the first occurrence of a
 * 		character in a string).
 * \return	Pointer to the matched character, or a null pointer if the character
 * 		was not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * \fn		char *ft_strchrnull(const char *s, int c)
 * \brief	Reproduction of strchrnul() function (similar to strchr(), except
 * 		that if the character is not found in the string, then it returns a
 * 		pointer to the null byte at the end of the string, rather than NULL).
 * \return	Pointer to the matched character, or a pointer to the null byte at
 * 		the end of the string if the character is not found.
 */
char	*ft_strchrnull(const char *s, int c);

/**
 * \fn		void ft_strclr(char *s)
 * \brief	Sets every character of the string to the value '\\0'.
 */
void	ft_strclr(char *s);

/**
 * \fn		int ft_strcmp(const char *s1, const char *s2)
 * \brief	Reproduction of strcmp() function (compare two strings).
 * \return	Integer equal to the difference between the values of the first pair
 * 		of bytes (both interpreted as type unsigned char) that differ in the
 * 		strings being compared.
 */
int		ft_strcmp(const char *s1, const char *s2);

/**
 * \fn		char *ft_strcpy(char *dest, const char *src)
 * \brief	Reproduction of strcpy() function (copy a string into an array,
 * 		including the terminating null byte).
 * \param	dest Array
 * \param	src String to copy
 * \return	Pointer to the destination string.
 */
char	*ft_strcpy(char *dest, const char *src);

/**
 * \fn		void ft_strctrim_left(char **a_str, char const c)
 * \brief	Replace all leading characters of a non-null string equal to c by
 * 		'\\0'.
 * \param	a_str Address of the string
 * \param	c Character to replace
 */
void	ft_strctrim_left(char **a_str, char const c);

/**
 * \fn		void ft_strctrim_right(char **a_str, char const c)
 * \brief	Replace all trailing characters of a non-null string equal to c by
 * 		'\\0'.
 * \param	a_str Address of the string
 * \param	c Character to replace
 */
void	ft_strctrim_right(char **a_str, char const c);

/**
 * \fn		void ft_strdel(char **as)
 * \brief	Takes as a parameter the address of a string that need to be freed,
 * 			then sets its pointer to null.
 */
void	ft_strdel(char **as);

/**
 * \fn		char *ft_strdup(const char *s)
 * \brief	Reproduction of strdup() function (duplicate a string)
 * \return	Pointer to the new allocated string, or NULL if allocation failed.
 */
char	*ft_strdup(const char *s);

/**
 * \fn		int ft_strequ(char const *s1, char const *s2)
 * \brief	Lexicographical comparison between s1 and s2.
 * \return	1 if the two strings are identical, or 0 otherwise.
 */
int		ft_strequ(char const *s1, char const *s2);

/**
 * \fn		char *ft_strinsert(char **dest, char const *src, t_u32 index)
 * \brief	Allocate and returns a string resulting of an insertion of src
 * 		string in dest string at given index.
 * \param	dest Address of receiving string
 * \param	src String to insert
 * \param	index Index of dest string where src will be inserted
 * \return	Pointer on new string, or NULL if allocation failed.
 */
char	*ft_strinsert(char **dest, char const *src, t_u32 index);

/**
 * \fn		void ft_striter(char *s, void (*f)(char *))
 * \brief	Applies the function f to each character of the string passed as
 * 		argument.
 */
void	ft_striter(char *s, void (*f)(char *));

/**
 * \fn		void ft_striteri(char *s, void (*f)(unsigned int, char *))
 * \brief	Applies the function f to each character of the string passed as
 * 		argument, and passing its index as first argument.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * \fn		char *ft_strjoin(const char *s1, const char *s2)
 * \brief	Allocates and returns a “fresh” string ending with a null byte,
 * 		result of the concatenation of s1 and s2.
 * \param	s1 Preffix string
 * \param	s2 Suffix string
 * \return	Pointer to the "fresh" string.
 * 		If the allocation fails, returns NULL.
 */
char	*ft_strjoin(const char *s1, const char *s2);

/**
 * \fn		char *ft_strjoin_free(char *s1, char *s2, t_u8 num_param)
 * \brief	Allocates and returns a “fresh” string ending with a null byte,
 * 		result of the concatenation of s1 and s2, and free those strings
 * 		depending the value of num_param
 * \param	s1 Preffix string
 * \param	s2 Suffix string
 * \param	num_of_param Strings to free (0 for none, 1 for s1, 2 for s2,
 * 					and 3 for both)
 * \return	Pointer to the "fresh" string.
 * 		If the allocation fails, returns NULL.
 */
char	*ft_strjoin_free(char *s1, char *s2, t_u8 num_param);

/**
 * \fn		size_t ft_strlcat(char *dest, const char *src, size_t size)
 * \brief	Reproduction of strlcat() function (appends a src string to the end
 * 		of dest, at most size - strlen(dest) - 1 bytes).
 * \param	dest String to extend
 * \param	src String to append
 * \param	size Size of buffer
 * \return	Intended length of resulting string (initial length of dest plus
 * 		length of src).
 * 		If return value is greater than size, then it means that the buffer
 * 		size was too low and some data was lost.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/**
 * \fn		size_t ft_strlcpy(char *dest, const char *src, size_t size)
 * \brief	Reproduction of strlcpy() function (copy a string into an array,
 * 		up to size - 1 characters).
 * \param	dest Array
 * \param	src String to copy
 * \param	size Size of buffer
 * \return	Length of src.
 * 		If return value is lower than size, then it means that the buffer
 * 		size was too low and some data was lost.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/**
 * \fn		size_t ft_strlen(const char *s)
 * \brief	Reproduction of strlen() function (get length of fixed size string).
 * \return	Length of the string.
 */
size_t	ft_strlen(const char *s);

/**
 * \fn		char *ft_strljoin_free(char *s1, char *s2, t_u8 num_param,
 * 		size_t size)
 * \brief	Allocates and returns a “fresh” string ending with a null byte,
 * 		result of the concatenation of s1 and s2 up to size - 1 bytes,
 * 		and free those strings depending the value of num_param
 * \param	s1 Preffix string
 * \param	s2 Suffix string
 * \param	num_of_param Strings to free (0 for none, 1 for s1, 2 for s2,
 * 					and 3 for both)
 * \param	size Size of buffer
 * \return	Pointer to the "fresh" string.
 * 		If the allocation fails, returns NULL.
 */
char	*ft_strljoin_free(char *s1, char *s2, t_u8 num_param,
	size_t size);

/**
 * \fn		char *ft_strmap(const char *s, char (*f)(char))
 * \brief	Applies the function f to each character of the string given as
 * 		argument to create a “fresh” new string resulting from the successive
 * 		applications of f.
 * \return	Pointer to the "fresh" string.
 * 		If the allocation fails or s is NULL, returns NULL.
 */
char	*ft_strmap(const char *s, char (*f)(char));

/**
 * \fn		char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
 * \brief	Applies the function f to each character of the string passed as
 * 		argument by giving its index as first argument to create a “fresh” new
 * 		string resulting from the successive applications of f.
 * \return	Pointer to the "fresh" string.
 * 		If the allocation fails or s is empty, returns NULL.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

/**
 * \fn		char *ft_strncat(char *dest, const char *src, size_t len)
 * \brief	Reproduction of strncat() function (appends at most len bytes of a
 * 		string to another one).
 * \param	dest String to extend
 * \param	src String to append
 * \param	len	Length of src to copy
 * \return	Pointer to the resulted string.
 */
char	*ft_strncat(char *dest, const char *src, size_t n);

/**
 * \fn		int ft_strncmp(const char *s1, const char *s2, size_t n)
 * \brief	Reproduction of strncmp() function (compare up to n bytes of two
 * 		strings).
 * \return	Integer equal to the difference between the values of the first pair
 * 		of bytes (both interpreted as type unsigned char) that differ in the
 * 		strings being compared. If n is equal to zero, this function returns 0.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * \fn		char *ft_strncpy(char *dest, const char *src, size_t n)
 * \brief	Reproduction of strncpy() function (copy at most n bytes of a string
 * 		into an array).
 * \param	dest Array
 * \param	src String to copy
 * \param	n Number of bytes to copy
 * \return	Pointer to the destination string.
 */
char	*ft_strncpy(char *dest, const char *src, size_t n);

/**
 * \fn		int ft_strnequ(char const *s1, char const *s2, size_t n)
 * \brief	Lexicographical comparison between s1 and s2 up to n characters or
 * 		until a '\\0' is reached.
 * \return	1 if the two strings are identical, or 0 otherwise.
 */
int		ft_strnequ(char const *s1, char const *s2, size_t n);

/**
 * \fn		char *ft_strnew(size_t size)
 * \brief	Allocates and returns a “fresh” string ending with '\\0' (each
 * 		character of the string is initialized at '\\0').
 * \return	Pointer on string, or NULL if allocation failed.
 */
char	*ft_strnew(size_t size);

/**
 * \fn		char *ft_strnstr(const char *s1, const char *s2, size_t len)
 * \brief	Reproduction of strnstr() function (locates a substring in a string,
 * 		where not more than len characters are searched).
 * \param	s1 String where substring is searched
 * \param	s2 Substring to find
 * \param	len Number of characters to search
 * \return	Pointer to the first character of the first occurrence of s2 in s1.
 * 		If s2 is an empty string, s2 is returned.
 * 		If s2 occurs nowhere in s1, NULL is returned.
 */
char	*ft_strnstr(const char *s1, const char *s2, size_t len);

/**
 * \fn		char *ft_strpad_left(const char *s, char const c, t_u32 n)
 * \brief	Allocates and returns a string which is a copy of s string with n
 * 		number of c character added at the start.
 * \return	Pointer on resulting string.
 * 		If the allocation failed or s is empty, return NULL.
 */
char	*ft_strpad_left(const char *s, char const c, t_u32 n);

/**
 * \fn		char *ft_strpad_left_free(char **as, char const c, t_u32 n)
 * \brief	Apply ft_strpad_left() function to a string. If len is equal to
 * 		zero, nothing happens.
 */
void	ft_strpad_left_free(char **as, char const c, t_u32 len);

/**
 * \fn		char *ft_strrchr(const char *s, int c)
 * \brief	Reproduction of strrchr() function (locate the last occurrence of a
 * 		character in a string).
 * \return	Pointer to the matched character, or a null pointer if the character
 * 		was not found.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * \fn		char ** ft_strsplit(char const *s, char c)
 * \brief	Allocates and returns an array of “fresh” strings (all ending with
 * 		'\\0', including the array itself) obtained by spliting s using the
 * 		character c as a delimiter.
 * \return	Array of "fresh" strings.
 * 		If an allocation fails, free all elements allocated and return NULL.
 */
char	**ft_strsplit(const char *s, char c);

/**
 * \fn		char ** ft_strssplit(char const *s, char *char_set)
 * \brief	Allocates and returns an array of “fresh” strings (all ending with
 * 		'\\0', including the array itself) obtained by spliting s using all
 * 		characters contained in char_set string as a delimiter.
 * \return	Array of "fresh" strings.
 * 		If an allocation fails, free all elements allocated and return NULL.
 */
char	**ft_strssplit(const char *s, char *char_set);

/**
 * \fn		char *ft_strstr(const char *s1, const char *s2)
 * \brief	Reproduction of strstr() function (locate a substring in a string)
  * \param	s1 String where substring is searched
 * \param	s2 Substring to find
 * \return	Pointer to the first character of the first occurrence of s2 in s1.
 * 		If s2 is an empty string, s2 is returned.
 * 		If s2 occurs nowhere in s1, NULL is returned.
 */
char	*ft_strstr(const char *s1, const char *s2);

/**
 * \fn		char *ft_strsub(const char *s, unsigned int start, size_t len)
 * \brief	Allocates and returns a “fresh” substring from the string given as
 * 		argument.
 * \param	s String from which create the substring
 * \param	start Start index of the substring
 * \param	len	Size of the substring
 * \return	Pointer on substring.
 * 		If start and len aren’t refering to a valid substring, the behavior is
 * 		undefined.
 * 		If the allocation fails, the function returns NULL.
 */
char	*ft_strsub(const char *s, unsigned int start, size_t len);

/**
 * \fn		char *ft_strtolower(char *str)
 * \brief	Apply ft_tolower() function to all characters in a string.
 * \return	Pointer on the string.
 */
char	*ft_strtolower(char *str);

/**
 * \fn		char *ft_strtrim(char const *s)
 * \brief	Allocates and returns a copy of the string given as argument without
 * 		whitespaces (' ', '\\n' and '\\t') at the beginning or at the end of the
 * 		string.
 * \return	Pointer on the string.
 * 		If the allocation fails or s is empty, return NULL.
 */
char	*ft_strtrim(char const *s);

/**
 * \fn		int ft_tolower(int c)
 * \brief	Reproduction of tolower() function (return character as lowercase).
 * \return	Character as int.
 */
int		ft_tolower(int c);

/**
 * \fn		int ft_toupper(int c)
 * \brief	Reproduction of toupper() function (return character as uppercase).
 * \return	Character as int.
 */
int		ft_toupper(int c);

/**
 * \fn		size_t ft_wstrlen(wchar_t *str)
 * \brief	Get length of fixed size unicode string.
 * \return	Length of the string.
 */
size_t	ft_wstrlen(wchar_t *str);

#endif
