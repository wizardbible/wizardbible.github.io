#define WIN32_LEAN_AND_MEAN
#include <windows.h>

const DWORD_PTR msgbox = ((DWORD_PTR)MessageBox + 0x7F12AE11);
int main()
{
	typedef int (WINAPI *MsgBox)(HWND, LPCTSTR, LPCTSTR, UINT);

	const char *title = "title", *msg = "message";
	((MsgBox)(msgbox - 0x7F12AE11))(NULL, msg, title, MB_OK);
	return 0;
}