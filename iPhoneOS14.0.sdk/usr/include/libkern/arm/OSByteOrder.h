/*
 * Copyright (c) 1999-2007 Apple Inc. All rights reserved.
 */

#ifndef _OS_OSBYTEORDERARM_H
#define _OS_OSBYTEORDERARM_H

#include <stdint.h>
#include <arm/arch.h> /* for _ARM_ARCH_6 */
#include <sys/_types/_os_inline.h>

/* Generic byte swapping functions. */

OS_INLINE
uint16_t
_OSSwapInt16(
	uint16_t        data
	)
{
	/* Reduces to 'rev16' with clang */
	return (uint16_t)(data << 8 | data >> 8);
}

OS_INLINE
uint32_t
_OSSwapInt32(
	uint32_t        data
	)
{
#if defined(__llvm__)
	data = __builtin_bswap32(data);
#else
	/* This actually generates the best code */
	data = (((data ^ (data >> 16 | (data << 16))) & 0xFF00FFFF) >> 8) ^ (data >> 8 | data << 24);
#endif

	return data;
}

OS_INLINE
uint64_t
_OSSwapInt64(
	uint64_t        data
	)
{
#if defined(__llvm__)
	return __builtin_bswap64(data);
#else
	union {
		uint64_t ull;
		uint32_t ul[2];
	} u;

	/* This actually generates the best code */
	u.ul[0] = (uint32_t)(data >> 32);
	u.ul[1] = (uint32_t)(data & 0xffffffff);
	u.ul[0] = _OSSwapInt32(u.ul[0]);
	u.ul[1] = _OSSwapInt32(u.ul[1]);
	return u.ull;
#endif
}

/* Functions for byte reversed loads. */

struct _OSUnalignedU16 {
	volatile uint16_t val;
} __attribute__((__packed__));

struct _OSUnalignedU32 {
	volatile uint32_t val;
} __attribute__((__packed__));

struct _OSUnalignedU64 {
	volatile uint64_t val;
} __attribute__((__packed__));

OS_INLINE
uint16_t
OSReadSwapInt16(
	const volatile void   * base,
	uintptr_t       offset
	)
{
	return _OSSwapInt16(((struct _OSUnalignedU16 *)((uintptr_t)base + offset))->val);
}

OS_INLINE
uint32_t
OSReadSwapInt32(
	const volatile void   * base,
	uintptr_t       offset
	)
{
	return _OSSwapInt32(((struct _OSUnalignedU32 *)((uintptr_t)base + offset))->val);
}

OS_INLINE
uint64_t
OSReadSwapInt64(
	const volatile void   * base,
	uintptr_t       offset
	)
{
	return _OSSwapInt64(((struct _OSUnalignedU64 *)((uintptr_t)base + offset))->val);
}

/* Functions for byte reversed stores. */

OS_INLINE
void
OSWriteSwapInt16(
	volatile void   * base,
	uintptr_t       offset,
	uint16_t        data
	)
{
	((struct _OSUnalignedU16 *)((uintptr_t)base + offset))->val = _OSSwapInt16(data);
}

OS_INLINE
void
OSWriteSwapInt32(
	volatile void   * base,
	uintptr_t       offset,
	uint32_t        data
	)
{
	((struct _OSUnalignedU32 *)((uintptr_t)base + offset))->val = _OSSwapInt32(data);
}

OS_INLINE
void
OSWriteSwapInt64(
	volatile void    * base,
	uintptr_t        offset,
	uint64_t         data
	)
{
	((struct _OSUnalignedU64 *)((uintptr_t)base + offset))->val = _OSSwapInt64(data);
}

#endif /* ! _OS_OSBYTEORDERARM_H */
