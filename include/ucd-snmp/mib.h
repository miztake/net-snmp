#ifdef UCD_COMPATIBLE

#include <net-snmp/library/mib.h>

#else

#error "Please update your headers or configure using --enable-ucd-snmp-compatibility"

#endif
