//  Encoder class

/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.*/

#include <assert.h>
#include <stdlib.h>

#include "encoder.h"

extern inline int
encoder_encode (encoder_t *self, frame_t *frame, uint32_t *status);

extern inline int
encoder_read (encoder_t *self, iobuf_t *iobuf, uint32_t *status);

extern inline int
encoder_buffer (encoder_t *self, const void **buffer, size_t *buffer_size);

extern inline int
encoder_advance (encoder_t *self, size_t n, uint32_t *status);

extern inline uint32_t
encoder_status (encoder_t *self);

void
encoder_destroy (encoder_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        encoder_t *self = *self_p;
        self->ops.destroy (self_p);
    }
}
