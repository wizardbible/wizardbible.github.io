#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int main()
{
	typedef int (WINAPI *MsgBox)(HWND, LPCTSTR, LPCTSTR, UINT);

	HINSTANCE hUser = LoadLibrary("user32.dll");
	if (!hUser) {
		return -1;
	}

	MsgBox msgbox = reinterpret_cast<MsgBox>(GetProcAddress(hUser, "MessageBoxA"));
	if (!msgbox) {
		return -1;
	}

	const char *title = "title", *msg = "message";
	msgbox(NULL, msg, title, MB_OK);

	return 0;
}