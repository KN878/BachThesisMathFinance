#include "math.h"

#include "WolframRTL.h"

static WolframCompileLibrary_Functions funStructCompile;

static const mint UnitIncrements[3] = {1, 1, 1};

static UnaryMathFunctionPointer FP0;


static mint I0_0;

static mreal R0_6;

static mreal R0_12;

static mbool initialize = 1;

#include "model.h"

DLLEXPORT int Initialize_model(WolframLibraryData libData) {
    if (initialize) {
        funStructCompile = libData->compileLibraryFunctions;
        R0_12 = (mreal) -0.25;
        I0_0 = (mint) 2;
        R0_6 = (mreal) 0.5;
        FP0 = funStructCompile->getUnaryMathFunction(59, 3);/*  Internal`ReciprocalSqrt  */
        if (FP0 == 0) {
            return LIBRARY_FUNCTION_ERROR;
        }
        initialize = 0;
    }
    return 0;
}

DLLEXPORT void Uninitialize_model(WolframLibraryData libData) {
    if (!initialize) {
        initialize = 1;
    }
}

DLLEXPORT int
model(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R0_0;
    mreal R0_1;
    mreal R0_2;
    mreal R0_3;
    mreal R0_4;
    mreal R0_5;
    mreal R0_7;
    mreal R0_8;
    mreal R0_9;
    mreal R0_10;
    mreal R0_11;
    mreal R0_13;
    mreal R0_14;
    int err = 0;
    R0_0 = A1;
    R0_1 = A2;
    R0_2 = A3;
    R0_3 = A4;
    R0_4 = A5;
    R0_5 = A6;
    R0_7 = R0_2 * R0_2;
    R0_8 = 1 / R0_7;
    R0_7 = 1 / R0_5;
    R0_9 = sqrt(R0_0);
    R0_10 = sqrt(R0_1);
    R0_11 = -R0_10;
    R0_9 = R0_9 + R0_11;
    R0_11 = (mreal) I0_0;
    R0_11 = R0_11 * R0_9;
    {
        mint S0 = FP0((void *) (&R0_9), (void *) (&R0_1), 1, UnitIncrements, 4);/*  Internal`ReciprocalSqrt  */
        err = S0 == 0 ? 0 : LIBRARY_NUMERICAL_ERROR;
        if (err) {
            goto error_label;
        }
    }
    R0_10 = -R0_1;
    R0_10 = R0_10 + R0_3;
    R0_10 = R0_10 * R0_4;
    R0_13 = R0_2 * R0_2;
    R0_14 = R0_12 * R0_13;
    R0_10 = R0_10 + R0_14;
    R0_9 = R0_9 * R0_10 * R0_5;
    R0_10 = -R0_9;
    R0_11 = R0_11 + R0_10;
    R0_10 = R0_11 * R0_11;
    R0_11 = R0_6 * R0_8 * R0_7 * R0_10;
    R0_8 = log(R0_2);
    R0_11 = R0_11 + R0_8;
    *Res = R0_11;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

