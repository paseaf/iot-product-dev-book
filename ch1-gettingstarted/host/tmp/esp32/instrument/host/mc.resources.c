#include "xsPlatform.h"
static const struct {const char *name; const unsigned char *data; unsigned int size;} resources[] = {
	{ NULL, NULL, 0 },
};
extern const void *mcGetResource(void* it, const char *path, size_t *sizep);
const void *mcGetResource(void* it, const char *path, size_t *sizep)
{
	return NULL;
}
extern int mcCountResources(void* it);
int mcCountResources(void* it)
{
	return 0;
}
extern const char *mcGetResourceName(void* it, int i);
const char *mcGetResourceName(void* it, int i)
{
	return resources[i].name;
}
