#include "WolframLibrary.h"

EXTERN_C DLLEXPORT int Initialize_model(WolframLibraryData libData);

EXTERN_C DLLEXPORT void Uninitialize_model(WolframLibraryData libData);

EXTERN_C DLLEXPORT int model(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal A8, mreal A9, mreal A10, mreal A11, mreal A12, mreal A13, mreal *Res);

