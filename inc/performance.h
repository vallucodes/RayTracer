/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   performance.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopatin <vlopatin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:37:45 by vlopatin          #+#    #+#             */
/*   Updated: 2025/07/26 16:26:21 by vlopatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERFORMANCE_H
# define PERFORMANCE_H

#include <time.h>

extern double total_time_rendering;
extern double total_time_intersections;
extern double total_time_hits;
extern double total_time_isShadowed;
extern double total_time_shading;

extern double total_time_invM;

static inline double get_time_sec(void)
{
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return ts.tv_sec + ts.tv_nsec / 1e9;
}

#endif
