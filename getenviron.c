#include "shell.h"
#include "alias.h"
#include "shellvars.h"
/**
 * getenviron - static wrapper copy whole environ
 * Return: environ address
 */
char ***getenviron()
{
	static char **environ;

	return (&environ);
}
