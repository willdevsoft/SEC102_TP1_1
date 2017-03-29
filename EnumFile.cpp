// SEC102 TP1 Exercice1 by Wilfried Poisson
// How to get file size using WIN32 API ?
// V1.0: début du TP avec l'utilisation de l'API win32: GetFileSizeEx

//How to get file size using WIN32 API ? Is there any direct API available ?
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <atlstr.h> 

LARGE_INTEGER GetMyFileSize(CString strFileName)
{
	LARGE_INTEGER nLargeInteger = { 0 };
	HANDLE hFile = CreateFile(strFileName, GENERIC_READ, FILE_SHARE_READ, NULL,
		OPEN_EXISTING, FILE_ATTRIBUTE_READONLY, NULL);

	if (hFile != INVALID_HANDLE_VALUE)
	{
		BOOL bSuccess = GetFileSizeEx(hFile, &nLargeInteger);
	}

	return nLargeInteger;
}

int main(void)
{
	LARGE_INTEGER GetMyFileSize(CString strFileName);

}