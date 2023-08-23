#include <unistd.h>
#include "plntfheader.h"

int charadd(char g)
{
	return (write(1, &g, 1));
}
