/*
 Copyright (C) Free Mind Foundation 2013
 www.fmf-base.org xorentor

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#ifndef POOL_H_
#define POOL_H_

// this should go elsewhere
#if _WIN64
typedef unsigned long	ptr;
#else
typedef unsigned int	ptr;
#endif

#undef          POOL_DEBUG
//#define               POOL_DEBUG
#define         BLOCK_SIZE      128     // default block size

typedef struct pe_s {
        void *data;
        struct pe_s *next;
        struct pe_s *next_logical;
} pe_t;

typedef struct block_s {
        int size;
        pe_t *head_element;
        struct block_s *next;
} block_t;

typedef struct pool_s {
        //LOCK pool_lock;
        int name;
        int offset;
        int blocks_number;
        pe_t *freenode;
        block_t *head_block;
        struct pool_s *next;
} pool_t;

pool_t *pool_create( const int, const int );
void pool_freenode( pool_t*, pe_t* );
pe_t *pool_getnode( pool_t* );
pool_t *pool_get( const int );
void pool_destroy( pool_t *dp );
void pool_free_all();

#ifdef POOL_DEBUG
void pool_mem_dump();
#endif

/* POOL_G
 * pool get memory
 * every out must have element (e)
 */
#define POOL_G( p, name, blocks, e, out )\
        p = pool_get( name );\
        if( p == NULL ) p = pool_create( name, blocks );\
        if( p != NULL ) {\
                e = pool_getnode( p );\
                out = (void *)e->data;\
                out->pe = e;\
        } else { idLib::common->Printf( "Pool couldn't be created.\n" ); }

/* POOL_F
 * pool release memory back to pool
 * every out must have element (e)
 */
#define POOL_F( p, name, e )\
        p = pool_get( name );\
        if( p == NULL ) { idLib::common->Printf( "Pool empty before releasing node.\n" );\
        } else { pool_freenode( p, e ); }

#endif
