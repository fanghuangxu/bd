#include<windows.h>
int main(){
	HWND hWnd=GetForegroundWindow();
    ShowWindow(hWnd,SW_HIDE);
	while(true){
		MessageBox(NULL, TEXT("��ĵ������˲�����"), TEXT("����"), MB_OK | MB_ICONERROR);
	}
	return 0;
}
