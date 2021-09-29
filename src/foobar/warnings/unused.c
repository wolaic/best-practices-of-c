/*
 * @file unused.c
 * @author Vincent Wei (https://github.com/VincentWei)
 * @date 2021/09/29
 * @brief Show unused warnings.
 *
 * Copyright (C) 2021 FMSoft <https://www.fmsoft.cn>
 *
 * This file is a part of FooBar, which contains the examples of my course:
 * _the Best Practices of C Language_.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the “Software”), to
 * deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <unistd.h>

/* unused parameter */
int foo(int a, int b)
{
    /* unused variable */
    int i;

    /* unused but set variable */
    int j = 20;

    /* unused but set parameter */
    a = 10;

    return 0;
}

/* unused function */
static int bar(void)
{
    return 100;
}

/* unused macro */
#define COUNT   100

/*
 * chdir was declared with attribute __attribute__ ((__warn_unused_result__)):
 *
 * extern int chdir (const char *__path) __THROW __nonnull ((1)) __wur;
 */
int unused(int x, int y)
{
    int xy;

    /* unused value */
    xy = (x * 10, y * 10);

    /* unused result */
    chdir("/root");

    return 0;

    /* unused label */
error:
    return -1;
}

