/*
 * SPDX-FileCopyrightText: Copyright (c) 2017 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __NVKMS_HEADSURFACE_IOCTL_H__
#define __NVKMS_HEADSURFACE_IOCTL_H__

#include "nvkms-types.h"
#include "nvkms-api.h"

NvBool nvHsIoctlMoveCursor(
    NVDispEvoPtr pDispEvo,
    NvU32 head,
    const struct NvKmsMoveCursorCommonParams *pParams);

NvBool nvHsIoctlSetCursorImage(
    NVDispEvoPtr pDispEvo,
    const struct NvKmsPerOpenDev *pOpenDevice,
    const NVEvoApiHandlesRec *pOpenDevSurfaceHandles,
    NvU32 head,
    const struct NvKmsSetCursorImageCommonParams *pParams);

NvBool nvHsIoctlFlip(
    NVDevEvoPtr pDevEvo,
    const struct NvKmsPerOpenDev *pOpenDev,
    const struct NvKmsFlipRequestOneHead *pFlipHead,
    NvU32 numFlipHeads,
    NvBool commit,
    struct NvKmsFlipReply *pReply);

#endif /* __NVKMS_HEADSURFACE_IOCTL_H__ */
