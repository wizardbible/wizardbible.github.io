#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "obf4.h"

int main()
{
	const char *title = "title", *msg = "message";
	MessageBox(NULL, msg, title, MB_OK);
	return 0;
}