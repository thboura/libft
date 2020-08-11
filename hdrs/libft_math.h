/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thboura <thboura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 08:58:35 by kguibout          #+#    #+#             */
/*   Updated: 2020/08/11 12:32:43 by thboura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

# include <unistd.h>
# include "libft_bitsize.h"
# include <stdbool.h>
# include <math.h>

/**
 * \def		M_PI
 * \brief	Personal definition of Pi.
 */
# ifndef M_PI
#  define M_PI 3.14159265358979323846
# endif

/**
 * \typedef	t_vec2i
 * \brief	Typedef of s_vec2i structure.
 */
typedef struct s_vec2i		t_vec2i;
/**
 * \struct	s_vec2i
 * \brief	2D vector coordinates as int.
 */
struct						s_vec2i
{
	int		x;
	int		y;
};

/**
 * \typedef	t_vec2ui
 * \brief	Typedef of s_vec2ui structure.
 */
typedef struct s_vec2ui		t_vec2ui;
/**
 * \struct	s_vec2ui
 * \brief	2D vector coordinates as unsigned int.
 */
struct						s_vec2ui
{
	unsigned int	x;
	unsigned int	y;
};

/**
 * \typedef	t_vec2f
 * \brief	Typedef of s_vec2f structure.
 */
typedef struct s_vec2f		t_vec2f;
/**
 * \struct	s_vec2f
 * \brief	2D vector coordinates as float.
 */
struct						s_vec2f
{
	float	x;
	float	y;
};

/**
 * \typedef	t_vec2d
 * \brief	Typedef of s_vec2d structure.
 */
typedef struct s_vec2d		t_vec2d;
/**
 * \struct	s_vec2d
 * \brief	2D vector coordinates as double.
 */
struct						s_vec2d
{
	double	x;
	double	y;
};

/**
 * \typedef	t_vec2ld
 * \brief	Typedef of s_vec2ld structure.
 */
typedef struct s_vec2ld		t_vec2ld;
/**
 * \struct	s_vec2ld
 * \brief	2D vector coordinates as long double.
 */
struct						s_vec2ld
{
	long double	x;
	long double	y;
};

/**
 * \typedef	t_vec3i
 * \brief	Typedef of s_vec3i structure.
 */
typedef struct s_vec3i		t_vec3i;
/**
 * \struct	s_vec3i
 * \brief	3D vector coordinates as int.
 */
struct						s_vec3i
{
	int		x;
	int		y;
	int		z;
};

/**
 * \typedef	t_vec3f
 * \brief	Typedef of s_vec3f structure.
 */
typedef struct s_vec3f		t_vec3f;
/**
 * \struct	s_vec3f
 * \brief	3D vector coordinates as float.
 */
struct						s_vec3f
{
	float	x;
	float	y;
	float	z;
};

/**
 * \typedef	t_vec3d
 * \brief	Typedef of s_vec3d structure.
 */
typedef struct s_vec3d		t_vec3d;
/**
 * \struct	s_vec3d
 * \brief	3D vector coordinates as double.
 */
struct						s_vec3d
{
	double	x;
	double	y;
	double	z;
};

/**
 * \typedef	t_vec4f
 * \brief	Typedef of s_vec4f structure.
 */
typedef struct s_vec4f		t_vec4f;
/**
 * \struct	s_vec4f
 * \brief	4D vector coordinates as float.
 */
struct						s_vec4f
{
	float	x;
	float	y;
	float	z;
	float	w;
};

/**
 * \typedef	t_complex
 * \brief	Typedef of s_complex structure.
 */
typedef struct s_complex	t_complex;
/**
 * \struct	s_complex
 * \brief	Handler for complex numbers.
 */
struct						s_complex
{
	double	r;	/**< Real part */
	double	i;	/**< Imaginary part*/
};

/*
**	clamp.c
*/

/**
 * \fn		long clampl(long a, long min, long max)
 * \brief	Clamps a long value to an inclusive range.
 * \param	a Value to be clamped
 * \param	min Lower bound of the result
 * \param	max Upper bound of the result
 * \return	a if min <= a <= max, min if a < min, or max if max < a.
 */
long						clampl(long a, long min, long max);
/**
 * \fn		int clampi(int a, int min, int max)
 * \brief	Clamps an int value to an inclusive range.
 * \param	a Value to be clamped
 * \param	min Lower bound of the result
 * \param	max Upper bound of the result
 * \return	a if min <= a <= max, min if a < min, or max if max < a.
 */
int							clampi(int a, int min, int max);
/**
 * \fn		float clampf(float a, float min, float max)
 * \brief	Clamps a float value to an inclusive range.
 * \param	a Value to be clamped
 * \param	min Lower bound of the result
 * \param	max Upper bound of the result
 * \return	a if min <= a <= max, min if a < min, or max if max < a.
 */
float						clampf(float a, float min, float max);

/*
**	ft_pow.c
*/

/**
 * \fn		long ft_pow(long nb, size_t e)
 * \brief	Simple implementation of pow() function (power function).
 *
 * \sa		This function only works for positive exponents.
 * \param	nb Base number
 * \param	e Exponent (or power) number
 * \return	Value of nb to the power of e.
 * \note	If the result overflows, a range error occurs, and the return is
 * 		undefined.
 */
long						ft_pow(long nb, size_t e);

/*
**	lerp.c
*/

