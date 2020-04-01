#include "math.h"

#include "WolframRTL.h"

static WolframCompileLibrary_Functions funStructCompile;

static const mint UnitIncrements[3] = {1, 1, 1};

static UnaryMathFunctionPointer FP0;


static mint I0_0;

static mint I0_1;

static mint I0_2;

static mint I0_3;

static mint I0_4;

static mint I0_5;

static mint I0_6;

static mreal R0_20;

static mreal R0_30;

static mreal R0_33;

static mbool initialize = 1;

#include "model.h"

DLLEXPORT int Initialize_model(WolframLibraryData libData)
{
if( initialize)
{
funStructCompile = libData->compileLibraryFunctions;
I0_5 = (mint) -8;
I0_4 = (mint) 4;
I0_6 = (mint) -4;
R0_30 = (mreal) 0.25;
I0_0 = (mint) -2;
R0_33 = (mreal) 3.141592653589793;
I0_1 = (mint) 2;
I0_3 = (mint) -1;
I0_2 = (mint) 1;
R0_20 = (mreal) 0.5;
FP0 = funStructCompile->getUnaryMathFunction(59, 3);/*  Internal`ReciprocalSqrt  */
if( FP0 == 0)
{
return LIBRARY_FUNCTION_ERROR;
}
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

DLLEXPORT int model(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res)
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
mreal R0_12;
mreal R0_13;
mreal R0_14;
mreal R0_15;
mreal R0_16;
mreal R0_17;
mreal R0_18;
mreal R0_19;
mreal R0_21;
mreal R0_22;
mreal R0_23;
mreal R0_24;
mreal R0_25;
mreal R0_26;
mreal R0_27;
mreal R0_28;
mreal R0_29;
mreal R0_31;
mreal R0_32;
int err = 0;
R0_0 = A1;
R0_1 = A2;
R0_2 = A3;
R0_3 = A4;
R0_4 = A5;
R0_5 = A6;
R0_6 = A7;
R0_7 = (mreal) I0_0;
R0_7 = R0_7 * R0_5;
R0_8 = (mreal) I0_1;
R0_8 = R0_8 + R0_7;
R0_9 = -R0_5;
R0_10 = (mreal) I0_2;
R0_10 = R0_10 + R0_9;
R0_11 = pow(R0_0, R0_10);
R0_12 = pow(R0_1, R0_10);
R0_13 = R0_2 * R0_2;
R0_14 = 1 / R0_13;
R0_13 = R0_4 * R0_4;
R0_15 = (mreal) I0_1;
R0_15 = R0_15 * R0_5;
R0_16 = R0_2 * R0_2;
R0_17 = (mreal) I0_3;
R0_17 = R0_17 + R0_15;
R0_18 = pow(R0_1, R0_17);
R0_19 = R0_5 * R0_5;
R0_21 = 1 / R0_6;
R0_22 = pow(R0_0, R0_8);
R0_23 = pow(R0_1, R0_8);
R0_24 = (mreal) I0_0;
R0_24 = R0_24 * R0_11 * R0_12;
R0_22 = R0_22 + R0_23 + R0_24;
R0_23 = (mreal) I0_2;
R0_23 = R0_23 + R0_7 + R0_19;
R0_24 = 1 / R0_23;
R0_22 = R0_22 * R0_24 * R0_14;
R0_24 = pow(R0_1, R0_9);
R0_23 = -R0_12;
R0_25 = R0_11 + R0_23;
R0_23 = 1 / R0_10;
R0_26 = (mreal) I0_0;
R0_26 = R0_26 * R0_1 * R0_4;
R0_27 = (mreal) I0_1;
R0_27 = R0_27 * R0_3 * R0_4;
R0_28 = R0_18 * R0_5 * R0_16;
R0_29 = -R0_28;
R0_26 = R0_26 + R0_27 + R0_29;
R0_24 = R0_24 * R0_25 * R0_23 * R0_14 * R0_26 * R0_6;
R0_25 = -R0_24;
R0_23 = pow(R0_1, R0_7);
R0_26 = R0_1 * R0_1;
R0_27 = (mreal) I0_4;
R0_27 = R0_27 * R0_26 * R0_13;
R0_26 = (mreal) I0_5;
R0_26 = R0_26 * R0_1 * R0_3 * R0_13;
R0_29 = R0_3 * R0_3;
R0_28 = (mreal) I0_4;
R0_28 = R0_28 * R0_29 * R0_13;
R0_29 = pow(R0_1, R0_15);
R0_24 = (mreal) I0_4;
R0_24 = R0_24 * R0_29 * R0_5 * R0_4 * R0_16;
R0_29 = (mreal) I0_6;
R0_29 = R0_29 * R0_18 * R0_5 * R0_3 * R0_4 * R0_16;
R0_31 = (mreal) I0_4;
R0_31 = R0_31 * R0_5;
R0_32 = (mreal) I0_0;
R0_32 = R0_32 + R0_31;
R0_31 = pow(R0_1, R0_32);
if( I0_4 == 0)
{
if( R0_2 == 0)
{
err = 1;
goto error_label;
}
else
{
R0_32 = 1;
}
}
else
{
mint S0 = I0_4;
mreal S1 = R0_2;
mbool S2 = 0;
if( S0 < 0)
{
S2 = 1;
S0 = -S0;
}
R0_32 = 1;
while( S0)
{
if( S0 & 1)
{
R0_32 = S1 * R0_32;
}
S1 = S1 * S1;
S0 = S0 >> 1;
}
if( S2)
{
R0_32 = 1 / R0_32;
}
}
R0_31 = R0_31 * R0_19 * R0_32;
R0_27 = R0_27 + R0_26 + R0_28 + R0_24 + R0_29 + R0_31;
R0_26 = R0_6 * R0_6;
R0_28 = R0_30 * R0_23 * R0_14 * R0_27 * R0_26;
R0_22 = R0_22 + R0_25 + R0_28;
R0_25 = R0_20 * R0_21 * R0_22;
R0_21 = pow(R0_1, R0_5);
R0_21 = R0_21 * R0_2;
R0_22 = log(R0_21);
R0_28 = (mreal) I0_1;
R0_28 = R0_28 * R0_33;
{
mint S0 = FP0((void*) (&R0_23), (void*) (&R0_28), 1, UnitIncrements, 4);/*  Internal`ReciprocalSqrt  */
err = S0 == 0 ? 0 : LIBRARY_NUMERICAL_ERROR;
if( err)
{
goto error_label;
}
}
{
mint S0 = FP0((void*) (&R0_28), (void*) (&R0_6), 1, UnitIncrements, 4);/*  Internal`ReciprocalSqrt  */
err = S0 == 0 ? 0 : LIBRARY_NUMERICAL_ERROR;
if( err)
{
goto error_label;
}
}
R0_23 = R0_23 * R0_28;
R0_28 = log(R0_23);
R0_23 = -R0_28;
R0_25 = R0_25 + R0_22 + R0_23;
*Res = R0_25;
error_label:
funStructCompile->WolframLibraryData_cleanUp(libData, 1);
return err;
}

