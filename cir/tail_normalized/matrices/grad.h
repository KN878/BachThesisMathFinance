#include "WolframLibrary.h"

EXTERN_C DLLEXPORT int Initialize_grad1(WolframLibraryData libData);

EXTERN_C DLLEXPORT void Uninitialize_grad1(WolframLibraryData libData);

EXTERN_C DLLEXPORT int grad1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res);

EXTERN_C DLLEXPORT int grad2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res);
EXTERN_C DLLEXPORT int grad3(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res);
