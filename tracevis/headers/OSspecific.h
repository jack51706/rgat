/*
Copyright 2016 Nia Catlin

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/*
This is intended to be the location for OS abstractions
Need to migrate all Windows API (and -soon- Linux) routines here
*/
#pragma once
#include <stdafx.h>

string getModulePath();
string basename(string path);
bool fileExists(string path);
void execute_tracer(string executable, string args, void *clientState_ptr);
bool getSavePath(string saveDir, string filename, string *result, int PID);

//in: mutex to wait on, waitTimeCode ms to wait per warning
bool obtainMutex(HANDLE mutex, int waitTimeCode);
void dropMutex(HANDLE mutex);