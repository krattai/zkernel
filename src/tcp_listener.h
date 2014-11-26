//  TCP listener class

#ifndef __TCP_LISTENER_H_INCLUDED__
#define __TCP_LISTENER_H_INCLUDED__

#include "mailbox.h"
#include "selector.h"

typedef struct tcp_listener tcp_listener_t;

tcp_listener_t *
    tcp_listener_new (selector_t *selector, struct mailbox *owner);

void
    tcp_listener_destroy (tcp_listener_t **self_p);

int
    tcp_listener_bind (tcp_listener_t *self, unsigned short port);

#endif