/**
 * \fn		float lerpf(float v0, float v1, float t)
 * \brief	Computes the linear interpolation method between two float inputs
* 		for a parameter t.
 *
 * \sa		If t is not in the closed unit interval [0, 1], the result is a
 * 		linear extrapolation.
 * \sa		The methode used is a precise method, which guarantees v = v1
 * 		when t = 1.
 * \return	Result of linear interpolation as float (see notes).
 * \note	If t == 0, the result is equal to v0.
 * 		\n	If t == 1, the result is equal to v1.
 * 		\n	If t >= 0 && t <= 1, the result is finite.
 * 		\n	If isfinite(t) && v0 == v1, the result is equal to v0.
 */
float						lerpf(float v0, float v1, float t);
/**
 * \fn		int lerpi(int v0, int v1, float t)
 * \brief	Computes the linear interpolation method between two int inputs
 * 		for a parameter t.
 *
 * \sa		If t is not in the closed unit interval [0, 1], the result is a
 * 		linear extrapolation.
 * 		\n	The methode used is a precise method, which guarantees v = v1
 * 		when t = 1.
 * \return	Result of linear interpolation as int (see notes).
 * \note	If t == 0, the result is equal to v0.
 * 		\n	If t == 1, the result is equal to v1.
 * 		\n	If t >= 0 && t <= 1, the result is finite.
 * 		\n	If isfinite(t) && v0 == v1, the result is equal to v0.
 */
int							lerpi(int min, int max, float t);

/*
**	log2.c
*/

/**
 * \fn		long ft_log2(long n)
 * \brief	Simple implementation of log2() function (base-2 logarithmic
 * 		function).
 *
 * \sa		This function does not handle NaN and negative number cases
 * 		(undefined behaviour or returns 0).
 * \return	Base 2 logarithm of n.
 */
long						ft_log2(long n);

/*
**	log10.c
*/

/**
 * \fn		long ft_log10(long n)
 * \brief	Simple implementation of log10() function (base-10 logarithmic
 * 		function).
 *
 * \sa		This function does not handle NaN and negative number cases
 * 		(undefined behaviour or returns 0).
 * \return	Base 10 logarithm of n.
 */
long						ft_log10(long n);

/*
**	max.c
*/

/**
 * \fn		long maxl(long a, long b)
 * \brief	Simple implementation of max() C++ function (return the largest of
 * 		two values) with long.
 * \return	Largest of the values.
 */
long						maxl(long a, long b);
/**
 * \fn		int maxi(int a, int b)
 * \brief	Simple implementation of max() C++ function (return the largest of
 * 		two values) with int.
 * \return	Largest of the values.
 */
int							maxi(int a, int b);
/**
 * \fn		float maxf(float a, float b)
 * \brief	Simple implementation of max() C++ function (return the largest of
 * 		two values) with float.
 * \return	Largest of the values.
 */
float						maxf(float a, float b);

/*
**	min.c
*/

/**
 * \fn		long minl(long a, long b)
 * \brief	Simple implementation of min() C++ function (return the smallest of
 * 		two values) with long.
 * \return	Smallest of the values.
 */
long						minl(long a, long b);
/**
 * \fn		int mini(int a, int b)
 * \brief	Simple implementation of min() C++ function (return the smallest of
 * 		two values) with int.
 * \return	Smallest of the values.
 */
int							mini(int a, int b);
/**
 * \fn		float minf(float a, float b)
 * \brief	Simple implementation of min() C++ function (return the smallest of
 * 		two values) with float.
 * \return	Smallest of the values.
 */
float						minf(float a, float b);

/*
**	radian.c
*/

/**
 * \fn		float radian(float degre)
 * \brief	Converts a value in degrees into radians.
 * \return	Radian value.
 */
float						radian(float degre);

/*
**	vec2.c
*/

/**
 * \fn		t_vec2f vec2f(float x, float y)
 * \brief	Creates a 2D vector with float coordinates from parameters.
 * \return	Created structure (not allocated).
 */
t_vec2f						vec2f(float x, float y);
/**
 * \fn		t_vec2i vec2i(int x, int y)
 * \brief	Creates a 2D vector with int coordinates from parameters.
 * \return	Created structure (not allocated).
 */
t_vec2i						vec2i(int x, int y);
/**
 * \fn		t_vec2d vec2d(double x, double y)
 * \brief	Creates a 2D vector with double coordinates from parameters.
 * \return	Created structure (not allocated).
 */
t_vec2d						vec2d(double x, double y);
/**
 * \fn		t_vec2ui vec2ui(t_u32 x, t_u32 y)
 * \brief	Creates a 2D vector with unsigned int coordinates from parameters.
 * \return	Created structure (not allocated).
 */
t_vec2ui					vec2ui(t_u32 x, t_u32 y);

/*
**	vec2_add.c
*/

/**
 * \fn		t_vec2i vec2i_add(t_vec2i vec1, t_vec2i vec2)
 * \brief	Returns a 2D vector with int coordinates equal to the addition
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec2i						vec2i_add(t_vec2i vec1, t_vec2i vec2);
/**
 * \fn		t_vec2f vec2f_add(t_vec2f vec1, t_vec2f vec2)
 * \brief	Returns a 2D vector with float coordinates equal to the addition
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec2f						vec2f_add(t_vec2f vec1, t_vec2f vec2);
/**
 * \fn		t_vec2d vec2d_add(t_vec2d vec1, t_vec2d vec2)
 * \brief	Returns a 2D vector with double coordinates equal to the addition
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec2d						vec2d_add(t_vec2d vec1, t_vec2d vec2);
/**
 * \fn		t_vec2ui vec2ui_add(t_vec2ui vec1, t_vec2ui vec2)
 * \brief	Returns a 2D vector with unsigned int coordinates equal to the
 * 		addition of vectors passed as parameters.
 * \return	New vector.
 */
