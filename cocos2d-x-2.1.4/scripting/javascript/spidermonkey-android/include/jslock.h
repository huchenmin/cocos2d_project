/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef jslock_h__
#define jslock_h__

#include "jsapi.h"

#ifdef JS_THREADSAFE

# include "pratom.h"
# include "prlock.h"
# include "prcvar.h"
# include "prthread.h"
# include "prinit.h"

# define JS_ATOMIC_INCREMENT(p)      PR_ATOMIC_INCREMENT((int32_t *)(p))
# define JS_ATOMIC_DECREMENT(p)      PR_ATOMIC_DECREMENT((int32_t *)(p))
# define JS_ATOMIC_ADD(p,v)          PR_ATOMIC_ADD((int32_t *)(p), (int32_t)(v))
# define JS_ATOMIC_SET(p,v)          PR_ATOMIC_SET((int32_t *)(p), (int32_t)(v))

namespace js {
    // Defined in jsgc.cpp.
    unsigned GetCPUCount();
}

#else  /* JS_THREADSAFE */

typedef struct PRThread PRThread;
typedef struct PRCondVar PRCondVar;
typedef struct PRLock PRLock;

# define JS_ATOMIC_INCREMENT(p)      (++*(p))
# define JS_ATOMIC_DECREMENT(p)      (--*(p))
# define JS_ATOMIC_ADD(p,v)          (*(p) += (v))
# define JS_ATOMIC_SET(p,v)          (*(p) = (v))

#endif /* JS_THREADSAFE */

#endif /* jslock_h___ */
