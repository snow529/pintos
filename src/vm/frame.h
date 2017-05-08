#ifndef VM_FRAME_H
#define VM_FRAME_H

#include <list.h>
#include "threads/palloc.h"

void frame_table_init (void);
void *frame_alloc (enum palloc_flags);
void frame_free (void *);

#endif /* vm/frame.h */