t_vec2ui					vec2ui_add(t_vec2ui vec1, t_vec2ui vec2);

/*
**	vec2_cross.c
*/

/**
 * \fn		float vec2f_cross(t_vec2f vec1, t_vec2f vec2)
 * \brief	Returns the cross product of two 2D vectors with float coordinates.
 * \return	Cross product value.
 */
float						vec2f_cross(t_vec2f vec1, t_vec2f vec2);
/**
 * \fn		float vec2i_cross(t_vec2i vec1, t_vec2i vec2)
 * \brief	Returns the cross product of two 2D vectors with int coordinates.
 * \return	Cross product value.
 */
float						vec2i_cross(t_vec2i vec1, t_vec2i vec2);
/**
 * \fn		float vec2d_cross(t_vec2d vec1, t_vec2d vec2)
 * \brief	Returns the cross product of two 2D vectors with double coordinates.
 * \return	Cross product value.
 */
float						vec2d_cross(t_vec2d vec1, t_vec2d vec2);
/**
 * \fn		float vec2ui_cross(t_vec2ui vec1, t_vec2ui vec2)
 * \brief	Returns the cross product of two 2D vectors with unsigned int
 * 		coordinates.
 * \return	Cross product value.
 */
float						vec2ui_cross(t_vec2ui vec1, t_vec2ui vec2);

/*
**	vec2_dist.c
*/

/**
 * \fn		float vec2i_dist(t_vec2i vec1, t_vec2i vec2)
 * \brief	Returns the distance between two 2D vectors with int coordinates.
 * \return	Distance value.
 */
float						vec2i_dist(t_vec2i vec1, t_vec2i vec2);
/**
 * \fn		float vec2f_dist(t_vec2f vec1, t_vec2f vec2)
 * \brief	Returns the distance between two 2D vectors with float coordinates.
 * \return	Distance value.
 */
float						vec2f_dist(t_vec2f vec1, t_vec2f vec2);
/**
 * \fn		float vec2d_dist(t_vec2d vec1, t_vec2d vec2)
 * \brief	Returns the distance between two 2D vectors with double coordinates.
 * \return	Distance value.
 */
float						vec2d_dist(t_vec2d vec1, t_vec2d vec2);
/**
 * \fn		float vec2ui_dist(t_vec2ui vec1, t_vec2ui vec2)
 * \brief	Returns the distance between two 2D vectors with unsigned int
 * 		coordinates.
 * \return	Distance value.
 */
float						vec2ui_dist(t_vec2ui vec1, t_vec2ui vec2);

/*
**	vec2_dist_sq.c
*/

/**
 * \fn		float vec2i_dist_sq(t_vec2i vec1, t_vec2i vec2)
 * \brief	Returns the square distance between two 2D vectors with int
 * 		coordinates.
 * \return	Square distance value.
 */
float						vec2i_dist_sq(t_vec2i vec1, t_vec2i vec2);
/**
 * \fn		float vec2f_dist_sq(t_vec2f vec1, t_vec2f vec2)
 * \brief	Returns the square distance between two 2D vectors with float
 * 		coordinates.
 * \return	Square distance value.
 */
float						vec2f_dist_sq(t_vec2f vec1, t_vec2f vec2);
/**
 * \fn		float vec2d_dist_sq(t_vec2d vec1, t_vec2d vec2)
 * \brief	Returns the square distance between two 2D vectors with double
 * 		coordinates.
 * \return	Square distance value.
 */
float						vec2d_dist_sq(t_vec2d vec1, t_vec2d vec2);
/**
 * \fn		float vec2ui_dist_sq(t_vec2ui vec1, t_vec2ui vec2)
 * \brief	Returns the square distance between two 2D vectors with unsigned int
 * 		coordinates.
 * \return	Square distance value.
 */
float						vec2ui_dist_sq(t_vec2ui vec1, t_vec2ui vec2);

/*
**	vec2_div.c
*/

/**
 * \fn		t_vec2i vec2i_div(t_vec2i vec1, int div)
 * \brief	Returns a 2D vector with int coordinates equal to the division
 * 		of a given vector coordinates.
 * \return	New vector.
 */
t_vec2i						vec2i_div(t_vec2i vec1, int div);
/**
 * \fn		t_vec2f vec2f_div(t_vec2f vec1, float div)
 * \brief	Returns a 2D vector with float coordinates equal to the division
 * 		of a given vector coordinates.
 * \return	New vector.
 */
t_vec2f						vec2f_div(t_vec2f vec1, float div);
/**
 * \fn		t_vec2d vec2d_div(t_vec2d vec1, double div)
 * \brief	Returns a 2D vector with double coordinates equal to the division
 * 		of a given vector coordinates.
 * \return	New vector.
 */
t_vec2d						vec2d_div(t_vec2d vec1, double div);
/**
 * \fn		t_vec2ui vec2ui_div(t_vec2ui vec1, t_u32 div)
 * \brief	Returns a 2D vector with unsigned int coordinates equal to the
 * 		division of a given vector coordinates.
 * \return	New vector.
 */
