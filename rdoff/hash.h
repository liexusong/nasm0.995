/* hash.h     Routines to calculate a CRC32 hash value
 *
 *   These routines donated to the NASM effort by Graeme Defty.
 *
 * The Netwide Assembler is copyright (C) 1996 Simon Tatham and
 * Julian Hall. All rights reserved. The software is
 * redistributable under the licence given in the file "Licence"
 * distributed in the NASM archive.
 */

#ifndef RDOFF_HASH_H
#define RDOFF_HASH_H 1

#include <inttypes.h>

uint32_t hash(const char *name);

#endif
