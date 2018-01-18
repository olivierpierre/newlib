#include "config.h"
#include <reent.h>
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include "syscall.h"
#include "warning.h"

int
_DEFUN (pierre, (x),
	int x)
{
 	return sys_pierre;
}

