#include "WolframLibrary.h"

EXTERN_C DLLEXPORT int Initialize_hess1_1(WolframLibraryData libData);

EXTERN_C DLLEXPORT void Uninitialize_hess1_1(WolframLibraryData libData);

EXTERN_C DLLEXPORT int hess1_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res);

EXTERN_C DLLEXPORT int hess2_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res);
EXTERN_C DLLEXPORT int hess2_2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res);
EXTERN_C DLLEXPORT int hess3_1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res);
EXTERN_C DLLEXPORT int hess3_2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res);
EXTERN_C DLLEXPORT int hess3_3(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res);
