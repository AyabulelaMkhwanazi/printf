#include <unistd.h>
#include "main.h"

int charadd(char g)
{
	return (write(1, &g, 1));
}
