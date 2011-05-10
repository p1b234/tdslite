#include <sys/types.h>

typedef struct net_s *net_t;

net_t net_create(const char *addr, int port);
int net_free(net_t cn);

int net_send(net_t cn, const void *buf, size_t len);
int net_read(net_t cn, void *buf, size_t len);
