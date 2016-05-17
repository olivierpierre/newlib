/* libc/sys/hermit/sys/fcntl.h - File access */

/*
 * Written 2016 by Stefan Lankes
 *
 * derived from libc/sys/linux/sys/fcntl.h
 */


#ifndef _SYS_FCNTL_H
#define _SYS_FCNTL_H

#include <sys/types.h>
//#include <linux/fcntl.h>

/*
 * When introducing new O_* bits, please check its uniqueness in fcntl_init().
 */

#define O_ACCMODE	00000003
#define O_RDONLY	00000000
#define O_WRONLY	00000001
#define O_RDWR		00000002
#ifndef O_CREAT
#define O_CREAT		00000100	/* not fcntl */
#endif
#ifndef O_EXCL
#define O_EXCL		00000200	/* not fcntl */
#endif
#ifndef O_NOCTTY
#define O_NOCTTY	00000400	/* not fcntl */
#endif
#ifndef O_TRUNC
#define O_TRUNC		00001000	/* not fcntl */
#endif
#ifndef O_APPEND
#define O_APPEND	00002000
#endif
#ifndef O_NONBLOCK
#define O_NONBLOCK	00004000
#endif
#ifndef O_DSYNC
#define O_DSYNC		00010000	/* used to be O_SYNC, see below */
#endif
#ifndef FASYNC
#define FASYNC		00020000	/* fcntl, for BSD compatibility */
#endif
#ifndef O_DIRECT
#define O_DIRECT	00040000	/* direct disk access hint */
#endif
#ifndef O_LARGEFILE
#define O_LARGEFILE	00100000
#endif
#ifndef O_DIRECTORY
#define O_DIRECTORY	00200000	/* must be a directory */
#endif
#ifndef O_NOFOLLOW
#define O_NOFOLLOW	00400000	/* don't follow links */
#endif
#ifndef O_NOATIME
#define O_NOATIME	01000000
#endif
#ifndef O_CLOEXEC
#define O_CLOEXEC	02000000	/* set close_on_exec */
#endif

/* --- redundant stuff below --- */

#include <_ansi.h>

extern int creat _PARAMS ((const char *, mode_t));
extern int _open _PARAMS ((const char *, int, ...));

#ifdef __KERNEL_PROTOTYPES
extern int open(const char *pathname, int flags, mode_t mode);
extern int fcntl(int fd, int cmd, long arg);
#else
extern int open _PARAMS ((const char *, int, ...));
extern int fcntl _PARAMS ((int, int, ...));
#endif

extern int _fcntl _PARAMS ((int, int, ...));

#endif
