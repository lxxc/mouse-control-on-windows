#include <windows.h>
#include <winable.h>
int main(void){
	INPUT mouseInput;
	ZeroMemory(&mouseInput, sizeof mouseInput);
	mouseInput.type = INPUT_MOUSE;
	mouseInput.mi.dx = 32767;
	mouseInput.mi.dy = 32767;
	mouseInput.mi.dwFlags = MOUSEEVENTF_MOVE | 	MOUSEEVENTF_ABSOLUTE;
	SendInput(1, &mouseInput, sizeof(mouseInput));
	return 0;
}