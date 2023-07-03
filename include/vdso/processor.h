/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2020 ARM Ltd.
 */
#ifndef __VDSO_PROCESSOR_H
#define __VDSO_PROCESSOR_H

#ifndef __ASSEMBLY__

#include <asm/vdso/processor.h>

#ifndef vdso_cpu_relax
#define vdso_cpu_relax cpu_relax
#endif

#endif /* __ASSEMBLY__ */

#endif /* __VDSO_PROCESSOR_H */
