#pragma once
typedef int (WINAPI *_MessageBox)(HWND, LPCTSTR, LPCTSTR, UINT);

const DWORD_PTR p_MessageBox = ((DWORD_PTR)MessageBox + 0x7F12AE11);
#undef MessageBox
#define MessageBox ((_MessageBox)(p_MessageBox - 0x7F12AE11))