#ifndef SET_H
#define SET_H

extern const void * Set;	/*This is a tree. 单例模式*/

void * add (void * set, const void * element);
void * find (const void * set, const void * element);
void * drop (void * set, const void * element);
int contains (const void * set, const void * element);
unsigned count (const void * set);
#endif /*SET_H*/
