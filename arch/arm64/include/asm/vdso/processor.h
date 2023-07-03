/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2020 ARM Ltd.
 */
#ifndef __ASM_VDSO_PROCESSOR_H
#define __ASM_VDSO_PROCESSOR_H

#ifndef __ASSEMBLY__

static inline void vdso_cpu_relax(void)
{
	asm volatile("yield" ::: "memory");
}
#define vdso_cpu_relax	vdso_cpu_relax


#endif /* __ASSEMBLY__ */

#endif /* __ASM_VDSO_PROCESSOR_H */