t_vec2ui					vec2ui_div(t_vec2ui vec1, t_u32 div);

/*
**	vec2_dot.c
*/

/**
 * \fn		float vec2f_dot(t_vec2f vec1, t_vec2f vec2)
 * \brief	Returns the dot product of two 2D vectors with float coordinates.
 * \return	Dot product value.
 */
float						vec2f_dot(t_vec2f vec1, t_vec2f vec2);
/**
 * \fn		float vec2i_dot(t_vec2i vec1, t_vec2i vec2)
 * \brief	Returns the dot product of two 2D vectors with int coordinates.
 * \return	Dot product value.
 */
float						vec2i_dot(t_vec2i vec1, t_vec2i vec2);
/**
 * \fn		float vec2d_dot(t_vec2d vec1, t_vec2d vec2)
 * \brief	Returns the dot product of two 2D vectors with double coordinates.
 * \return	Dot product value.
 */
float						vec2d_dot(t_vec2d vec1, t_vec2d vec2);
/**
 * \fn		float vec2ui_dot(t_vec2ui vec1, t_vec2ui vec2)
 * \brief	Returns the dot product of two 2D vectors with unsigned int
 * 		coordinates.
 * \return	Dot product value.
 */
float						vec2ui_dot(t_vec2ui vec1, t_vec2ui vec2);

/*
**	vec2_length.c
*/

/**
 * \fn		float vec2i_length(t_vec2i vec1)
 * \brief	Returns the length of a given 2D vector with int coordinates.
 * \return	Length value as float.
 */
float						vec2i_length(t_vec2i vec1);
/**
 * \fn		float vec2f_length(t_vec2f vec1)
 * \brief	Returns the length of a given 2D vector with float coordinates.
 * \return	Length value as float.
 */
float						vec2f_length(t_vec2f vec1);
/**
 * \fn		float vec2d_length(t_vec2d vec1)
 * \brief	Returns the length of a given 2D vector with double coordinates.
 * \return	Length value as float.
 */
float						vec2d_length(t_vec2d vec1);
/**
 * \fn		float vec2ui_length(t_vec2ui vec1)
 * \brief	Returns the length of a given 2D vector with unsigned int
 * 		coordinates.
 * \return	Length value as float.
 */
float						vec2ui_length(t_vec2ui vec1);

/*
**	vec2_length_sq.c
*/

/**
 * \fn		float vec2i_length_sq(t_vec2i vec1)
 * \brief	Returns the square length of a given 2D vector with int
 * 		coordinates.
 * \return	Square length value as float.
 */
float						vec2i_length_sq(t_vec2i vec1);
/**
 * \fn		float vec2f_length_sq(t_vec2f vec1)
 * \brief	Returns the square length of a given 2D vector with float
 * 		coordinates.
 * \return	Square length value as float.
 */
float						vec2f_length_sq(t_vec2f vec1);
/**
 * \fn		float vec2d_length_sq(t_vec2d vec1)
 * \brief	Returns the square length of a given 2D vector with double
 * 		coordinates.
 * \return	Square length value as float.
 */
float						vec2d_length_sq(t_vec2d vec1);
/**
 * \fn		float vec2ui_length_sq(t_vec2ui vec1)
 * \brief	Returns the square length of a given 2D vector with unsigned int
 * 		coordinates.
 * \return	Square length value as float.
 */
float						vec2ui_length_sq(t_vec2ui vec1);

/*
**	vec2_mul.c
*/

/**
 * \fn		t_vec2i vec2i_mul(t_vec2i vec1, int mul)
 * \brief	Returns a 2D vector with int coordinates equal to the
 * 		multiplication of a given vector coordinates.
 * \return	New vector.
 */
t_vec2i						vec2i_mul(t_vec2i vec1, int mul);
/**
 * \fn		t_vec2f vec2f_mul(t_vec2f vec1, float mul)
 * \brief	Returns a 2D vector with float coordinates equal to the
 * 		multiplication of a given vector coordinates.
 * \return	New vector.
 */
t_vec2f						vec2f_mul(t_vec2f vec1, float mul);
/**
 * \fn		t_vec2d vec2d_mul(t_vec2d vec1, double mul)
 * \brief	Returns a 2D vector with double coordinates equal to the
 * 		multiplication of a given vector coordinates.
 * \return	New vector.
 */
t_vec2d						vec2d_mul(t_vec2d vec1, double mul);
/**
 * \fn		t_vec2ui vec2ui_mul(t_vec2ui vec1, t_u32 mul)
 * \brief	Returns a 2D vector with unsigned int coordinates equal to the
 * 		multiplication of a given vector coordinates.
 * \return	New vector.
 */
t_vec2ui					vec2ui_mul(t_vec2ui vec1, t_u32 mul);

/*
**	vec2_normal.c
*/

/**
 * \fn		t_vec2i vec2i_normal(t_vec2i vec1)
 * \brief	Returns the normal 2D vector (with int coordinates) of a given
 * 		vector.
 * \return	New vector.
 */
t_vec2i						vec2i_normal(t_vec2i vec1);
/**
 * \fn		t_vec2f vec2f_normal(t_vec2f vec1)
 * \brief	Returns the normal 2D vector (with float coordinates) of a given
 * 		vector.
 * \return	New vector.
 */
t_vec2f						vec2f_normal(t_vec2f vec1);
/**
 * \fn		t_vec2d vec2d_normal(t_vec2d vec1)
 * \brief	Returns the normal 2D vector (with double coordinates) of a given
 * 		vector.
 * \return	New vector.
 */
