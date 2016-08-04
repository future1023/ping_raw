/***************************************************************************
 *            misc.h
 *
 *  Copyright  2012  guofeng
 *  <guofeng1208@163.com>
 ****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor Boston, MA 02110-1301,  USA
 */


#ifndef _MISC_H
#define _MISC_H


#include "defines.h"


int msg_log( int , const char *, ... ) ATTR(format(printf, 2, 3));

int start_timer( double );
int stop_timer();

void tv_sub( struct timeval *, const struct timeval * );
void tv_add( struct timeval *, const struct timeval * );
int  tv_cmp( const struct timeval *, const struct timeval * );
void double2tv( struct timeval *, double );
double tv2double( const struct timeval * );

int lost_some( int );

void print_packet( const char *, int );


#endif    /* _MISC_H */
