/*-------------------------------------------------------------------------
 *
 * geqo_gene.h
 *	  genome representation in optimizer/geqo
 *
 * Portions Copyright (c) 1996-2017, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/optimizer/geqo_gene.h
 *
 *-------------------------------------------------------------------------
 */

/* contributed by:
   =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
   *  Martin Utesch				 * Institute of Automatic Control	   *
   =							 = University of Mining and Technology =
   *  utesch@aut.tu-freiberg.de  * Freiberg, Germany				   *
   =*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=
 */


#ifndef GEQO_GENE_H
#define GEQO_GENE_H

#include "nodes/nodes.h"

/* we presume that int instead of Relid
   is o.k. for Gene; so don't change it! */
typedef int Gene;

typedef struct Chromosome
{
	Gene	   *string; /* an int array which represent the join order of all rels */
	Cost		worth; /* corresponding to fitness in genetic inheritance algorithm */
} Chromosome;

typedef struct Pool
{
	Chromosome *data;
	int			size;
	int			string_length; /* the number of rels in each Chromosome */
} Pool;

#endif							/* GEQO_GENE_H */
