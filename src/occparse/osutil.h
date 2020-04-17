/* Software License Agreement
 * 
 *     Copyright(C) 1994-2020 David Lindauer, (LADSoft)
 * 
 *     This file is part of the Orange C Compiler package.
 * 
 *     The Orange C Compiler package is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 * 
 *     The Orange C Compiler package is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 * 
 *     You should have received a copy of the GNU General Public License
 *     along with Orange C.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *     contact information:
 *         email: TouchStone222@runbox.com <David Lindauer>
 * 
 */

#ifndef OSUTIL_H
#define OSUTIL_H

/* Mode values for ARGLIST */
#define ARG_CONCATSTRING 1
#define ARG_NOCONCATSTRING 2
#define ARG_BOOL 3
#define ARG_SWITCH 4
#define ARG_SWITCHSTRING 5
#define ARG_COMBINESTRING 6

/* Valid arg separators */
#define ARG_SEPSWITCH '/'
#define ARG_SEPfalse '-'
#define ARG_SEPtrue '+'

/* Return values for dispatch routine */
#define ARG_NEXTCHAR 1
#define ARG_NEXTARG 2
#define ARG_NEXTNOCAT 3
#define ARG_NOMATCH 4
#define ARG_NOARG 5

typedef struct
{
    char id;
    UBYTE mode;
    void (*routine)(char, char*);
} CMDLIST;

/* Global HASHRECbol table is a hash table */
#define GLOBALHASHSIZE 8192 /*9973 */
#define LOCALHASHSIZE 29

typedef struct _symlist_
{
    struct _symlist_* next; /* next to next element in list */
    struct sym* p;
} SYMLIST;

typedef struct _hashtable_
{
    struct _hashtable_ *next, *chain;
    struct _hashtable_* fast;
    int size;
    int blockLevel;
    SYMLIST** table;

} HASHTABLE;

extern const char* getUsageText(void);
#endif
