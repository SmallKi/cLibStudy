## strcmp
### 1. 简介  
这是一个比较给定的两个字符串大小的函数，原理：C语言中的每一个字符都对应着一个整数，通过逐字符的比较两个字符串来决定两个的大小。
> /***
*strnset.c - set first n characters to single character
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       defines _strnset() - sets at most the first n characters of a string
*       to a given character.
*
*******************************************************************************/

#include <string.h>

/***
*char *_strnset(string, val, count) - set at most count characters to val
*
*Purpose:
*       Sets the first count characters of string the character value.
*       If the length of string is less than count, the length of
*       string is used in place of n.
*
*Entry:
*       char *string - string to set characters in
*       char val - character to fill with
*       unsigned count - count of characters to fill
*
*Exit:
*       returns string, now filled with count copies of val.
*
*Exceptions:
*
*******************************************************************************/

char * __cdecl _strnset (
        char * string,
        int val,
        size_t count
        )
{
        char *start = string;

        while (count-- && *string)
                *string++ = (char)val;

        return(start);
}
