#pragma once

void GetOSVersion();
void GetProcessNameAndPID();
void Shell(char*);
void DisableHighDPIScaling();
void SetAppCompat();
FARPROC GetFunctionAddress(HMODULE, LPCSTR);