t_vec2d						vec2d_normal(t_vec2d vec1);
/**
 * \fn		t_vec2ui vec2ui_normal(t_vec2ui vec1)
 * \brief	Returns the normal 2D vector (with unsigned int coordinates) of a
 * 		given vector.
 * \return	New vector.
 */
t_vec2ui					vec2ui_normal(t_vec2ui vec1);

/*
**	vec2_normalize.c
*/

/**
 * \fn		t_vec2i vec2i_normalize(t_vec2i vec1)
 * \brief	Returns the normalized version of a given 2D vector with int
 * 		coordinates.
 * \return	New vector.
 */
t_vec2f						vec2i_normalize(t_vec2i vec1);
/**
 * \fn		t_vec2f vec2f_normalize(t_vec2f vec1)
 * \brief	Returns the normalized version of a given 2D vector with float
 * 		coordinates.
 * \return	New vector.
 */
t_vec2f						vec2f_normalize(t_vec2f vec1);
/**
 * \fn		t_vec2d vec2d_normalize(t_vec2d vec1)
 * \brief	Returns the normalized version of a given 2D vector with double
 * 		coordinates.
 * \return	New vector.
 */
t_vec2d						vec2d_normalize(t_vec2d vec1);
/**
 * \fn		t_vec2ui vec2ui_normalize(t_vec2ui vec1)
 * \brief	Returns the normalized version of a given 2D vector with unsigned
 * 		int coordinates.
 * \return	New vector.
 */
t_vec2f						vec2ui_normalize(t_vec2ui vec1);

/*
**	vec2_project.c
*/

/**
 * \fn		t_vec2i vec2i_project(t_vec2i vec1, t_vec2i vec2)
 * \brief	Returns the 2D vector (with int coordinates) projection of a given
 * 		vector on (or onto) a nonzero one.
 * \param	vec1 Vector projected
 * \param	vec2 Vector receiving projection.
 * \return	New vector.
 * 		\n	If a zero vector is given as argument, a zero vector will be
 * 		returned.
 */
t_vec2i						vec2i_project(t_vec2i vec1, t_vec2i vec2);
/**
 * \fn		t_vec2f vec2f_project(t_vec2f vec1, t_vec2f vec2)
 * \brief	Returns the 2D vector (with float coordinates) projection of a given
 * 		vector on (or onto) a nonzero one.
 * \param	vec1 Vector projected
 * \param	vec2 Vector receiving projection.
 * \return	New vector.
 * 		\n	If a zero vector is given as argument, a zero vector will be
 * 		returned.
 */
t_vec2f						vec2f_project(t_vec2f vec1, t_vec2f vec2);
/**
 * \fn		t_vec2d vec2d_project(t_vec2d vec1, t_vec2d vec2)
 * \brief	Returns the 2D vector (with double coordinates) projection of a
 * 		given vector on (or onto) a nonzero one.
 * \param	vec1 Vector projected
 * \param	vec2 Vector receiving projection.
 * \return	New vector.
 * 		\n	If a zero vector is given as argument, a zero vector will be
 * 		returned.
 */
t_vec2d						vec2d_project(t_vec2d vec1, t_vec2d vec2);
/**
 * \fn		t_vec2ui vec2ui_project(t_vec2ui vec1, t_vec2ui vec2)
 * \brief	Returns the 2D vector (with unsigned int coordinates) projection of
 * 		a given vector on (or onto) a nonzero one.
 * \param	vec1 Vector projected
 * \param	vec2 Vector receiving projection.
 * \return	New vector.
 * 		\n	If a zero vector is given as argument, a zero vector will be
 * 		returned.
 */
t_vec2ui					vec2ui_project(t_vec2ui vec1, t_vec2ui vec2);

/*
**	vec2_set_length.c
*/

/**
 * \fn		t_vec2i vec2i_set_length(t_vec2i vec1, int len)
 * \brief	Creates a 2D vector (with int coordinates) from a given vector
 * 		modified in order to have a certain length.
 * \return	New vector.
 */
t_vec2i						vec2i_set_length(t_vec2i vec1, int len);
/**
 * \fn		t_vec2f vec2f_set_length(t_vec2f vec1, float len)
 * \brief	Creates a 2D vector (with float coordinates) from a given vector
 * 		modified in order to have a certain length.
 * \return	New vector.
 */
t_vec2f						vec2f_set_length(t_vec2f vec1, float len);
/**
 * \fn		t_vec2d vec2d_set_length(t_vec2d vec1, double len)
 * \brief	Creates a 2D vector (with double coordinates) from a given vector
 * 		modified in order to have a certain length.
 * \return	New vector.
 */
t_vec2d						vec2d_set_length(t_vec2d vec1, double len);
/**
 * \fn		t_vec2ui vec2ui_set_length(t_vec2ui vec1, t_u32 len)
 * \brief	Creates a 2D vector (with unsigned int coordinates) from a given
 * 		vector modified in order to have a certain length.
 * \return	New vector.
 */
t_vec2ui					vec2ui_set_length(t_vec2ui vec1, t_u32 len);

/*
**	vec2_sub.c
*/

