/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 *
 * (C) COPYRIGHT 2021-2023 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 */

#ifndef _KBASE_GPU_REGMAP_CSF_H_
#define _KBASE_GPU_REGMAP_CSF_H_

/* USER base address */
#define USER_BASE 0x0010000
#define USER_REG(r) (USER_BASE + (r))

/* USER register offsets */
#define LATEST_FLUSH 0x0000 /* () Flush ID of latest clean-and-invalidate operation */

/* DOORBELLS base address */
#define DOORBELLS_BASE 0x0080000
#define DOORBELLS_REG(r) (DOORBELLS_BASE + (r))

#endif /* _KBASE_GPU_REGMAP_CSF_H_ */
