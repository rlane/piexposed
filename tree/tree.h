#ifndef _TREE_H_
#define _TREE_H_

struct b_tree_node_t {
   struct b_tree_node_t *right;
   struct b_tree_node_t *left;
   int                   value;
};

typedef void *fifo_t;

extern void  fifo_init(fifo_t *fifo);
extern void  fifo_push(fifo_t *fifo, void *data);
extern void *fifo_pop(fifo_t *fifo);
extern int   fifo_empty(fifo_t *fifo);

typedef void *lifo_t;

extern void  lifo_init(lifo_t *lifo);
extern void  lifo_push(lifo_t *lifo, void *data);
extern void *lifo_pop(lifo_t *lifo);
extern int   lifo_empty(lifo_t *lifo);

#endif /* _TREE_H_*/
