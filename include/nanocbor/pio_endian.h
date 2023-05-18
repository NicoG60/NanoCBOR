#ifndef PIO_ENDIAN_H
#define PIO_ENDIAN_H

#ifdef __arm__

#include <machine/endian.h>

#if _BYTE_ORDER == _LITTLE_ENDIAN
#define NANOCBOR_BE64TOH_FUNC(x) __bswap64(x)
#define NANOCBOR_HTOBE64_FUNC(x) __bswap64(x)

#define NANOCBOR_BE32TOH_FUNC(x) __bswap32(x)
#define NANOCBOR_HTOBE32_FUNC(x) __bswap32(x)

#define NANOCBOR_BE16TOH_FUNC(x) __bswap16(x)
#define NANOCBOR_HTOBE16_FUNC(x) __bswap16(x)
#else
#define NANOCBOR_BE64TOH_FUNC(x) ((__uint64_t)x)
#define NANOCBOR_HTOBE64_FUNC(x) ((__uint64_t)x)

#define NANOCBOR_BE32TOH_FUNC(x) ((__uint32_t)x)
#define NANOCBOR_HTOBE32_FUNC(x) ((__uint32_t)x)

#define NANOCBOR_BE16TOH_FUNC(x) ((__uint16_t)x)
#define NANOCBOR_HTOBE16_FUNC(x) ((__uint16_t)x)
#endif

#else
#warning "sorry"
#endif

#endif // PIO_ENDIAN_H