#include "config.h"
#include <reent.h>
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#include "syscall.h"
#include "warning.h"

int
_DEFUN (rename, (old, new),
	const char *old  _AND
	const char *new)
{
	return _rename_r(_REENT, old, new);
}

int
_DEFUN (_rename_r, (p, old, new),
	struct _reent *p _AND
	const char *old  _AND
        const char *new)
{
	int ret;

	ret = sys_rename(old, new);
	if (ret < 0) {
		p->_errno = -ret;
		ret = -1;
	}

	return ret;
}
