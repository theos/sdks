/*
 * Copyright (c) 2007 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

#ifndef _MACH_ARM_EXCEPTION_H_
#define _MACH_ARM_EXCEPTION_H_

#define EXC_TYPES_COUNT         14      /* incl. illegal exception 0 */

#define EXC_MASK_MACHINE         0

#define EXCEPTION_CODE_MAX       2      /*  code and subcode */

/*
 *	Trap numbers as defined by the hardware exception vectors.
 */

/*
 *      EXC_BAD_INSTRUCTION
 */

#define EXC_ARM_UNDEFINED       1       /* Undefined */


/*
 *      EXC_BAD_ACCESS
 *      Note: do not conflict with kern_return_t values returned by vm_fault
 */

#define EXC_ARM_DA_ALIGN        0x101   /* Alignment Fault */
#define EXC_ARM_DA_DEBUG        0x102   /* Debug (watch/break) Fault */
#define EXC_ARM_SP_ALIGN        0x103   /* SP Alignment Fault */
#define EXC_ARM_SWP                     0x104   /* SWP instruction */

/*
 *	EXC_BREAKPOINT
 */

#define EXC_ARM_BREAKPOINT      1       /* breakpoint trap */


#endif  /* _MACH_ARM_EXCEPTION_H_ */
