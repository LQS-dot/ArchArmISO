/* include/urcu/config.h.  Generated from config.h.in by configure.  */
/* urcu/config.h.in. Manually generated for control over the contained defs. */

/* Enable SMP support. With SMP support enabled, uniprocessors are also
   supported. With SMP support disabled, UP systems work fine, but the
   behavior of SMP systems is undefined. */
#define CONFIG_RCU_SMP 1

/* TLS provided by the compiler. */
#define CONFIG_RCU_TLS 1

/* clock_gettime() is detected. */
#define CONFIG_RCU_HAVE_CLOCK_GETTIME 1

/* Require the operating system to support the membarrier system call for
   default and bulletproof flavors. */
/* #undef CONFIG_RCU_FORCE_SYS_MEMBARRIER */

/* Enable internal debugging self-checks.
   Introduces a performance penalty. */
/* #undef CONFIG_RCU_DEBUG */

/* Expose multi-flavor support */
#define CONFIG_RCU_HAVE_MULTIFLAVOR 1

/* Enable extra debugging checks for lock-free hash table iterator
   traversal. */
/* #undef CONFIG_CDS_LFHT_ITER_DEBUG */