/**
 * \fn		t_vec2i vec2i_sub(t_vec2i vec1, t_vec2i vec2)
 * \brief	Returns a 2D vector with int coordinates equal to the substraction
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec2i						vec2i_sub(t_vec2i vec1, t_vec2i vec2);
/**
 * \fn		t_vec2f vec2f_sub(t_vec2f vec1, t_vec2f vec2)
 * \brief	Returns a 2D vector with float coordinates equal to the substraction
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec2f						vec2f_sub(t_vec2f vec1, t_vec2f vec2);
/**
 * \fn		t_vec2d vec2d_sub(t_vec2d vec1, t_vec2d vec2)
 * \brief	Returns a 2D vector with double coordinates equal to the
 * 		substraction of vectors passed as parameters.
 * \return	New vector.
 */
t_vec2d						vec2d_sub(t_vec2d vec1, t_vec2d vec2);
/**
 * \fn		t_vec2ui vec2ui_sub(t_vec2ui vec1, t_vec2ui vec2)
 * \brief	Returns a 2D vector with unsigned int coordinates equal to the
 * 		substraction of vectors passed as parameters.
 * \return	New vector.
 */
t_vec2ui					vec2ui_sub(t_vec2ui vec1, t_vec2ui vec2);

/*
**	vec2f.c
*/

/**
 * \fn		t_vec2f vec2f_from_angle(float angle)
 * \brief	Creates a 2D vector with float coordinates from a given angle.
 * \return	New vector.
 */
t_vec2f						vec2f_from_angle(float angle);

/*
**	vec3.c
*/

/**
 * \fn		t_vec3f vec3f(float x, float y, float z)
 * \brief	Creates a 3D vector with float coordinates from parameters.
 * \return	Created structure (not allocated).
 */
t_vec3f						vec3f(float x, float y, float z);
/**
 * \fn		t_vec3i vec3i(int x, int y, int z)
 * \brief	Creates a 3D vector with int coordinates from parameters.
 * \return	Created structure (not allocated).
 */
t_vec3i						vec3i(int x, int y, int z);
/**
 * \fn		t_vec3d vec3d(double x, double y, double z)
 * \brief	Creates a 3D vector with double coordinates from parameters.
 * \return	Created structure (not allocated).
 */
t_vec3d						vec3d(double x, double y, double z);

/*
**	vec3_add.c
*/

/**
 * \fn		t_vec3i vec3i_add(t_vec3i vec1, t_vec3i vec2)
 * \brief	Returns a 3D vector with int coordinates equal to the addition
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec3i						vec3i_add(t_vec3i vec1, t_vec3i vec2);
/**
 * \fn		t_vec3f vec3f_add(t_vec3f vec1, t_vec3f vec2)
 * \brief	Returns a 3D vector with float coordinates equal to the addition
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec3f						vec3f_add(t_vec3f vec1, t_vec3f vec2);
/**
 * \fn		t_vec3d vec3d_add(t_vec3d vec1, t_vec3d vec2)
 * \brief	Returns a 3D vector with double coordinates equal to the addition
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec3d						vec3d_add(t_vec3d vec1, t_vec3d vec2);

/*
**	vec3_cross.c
*/

/**
 * \fn		float vec3f_cross(t_vec3f vec1, t_vec3f vec2)
 * \brief	Returns a 3D vector with float coordinates equal to the
 * 		cross product of given vectors.
 * \return	New vector.
 */
t_vec3f						vec3f_cross(t_vec3f vec1, t_vec3f vec2);
/**
 * \fn		float vec3i_cross(t_vec3i vec1, t_vec3i vec2)
 * \brief	Returns a 3D vector with int coordinates equal to the
 * 		cross product of given vectors.
 * \return	New vector.
 */
t_vec3i						vec3i_cross(t_vec3i vec1, t_vec3i vec2);
/**
 * \fn		float vec3d_cross(t_vec3d vec1, t_vec3d vec2)
 * \brief	Returns a 3D vector with double coordinates equal to the
 * 		cross product of given vectors.
 * \return	New vector.
 */
t_vec3d						vec3d_cross(t_vec3d vec1, t_vec3d vec2);

/*
**	vec3_dist.c
*/

/**
 * \fn		float vec3i_dist(t_vec3i vec1, t_vec3i vec2)
 * \brief	Returns the distance between two 3D vectors with int coordinates.
 * \return	Distance value.
 */
float						vec3i_dist(t_vec3i vec1, t_vec3i vec2);
/**
 * \fn		float vec3f_dist(t_vec3f vec1, t_vec3f vec2)
 * \brief	Returns the distance between two 3D vectors with float coordinates.
 * \return	Distance value.
 */
float						vec3f_dist(t_vec3f vec1, t_vec3f vec2);
/**
 * \fn		float vec3d_dist(t_vec3d vec1, t_vec3d vec2)
 * \brief	Returns the distance between two 3D vectors with double coordinates.
 * \return	Distance value.
 */
float						vec3d_dist(t_vec3d vec1, t_vec3d vec2);

/*
**	vec3_dist_sq
*/

/**
 * \fn		float vec3i_dist_sq(t_vec3i vec1, t_vec3i vec2)
 * \brief	Returns the square distance between two 3D vectors with int
 * 		coordinates.
 * \return	Square distance value.
 */
float						vec3i_dist_sq(t_vec3i vec1, t_vec3i vec2);
/**
 * \fn		float vec3f_dist_sq(t_vec3f vec1, t_vec3f vec2)
 * \brief	Returns the square distance between two 3D vectors with float
 * 		coordinates.
 * \return	Square distance value.
 */
