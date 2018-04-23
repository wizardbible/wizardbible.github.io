#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int main()
{
	const char *title = "title", *msg = "message";
	_asm {
		lea eax, [MessageBox + 0x7F12AE11]
		push 0
		push msg
		push title
		push 0
		sub eax, 0x7F12AE11
		call [eax]
	}

	return 0;
}