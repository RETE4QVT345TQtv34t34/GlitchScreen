#include <windows.h>
int main() {
	HDC hdc = GetDC(HWND_DESKTOP);
	int w, h;
	w = GetSystemMetrics(SM_CXSCREEN);
	h = GetSystemMetrics(SM_CXSCREEN);
	while(10000000)
	{
		BitBlt(hdc, 1, 0, w, h, hdc, NULL, NULL, SRCPAINT);
		BitBlt(hdc, 1, 0, w, h, hdc, NULL, NULL, NOTSRCCOPY); //Caution: Sezures
		BitBlt(hdc, -91, 10, w, h, hdc, NULL, NULL, SRCAND);
		BitBlt(hdc, rand() % (h - 60), 12, w, h, hdc, NULL, NULL, SRCCOPY);
		BitBlt(hdc, rand() % (w - 50), 12, w, h, hdc, NULL, NULL, NOTSRCCOPY);
	}
}
