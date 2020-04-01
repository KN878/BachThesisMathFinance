#include "math.h"

#include "WolframRTL.h"

static WolframCompileLibrary_Functions funStructCompile;

static mint I0_0;

static mint I0_1;

static mint I0_2;

static mint I0_3;

static mint I0_4;

static mint I0_5;

static mint I0_6;

static mreal R0_15;

static mreal R0_23;

static mreal R0_24;

static mint I1_0;

static mint I1_1;

static mreal R1_9;

static mreal R1_10;

static mreal R1_13;

static mint I2_0;

static mint I2_1;

static mint I2_2;

static mint I2_3;

static mint I2_4;

static mreal R2_11;

static mreal R2_12;

static mreal R2_15;

static mbool initialize = 1;

#include "grad.h"

DLLEXPORT int Initialize_grad1(WolframLibraryData libData) {
    if (initialize) {
        funStructCompile = libData->compileLibraryFunctions;
        I0_6 = (mint) -8;
        I0_4 = (mint) 4;
        I0_5 = (mint) 8;
        R0_15 = (mreal) -0.25;
        I0_3 = (mint) -4;
        R0_24 = (mreal) 0.25;
        I0_2 = (mint) -2;
        I0_1 = (mint) 2;
        I0_0 = (mint) 3;
        R0_23 = (mreal) 0.5;
        R1_13 = (mreal) -0.25;
        R1_10 = (mreal) -0.5;
        I1_1 = (mint) -2;
        I1_0 = (mint) 2;
        R1_9 = (mreal) 0.5;
        I2_4 = (mint) 4;
        R2_15 = (mreal) -0.25;
        I2_2 = (mint) -4;
        R2_12 = (mreal) -0.5;
        I2_3 = (mint) -2;
        I2_1 = (mint) 2;
        I2_0 = (mint) -1;
        R2_11 = (mreal) 0.5;
        initialize = 0;
    }
    return 0;
}

DLLEXPORT void Uninitialize_grad1(WolframLibraryData libData) {
    if (!initialize) {
        initialize = 1;
    }
}

DLLEXPORT int
grad1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
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
    mreal R0_16;
    mreal R0_17;
    mreal R0_18;
    mreal R0_19;
    mreal R0_20;
    mreal R0_21;
    mreal R0_22;
    mreal R0_25;
    mreal R0_26;
    mreal R0_27;
    mreal R0_28;
    int err = 0;
    R0_0 = A1;
    R0_1 = A2;
    R0_2 = A3;
    R0_3 = A4;
    R0_4 = A5;
    R0_5 = A6;
    R0_6 = R0_2 * R0_2;
    R0_7 = 1 / R0_6;
    R0_6 = sqrt(R0_0);
    R0_8 = 1 / R0_2;
    R0_9 = sqrt(R0_1);
    R0_10 = 1 / R0_1;
    R0_11 = -R0_1;
    R0_12 = R0_11 + R0_3;
    R0_13 = R0_12 * R0_4;
    R0_14 = R0_2 * R0_2;
    R0_16 = R0_15 * R0_14;
    R0_17 = R0_13 + R0_16;
    if (I0_0 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_18 = 1;
        }
    } else {
        mint S0 = I0_0;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_18 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_18 = S1 * R0_18;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_18 = 1 / R0_18;
        }
    }
    R0_19 = 1 / R0_18;
    R0_18 = (mreal) I0_1;
    R0_18 = R0_18 * R0_6 * R0_8;
    R0_20 = (mreal) I0_2;
    R0_20 = R0_20 * R0_6 * R0_7;
    R0_21 = (mreal) I0_1;
    R0_21 = R0_21 * R0_9 * R0_7;
    R0_20 = R0_20 + R0_21;
    R0_21 = (mreal) I0_2;
    R0_21 = R0_21 * R0_9 * R0_8;
    R0_22 = R0_18 + R0_21;
    R0_21 = 1 / R0_5;
    R0_20 = R0_20 * R0_22 * R0_21;
    R0_22 = R0_24 * R0_10 * R0_2;
    R0_21 = R0_10 * R0_8 * R0_17;
    R0_25 = -R0_21;
    R0_21 = R0_17 * R0_17;
    R0_26 = (mreal) I0_2;
    R0_26 = R0_26 * R0_10 * R0_19 * R0_21;
    R0_22 = R0_22 + R0_25 + R0_26;
    R0_25 = R0_23 * R0_22 * R0_5;
    R0_22 = (mreal) I0_3;
    R0_22 = R0_22 * R0_0 * R0_4 * R0_19;
    R0_26 = (mreal) I0_4;
    R0_26 = R0_26 * R0_3 * R0_4 * R0_19;
    R0_21 = -R0_8;
    R0_27 = log(R0_18);
    R0_28 = (mreal) I0_5;
    R0_28 = R0_28 * R0_3 * R0_4 * R0_19 * R0_27;
    R0_22 = R0_22 + R0_26 + R0_21 + R0_28;
    R0_26 = R0_23 * R0_22;
    R0_22 = (mreal) I0_4;
    R0_22 = R0_22 * R0_1 * R0_4 * R0_19;
    R0_21 = (mreal) I0_3;
    R0_21 = R0_21 * R0_3 * R0_4 * R0_19;
    R0_28 = (mreal) I0_1;
    R0_28 = R0_28 * R0_9 * R0_8;
    R0_27 = log(R0_28);
    R0_28 = (mreal) I0_6;
    R0_28 = R0_28 * R0_3 * R0_4 * R0_19 * R0_27;
    R0_22 = R0_22 + R0_21 + R0_8 + R0_28;
    R0_21 = R0_23 * R0_22;
    R0_22 = R0_8 + R0_20 + R0_25 + R0_26 + R0_21;
    *Res = R0_22;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
