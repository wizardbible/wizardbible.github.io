#include <windows.h>

int main()
{
	const char *title = "title", *msg = "message";
	MessageBox(NULL, msg, title, MB_OK);
	return 0;
}