float						vec3f_dist_sq(t_vec3f vec1, t_vec3f vec2);
/**
 * \fn		float vec3d_dist_sq(t_vec3d vec1, t_vec3d vec2)
 * \brief	Returns the square distance between two 3D vectors with double
 * 		coordinates.
 * \return	Square distance value.
 */
float						vec3d_dist_sq(t_vec3d vec1, t_vec3d vec2);

/*
**	vec3_div.c
*/

/**
 * \fn		t_vec3i vec3i_div(t_vec3i vec1, int div)
 * \brief	Returns a 3D vector with int coordinates equal to the division
 * 		of a given vector coordinates.
 * \return	New vector.
 */
t_vec3i						vec3i_div(t_vec3i vec1, int div);
/**
 * \fn		t_vec3f vec3f_div(t_vec3f vec1, float div)
 * \brief	Returns a 3D vector with float coordinates equal to the division
 * 		of a given vector coordinates.
 * \return	New vector.
 */
t_vec3f						vec3f_div(t_vec3f vec1, float div);
/**
 * \fn		t_vec3d vec3d_div(t_vec3d vec1, double div)
 * \brief	Returns a 3D vector with double coordinates equal to the division
 * 		of a given vector coordinates.
 * \return	New vector.
 */
t_vec3d						vec3d_div(t_vec3d vec1, double div);

/*
**	vec3_dot.c
*/

/**
 * \fn		float vec3f_dot(t_vec3f vec1, t_vec3f vec2)
 * \brief	Returns the dot product of two 3D vectors with float coordinates.
 * \return	Dot product value.
 */
float						vec3f_dot(t_vec3f vec1, t_vec3f vec2);
/**
 * \fn		float vec3i_dot(t_vec3i vec1, t_vec3i vec2)
 * \brief	Returns the dot product of two 3D vectors with int coordinates.
 * \return	Dot product value.
 */
float						vec3i_dot(t_vec3i vec1, t_vec3i vec2);
/**
 * \fn		float vec3d_dot(t_vec3d vec1, t_vec3d vec2)
 * \brief	Returns the dot product of two 3D vectors with double coordinates.
 * \return	Dot product value.
 */
float						vec3d_dot(t_vec3d vec1, t_vec3d vec2);

/*
**	vec3_equal.c
*/

/**
 * \fn		bool vec3f_equal(t_vec3f *vec1, t_vec3f *vec2)
 * \brief	Verifies if two vectors are equal or not.
 * \return	True if both vectors have same soordinates, false otherwise.
 */
bool						vec3f_equal(t_vec3f *vec1, t_vec3f *vec2);

/*
**	vec3_length.c
*/

/**
 * \fn		float vec3i_length(t_vec3i vec1)
 * \brief	Returns the length of a given 3D vector with int coordinates.
 * \return	Length value as float.
 */
float						vec3i_length(t_vec3i vec1);
/**
 * \fn		float vec3f_length(t_vec3f vec1)
 * \brief	Returns the length of a given 3D vector with float coordinates.
 * \return	Length value as float.
 */
float						vec3f_length(t_vec3f vec1);
/**
 * \fn		float vec3d_length(t_vec3d vec1)
 * \brief	Returns the length of a given 3D vector with double coordinates.
 * \return	Length value as float.
 */
float						vec3d_length(t_vec3d vec1);

/*
**	vec3_length_sq.c
*/

/**
 * \fn		float vec3i_length_sq(t_vec3i vec1)
 * \brief	Returns the square length of a given 3D vector with int
 * 		coordinates.
 * \return	Square length value as float.
 */
float						vec3i_length_sq(t_vec3i vec1);
/**
 * \fn		float vec3f_length_sq(t_vec3f vec1)
 * \brief	Returns the square length of a given 3D vector with float
 * 		coordinates.
 * \return	Square length value as float.
 */
float						vec3f_length_sq(t_vec3f vec1);
/**
 * \fn		float vec3d_length_sq(t_vec3d vec1)
 * \brief	Returns the square length of a given 3D vector with double
 * 		coordinates.
 * \return	Square length value as float.
 */
float						vec3d_length_sq(t_vec3d vec1);

/*
**	vec3_mul.c
*/

/**
 * \fn		t_vec3i vec3i_mul(t_vec3i vec1, int mul)
 * \brief	Returns a 3D vector with int coordinates equal to the
 * 		multiplication of a given vector coordinates.
 * \return	New vector.
 */
t_vec3i						vec3i_mul(t_vec3i vec1, int mul);
/**
 * \fn		t_vec3f vec3f_mul(t_vec3f vec1, float mul)
 * \brief	Returns a 3D vector with float coordinates equal to the
 * 		multiplication of a given vector coordinates.
 * \return	New vector.
 */
t_vec3f						vec3f_mul(t_vec3f vec1, float mul);
/**
 * \fn		t_vec3d vec3d_mul(t_vec3d vec1, double mul)
 * \brief	Returns a 3D vector with double coordinates equal to the
 * 		multiplication of a given vector coordinates.
 * \return	New vector.
 */
t_vec3d						vec3d_mul(t_vec3d vec1, double mul);

/*
**	vec3_normalize.c
*/

/**
 * \fn		t_vec3i vec3i_normalize(t_vec3i vec1)
 * \brief	Returns the normalized version of a given 3D vector with int
 * 		coordinates.
 * \return	New vector.
 */
