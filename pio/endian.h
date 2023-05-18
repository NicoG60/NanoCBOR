#ifndef PIO_ENDIAN_H
#define PIO_ENDIAN_H

#if defined(__GNUC__) || defined(__GNUG__)

#include <machine/endian.h>

#if _BYTE_ORDER == _LITTLE_ENDIAN
#define be64toh(x) __bswap64(x)
#define htobe64(x) __bswap64(x)

#define be32toh(x) __bswap32(x)
#define htobe32(x) __bswap32(x)

#define be16toh(x) __bswap16(x)
#define htobe16(x) __bswap16(x)
#else
#define be64toh(x) ((__uint64_t)x)
#define htobe64(x) ((__uint64_t)x)

#define be32toh(x) ((__uint32_t)x)
#define htobe32(x) ((__uint32_t)x)

#define be16toh(x) ((__uint16_t)x)
#define htobe16(x) ((__uint16_t)x)
#endif

#else
#warning "sorry"
#endif

#endif // PIO_ENDIAN_H