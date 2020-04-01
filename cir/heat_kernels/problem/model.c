#include "math.h"

#include "WolframRTL.h"

static WolframCompileLibrary_Functions funStructCompile;

static mint I0_0;

static mint I0_1;

static mint I0_2;

static mint I0_3;

static mreal R0_12;

static mreal R0_22;

static mreal R0_26;

static mbool initialize = 1;

#include "model.h"

DLLEXPORT int Initialize_model(WolframLibraryData libData)
{
if( initialize)
{
funStructCompile = libData->compileLibraryFunctions;
I0_3 = (mint) 4;
R0_12 = (mreal) -0.25;
I0_2 = (mint) -4;
R0_26 = (mreal) -0.5;
I0_1 = (mint) -2;
I0_0 = (mint) 2;
R0_22 = (mreal) 0.5;
initialize = 0;
}
return 0;
}

DLLEXPORT void Uninitialize_model(WolframLibraryData libData)
{
if( !initialize)
{
initialize = 1;
}
}

DLLEXPORT int model(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res)
{
mreal R0_0;
mreal R0_1;
mreal R0_2;
mreal R0_3;
mreal R0_4;
mreal R0_5;
mreal R0_6;
mreal R0_7;
mreal R0_8;
mreal R0_9;
mreal R0_10;
mreal R0_11;
mreal R0_13;
mreal R0_14;
mreal R0_15;
mreal R0_16;
mreal R0_17;
mreal R0_18;
mreal R0_19;
mreal R0_20;
mreal R0_21;
mreal R0_23;
mreal R0_24;
mreal R0_25;
mreal R0_27;
mreal R0_28;
mreal R0_29;
R0_0 = A1;
R0_1 = A2;
R0_2 = A3;
R0_3 = A4;
R0_4 = A5;
R0_5 = A6;
R0_6 = 1 / R0_2;
R0_7 = 1 / R0_1;
R0_8 = -R0_1;
R0_9 = R0_8 + R0_3;
R0_10 = R0_9 * R0_4;
R0_11 = R0_2 * R0_2;
R0_13 = R0_12 * R0_11;
R0_14 = R0_10 + R0_13;
R0_15 = R0_2 * R0_2;
R0_16 = 1 / R0_15;
R0_15 = sqrt(R0_0);
R0_17 = (mreal) I0_0;
R0_17 = R0_17 * R0_15 * R0_6;
R0_18 = log(R0_17);
R0_19 = sqrt(R0_1);
R0_20 = (mreal) I0_0;
R0_20 = R0_20 * R0_19 * R0_6;
R0_21 = log(R0_20);
R0_23 = (mreal) I0_1;
R0_23 = R0_23 * R0_19 * R0_6;
R0_24 = R0_17 + R0_23;
R0_23 = R0_24 * R0_24;
R0_24 = 1 / R0_5;
R0_25 = R0_22 * R0_23 * R0_24;
R0_23 = -R0_4;
R0_24 = R0_26 * R0_7 * R0_14;
R0_27 = R0_14 * R0_14;
R0_28 = R0_7 * R0_16 * R0_27;
R0_23 = R0_23 + R0_24 + R0_28;
R0_24 = R0_22 * R0_23 * R0_5;
R0_23 = (mreal) I0_0;
R0_23 = R0_23 * R0_0 * R0_4 * R0_16;
R0_28 = (mreal) I0_2;
R0_28 = R0_28 * R0_3 * R0_4 * R0_16 * R0_18;
R0_23 = R0_23 + R0_18 + R0_28;
R0_28 = R0_22 * R0_23;
R0_23 = (mreal) I0_1;
R0_23 = R0_23 * R0_1 * R0_4 * R0_16;
R0_27 = -R0_21;
R0_29 = (mreal) I0_3;
R0_29 = R0_29 * R0_3 * R0_4 * R0_16 * R0_21;
R0_23 = R0_23 + R0_27 + R0_29;
R0_27 = R0_22 * R0_23;
R0_23 = log(R0_2);
R0_25 = R0_25 + R0_24 + R0_28 + R0_27 + R0_23;
*Res = R0_25;
funStructCompile->WolframLibraryData_cleanUp(libData, 1);
return 0;
}