t_vec3f						vec3i_normalize(t_vec3i vec1);
/**
 * \fn		t_vec3f vec3f_normalize(t_vec3f vec1)
 * \brief	Returns the normalized version of a given 3D vector with float
 * 		coordinates.
 * \return	New vector.
 */
t_vec3f						vec3f_normalize(t_vec3f vec1);
/**
 * \fn		t_vec3d vec3d_normalize(t_vec3d vec1)
 * \brief	Returns the normalized version of a given 3D vector with double
 * 		coordinates.
 * \return	New vector.
 */
t_vec3d						vec3d_normalize(t_vec3d vec1);

/*
**	vec3_set_length.c
*/

/**
 * \fn		t_vec3i vec3i_set_length(t_vec3i vec1, int len)
 * \brief	Creates a 3D vector (with int coordinates) from a given vector
 * 		modified in order to have a certain length.
 * \return	New vector.
 */
t_vec3i						vec3i_set_length(t_vec3i vec1, int len);
/**
 * \fn		t_vec3f vec3f_set_length(t_vec3f vec1, float len)
 * \brief	Creates a 3D vector (with float coordinates) from a given vector
 * 		modified in order to have a certain length.
 * \return	New vector.
 */
t_vec3f						vec3f_set_length(t_vec3f vec1, float len);
/**
 * \fn		t_vec3d vec3d_set_length(t_vec3d vec1, double len)
 * \brief	Creates a 3D vector (with double coordinates) from a given vector
 * 		modified in order to have a certain length.
 * \return	New vector.
 */
t_vec3d						vec3d_set_length(t_vec3d vec1, double len);

/*
**	vec3_sub.c
*/

/**
 * \fn		t_vec3i vec3i_sub(t_vec3i vec1, t_vec3i vec2)
 * \brief	Returns a 3D vector with int coordinates equal to the substraction
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec3i						vec3i_sub(t_vec3i vec1, t_vec3i vec2);
/**
 * \fn		t_vec3f vec3f_sub(t_vec3f vec1, t_vec3f vec2)
 * \brief	Returns a 3D vector with float coordinates equal to the substraction
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec3f						vec3f_sub(t_vec3f vec1, t_vec3f vec2);
/**
 * \fn		t_vec3d vec3d_sub(t_vec3d vec1, t_vec3d vec2)
 * \brief	Returns a 3D vector with double coordinates equal to the
 * 		substraction of vectors passed as parameters.
 * \return	New vector.
 */
t_vec3d						vec3d_sub(t_vec3d vec1, t_vec3d vec2);

/*
**	vec4f.c
*/

/**
 * \fn		t_vec4f vec4f(float x, float y, float z, float w)
 * \brief	Creates a 4D vector with float coordinates from parameters.
 * \return	Created structure (not allocated).
 */
t_vec4f						vec4f(float x, float y, float z, float w);
/**
 * \fn		t_vec4f vec4f_div(t_vec4f vec, float d)
 * \brief	Returns a 4D vector with float coordinates equal to the division
 * 		of a given vector coordinates.
 * \return	New vector.
 */
t_vec4f						vec4f_div(t_vec4f vec, float d);
/**
 * \fn		t_vec4f vec4f_mul(t_vec4f vec1, float d)
 * \brief	Returns a 4D vector with float coordinates equal to the
 * 		multiplication of a given vector coordinates.
 * \return	New vector.
 */
t_vec4f						vec4f_mul(t_vec4f vec, float d);
/**
 * \fn		t_vec4f vec4f_add(t_vec4f vec1, t_vec4f vec2)
 * \brief	Returns a 4D vector with float coordinates equal to the addition
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec4f						vec4f_add(t_vec4f vec1, t_vec4f vec2);
/**
 * \fn		t_vec4f vec4f_sub(t_vec4f vec1, t_vec4f vec2)
 * \brief	Returns a 4D vector with float coordinates equal to the substraction
 * 		of vectors passed as parameters.
 * \return	New vector.
 */
t_vec4f						vec4f_sub(t_vec4f vec1, t_vec4f vec2);

/*
**	vec4f_p2.c
*/

/**
 * \fn		float vec4f_cross(t_vec4f vec1, t_vec4f vec2)
 * \brief	Returns a 4D vector with float coordinates equal to the
 * 		cross product of given vectors.
 * \return	New vector.
 */
t_vec4f						vec4f_cross(t_vec4f vec1, t_vec4f vec2);
/**
 * \fn		float vec4f_dot(t_vec4f vec1, t_vec4f vec2)
 * \brief	Returns the dot product of two 4D vectors with float coordinates.
 * \return	Dot product value.
 */
float						vec4f_dot(t_vec4f vec1, t_vec4f vec2);
/**
 * \fn		float vec4f_length(t_vec4f vec1)
 * \brief	Returns the length of a given 4D vector with float coordinates.
 * \return	Length value as float.
 */
float						vec4f_length(t_vec4f vec1);
/**
 * \fn		t_vec4f vec4f_normalize(t_vec4f vec1)
 * \brief	Returns the normalized version of a given 4D vector with float
 * 		coordinates.
 * \return	New vector.
 */
t_vec4f						vec4f_normalize(t_vec4f vec1);
/**
 * \fn		float vec4f_dist(t_vec4f vec1, t_vec4f vec2)
 * \brief	Returns the distance between two 4D vectors with float coordinates.
 * \return	Distance value.
 */
float						vec4f_dist(t_vec4f vec1, t_vec4f vec2);

#endif
