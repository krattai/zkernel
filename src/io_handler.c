#include "io_handler.h"

extern inline void
io_handler_error (io_handler_t *self);

extern inline int
io_handler_event (io_handler_t *self, uint32_t flags, uint32_t *timer_interval);