grad2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R1_0;
    mreal R1_1;
    mreal R1_2;
    mreal R1_3;
    mreal R1_4;
    mreal R1_5;
    mreal R1_6;
    mreal R1_7;
    mreal R1_8;
    mreal R1_11;
    mreal R1_12;
    mreal R1_14;
    mreal R1_15;
    R1_0 = A1;
    R1_1 = A2;
    R1_2 = A3;
    R1_3 = A4;
    R1_4 = A5;
    R1_5 = A6;
    R1_6 = 1 / R1_1;
    R1_7 = R1_2 * R1_2;
    R1_8 = 1 / R1_7;
    R1_7 = 1 / R1_2;
    R1_11 = R1_10 * R1_6 * R1_4;
    R1_12 = -R1_1;
    R1_12 = R1_12 + R1_3;
    R1_12 = R1_12 * R1_4;
    R1_14 = R1_2 * R1_2;
    R1_15 = R1_13 * R1_14;
    R1_12 = R1_12 + R1_15;
    R1_15 = (mreal) I1_0;
    R1_15 = R1_15 * R1_6 * R1_4 * R1_8 * R1_12;
    R1_11 = R1_11 + R1_15;
    R1_15 = R1_9 * R1_11 * R1_5;
    R1_11 = sqrt(R1_0);
    R1_12 = (mreal) I1_0;
    R1_12 = R1_12 * R1_11 * R1_7;
    R1_11 = log(R1_12);
    R1_12 = (mreal) I1_1;
    R1_12 = R1_12 * R1_4 * R1_8 * R1_11;
    R1_11 = sqrt(R1_1);
    R1_14 = (mreal) I1_0;
    R1_14 = R1_14 * R1_11 * R1_7;
    R1_11 = log(R1_14);
    R1_14 = (mreal) I1_0;
    R1_14 = R1_14 * R1_4 * R1_8 * R1_11;
    R1_15 = R1_15 + R1_12 + R1_14;
    *Res = R1_15;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
grad3(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal *Res) {
    mreal R2_0;
    mreal R2_1;
    mreal R2_2;
    mreal R2_3;
    mreal R2_4;
    mreal R2_5;
    mreal R2_6;
    mreal R2_7;
    mreal R2_8;
    mreal R2_9;
    mreal R2_10;
    mreal R2_13;
    mreal R2_14;
    mreal R2_16;
    mreal R2_17;
    mreal R2_18;
    R2_0 = A1;
    R2_1 = A2;
    R2_2 = A3;
    R2_3 = A4;
    R2_4 = A5;
    R2_5 = A6;
    R2_6 = 1 / R2_1;
    R2_7 = -R2_1;
    R2_8 = R2_7 + R2_3;
    R2_9 = R2_2 * R2_2;
    R2_10 = 1 / R2_9;
    R2_9 = 1 / R2_2;
    R2_13 = R2_12 * R2_6 * R2_8;
    R2_14 = R2_8 * R2_4;
    R2_16 = R2_2 * R2_2;
    R2_17 = R2_15 * R2_16;
    R2_14 = R2_14 + R2_17;
    R2_17 = (mreal) I2_1;
    R2_17 = R2_17 * R2_6 * R2_8 * R2_10 * R2_14;
    R2_14 = (mreal) I2_0;
    R2_14 = R2_14 + R2_13 + R2_17;
    R2_13 = R2_11 * R2_14 * R2_5;
    R2_14 = (mreal) I2_1;
    R2_14 = R2_14 * R2_0 * R2_10;
    R2_17 = sqrt(R2_0);
    R2_16 = (mreal) I2_1;
    R2_16 = R2_16 * R2_17 * R2_9;
    R2_17 = log(R2_16);
    R2_16 = (mreal) I2_2;
    R2_16 = R2_16 * R2_3 * R2_10 * R2_17;
    R2_14 = R2_14 + R2_16;
    R2_16 = R2_11 * R2_14;
    R2_14 = (mreal) I2_3;
    R2_14 = R2_14 * R2_1 * R2_10;
    R2_17 = sqrt(R2_1);
    R2_18 = (mreal) I2_1;
    R2_18 = R2_18 * R2_17 * R2_9;
    R2_17 = log(R2_18);
    R2_18 = (mreal) I2_4;
    R2_18 = R2_18 * R2_3 * R2_10 * R2_17;
    R2_14 = R2_14 + R2_18;
    R2_18 = R2_11 * R2_14;
    R2_13 = R2_13 + R2_16 + R2_18;
    *Res = R2_13;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

