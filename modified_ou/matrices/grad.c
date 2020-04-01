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

static mint I0_7;

static mint I0_8;

static mreal R0_30;

static mreal R0_39;

static mreal R0_41;

static mint I1_0;

static mint I1_1;

static mint I1_2;

static mint I1_3;

static mint I1_4;

static mint I1_5;

static mint I1_6;

static mreal R1_11;

static mreal R1_17;

static mint I2_0;

static mint I2_1;

static mint I2_2;

static mint I2_3;

static mint I2_4;

static mint I2_5;

static mint I2_6;

static mint I2_7;

static mreal R2_12;

static mreal R2_19;

static mint I3_0;

static mint I3_1;

static mint I3_2;

static mint I3_3;

static mint I3_4;

static mint I3_5;

static mint I3_6;

static mint I3_7;

static mreal R3_40;

static mreal R3_46;

static mreal R3_53;

static mbool initialize = 1;

#include "grad.h"

DLLEXPORT int Initialize_grad1(WolframLibraryData libData) {
    if (initialize) {
        funStructCompile = libData->compileLibraryFunctions;
        I0_7 = (mint) -8;
        I0_5 = (mint) 4;
        I0_6 = (mint) 8;
        I0_8 = (mint) -4;
        R0_39 = (mreal) 0.25;
        R0_41 = (mreal) -0.5;
        I0_0 = (mint) -2;
        I0_1 = (mint) 2;
        I0_4 = (mint) -1;
        I0_2 = (mint) 1;
        I0_3 = (mint) 3;
        R0_30 = (mreal) 0.5;
        I1_2 = (mint) -8;
        I1_3 = (mint) 8;
        I1_4 = (mint) -4;
        R1_17 = (mreal) 0.25;
        I1_1 = (mint) -2;
        I1_6 = (mint) 2;
        I1_5 = (mint) -1;
        I1_0 = (mint) 1;
        R1_11 = (mreal) 0.5;
        I2_5 = (mint) 4;
        I2_3 = (mint) 8;
        I2_6 = (mint) -4;
        I2_4 = (mint) -16;
        R2_19 = (mreal) 0.25;
        I2_2 = (mint) -2;
        I2_1 = (mint) 2;
        I2_7 = (mint) -1;
        I2_0 = (mint) 1;
        R2_12 = (mreal) 0.5;
        I3_5 = (mint) -8;
        I3_4 = (mint) 4;
        I3_7 = (mint) 8;
        I3_6 = (mint) -4;
        R3_46 = (mreal) -0.5;
        R3_53 = (mreal) 0.25;
        I3_0 = (mint) -2;
        I3_1 = (mint) 2;
        I3_3 = (mint) -1;
        I3_2 = (mint) 1;
        R3_40 = (mreal) 0.5;
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
grad1(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
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
    mreal R0_20;
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
    mreal R0_33;
    mreal R0_34;
    mreal R0_35;
    mreal R0_36;
    mreal R0_37;
    mreal R0_38;
    mreal R0_40;
    mreal R0_42;
    mreal R0_43;
    mreal R0_44;
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
    R0_13 = 1 / R0_2;
    R0_14 = -R0_12;
    R0_15 = R0_11 + R0_14;
    R0_16 = 1 / R0_10;
    if (I0_3 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_17 = 1;
        }
    } else {
        mint S0 = I0_3;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_17 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_17 = S1 * R0_17;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_17 = 1 / R0_17;
        }
    }
    R0_18 = 1 / R0_17;
    R0_17 = (mreal) I0_1;
    R0_17 = R0_17 * R0_5;
    R0_19 = (mreal) I0_4;
    R0_19 = R0_19 + R0_17;
    R0_20 = pow(R0_1, R0_19);
    R0_21 = R0_5 * R0_5;
    R0_22 = pow(R0_1, R0_7);
    R0_23 = R0_4 * R0_4;
    R0_24 = pow(R0_1, R0_17);
    R0_25 = R0_2 * R0_2;
    R0_26 = (mreal) I0_5;
    R0_26 = R0_26 * R0_5;
    R0_27 = (mreal) I0_0;
    R0_27 = R0_27 + R0_26;
    R0_28 = pow(R0_1, R0_27);
    R0_29 = R0_6 * R0_6;
    R0_31 = 1 / R0_6;
    R0_32 = pow(R0_0, R0_8);
    R0_33 = pow(R0_1, R0_8);
    R0_34 = (mreal) I0_0;
    R0_34 = R0_34 * R0_11 * R0_12;
    R0_32 = R0_32 + R0_33 + R0_34;
    R0_33 = (mreal) I0_2;
    R0_33 = R0_33 + R0_7 + R0_21;
    R0_34 = 1 / R0_33;
    R0_33 = (mreal) I0_0;
    R0_33 = R0_33 * R0_32 * R0_34 * R0_18;
    R0_32 = (mreal) I0_4;
    R0_32 = R0_32 + R0_5;
    R0_34 = pow(R0_1, R0_32);
    R0_32 = (mreal) I0_1;
    R0_32 = R0_32 * R0_34 * R0_15 * R0_16 * R0_5 * R0_13 * R0_6;
    R0_34 = pow(R0_1, R0_9);
    R0_35 = (mreal) I0_0;
    R0_35 = R0_35 * R0_1 * R0_4;
    R0_36 = (mreal) I0_1;
    R0_36 = R0_36 * R0_3 * R0_4;
    R0_37 = R0_20 * R0_5 * R0_25;
    R0_38 = -R0_37;
    R0_35 = R0_35 + R0_36 + R0_38;
    R0_36 = (mreal) I0_1;
    R0_36 = R0_36 * R0_34 * R0_15 * R0_16 * R0_18 * R0_35 * R0_6;
    R0_35 = R0_2 * R0_2;
    R0_38 = 1 / R0_35;
    R0_35 = (mreal) I0_6;
    R0_35 = R0_35 * R0_24 * R0_5 * R0_4 * R0_2;
    R0_37 = (mreal) I0_7;
    R0_37 = R0_37 * R0_20 * R0_5 * R0_3 * R0_4 * R0_2;
    if (I0_3 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_34 = 1;
        }
    } else {
        mint S0 = I0_3;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_34 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_34 = S1 * R0_34;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_34 = 1 / R0_34;
        }
    }
    R0_40 = (mreal) I0_5;
    R0_40 = R0_40 * R0_28 * R0_21 * R0_34;
    R0_35 = R0_35 + R0_37 + R0_40;
    R0_37 = R0_39 * R0_22 * R0_38 * R0_35 * R0_29;
    R0_35 = R0_1 * R0_1;
    R0_40 = (mreal) I0_5;
    R0_40 = R0_40 * R0_35 * R0_23;
    R0_35 = (mreal) I0_7;
    R0_35 = R0_35 * R0_1 * R0_3 * R0_23;
    R0_34 = R0_3 * R0_3;
    R0_38 = (mreal) I0_5;
    R0_38 = R0_38 * R0_34 * R0_23;
    R0_34 = (mreal) I0_5;
    R0_34 = R0_34 * R0_24 * R0_5 * R0_4 * R0_25;
    R0_42 = (mreal) I0_8;
    R0_42 = R0_42 * R0_20 * R0_5 * R0_3 * R0_4 * R0_25;
    if (I0_5 == 0) {
        if (R0_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R0_43 = 1;
        }
    } else {
        mint S0 = I0_5;
        mreal S1 = R0_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R0_43 = 1;
        while (S0) {
            if (S0 & 1) {
                R0_43 = S1 * R0_43;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R0_43 = 1 / R0_43;
        }
    }
    R0_44 = R0_28 * R0_21 * R0_43;
    R0_40 = R0_40 + R0_35 + R0_38 + R0_34 + R0_42 + R0_44;
    R0_35 = R0_41 * R0_22 * R0_18 * R0_40 * R0_29;
    R0_33 = R0_33 + R0_32 + R0_36 + R0_37 + R0_35;
    R0_32 = R0_30 * R0_31 * R0_33;
    R0_31 = R0_13 + R0_32;
    *Res = R0_31;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

DLLEXPORT int
grad2(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
    mreal R1_0;
    mreal R1_1;
    mreal R1_2;
    mreal R1_3;
    mreal R1_4;
    mreal R1_5;
    mreal R1_6;
    mreal R1_7;
    mreal R1_8;
    mreal R1_9;
    mreal R1_10;
    mreal R1_12;
    mreal R1_13;
    mreal R1_14;
    mreal R1_15;
    mreal R1_16;
    mreal R1_18;
    mreal R1_19;
    mreal R1_20;
    R1_0 = A1;
    R1_1 = A2;
    R1_2 = A3;
    R1_3 = A4;
    R1_4 = A5;
    R1_5 = A6;
    R1_6 = A7;
    R1_7 = -R1_5;
    R1_8 = (mreal) I1_0;
    R1_8 = R1_8 + R1_7;
    R1_9 = R1_2 * R1_2;
    R1_10 = 1 / R1_9;
    R1_9 = R1_4 * R1_4;
    R1_12 = 1 / R1_6;
    R1_13 = pow(R1_1, R1_7);
    R1_14 = pow(R1_0, R1_8);
    R1_15 = pow(R1_1, R1_8);
    R1_16 = -R1_15;
    R1_14 = R1_14 + R1_16;
    R1_16 = 1 / R1_8;
    R1_15 = (mreal) I1_1;
    R1_15 = R1_15 * R1_13 * R1_14 * R1_16 * R1_4 * R1_10 * R1_6;
    R1_14 = (mreal) I1_1;
    R1_14 = R1_14 * R1_5;
    R1_16 = pow(R1_1, R1_14);
    R1_14 = (mreal) I1_2;
    R1_14 = R1_14 * R1_1 * R1_9;
    R1_13 = (mreal) I1_3;
    R1_13 = R1_13 * R1_3 * R1_9;
    R1_18 = (mreal) I1_6;
    R1_18 = R1_18 * R1_5;
    R1_19 = (mreal) I1_5;
    R1_19 = R1_19 + R1_18;
    R1_18 = pow(R1_1, R1_19);
    R1_19 = R1_2 * R1_2;
    R1_20 = (mreal) I1_4;
    R1_20 = R1_20 * R1_18 * R1_5 * R1_4 * R1_19;
    R1_14 = R1_14 + R1_13 + R1_20;
    R1_13 = R1_6 * R1_6;
    R1_20 = R1_17 * R1_16 * R1_10 * R1_14 * R1_13;
    R1_15 = R1_15 + R1_20;
    R1_20 = R1_11 * R1_12 * R1_15;
    *Res = R1_20;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
grad3(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
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
    mreal R2_11;
    mreal R2_13;
    mreal R2_14;
    mreal R2_15;
    mreal R2_16;
    mreal R2_17;
    mreal R2_18;
    mreal R2_20;
    mreal R2_21;
    mreal R2_22;
    R2_0 = A1;
    R2_1 = A2;
    R2_2 = A3;
    R2_3 = A4;
    R2_4 = A5;
    R2_5 = A6;
    R2_6 = A7;
    R2_7 = -R2_5;
    R2_8 = (mreal) I2_0;
    R2_8 = R2_8 + R2_7;
    R2_9 = R2_2 * R2_2;
    R2_10 = 1 / R2_9;
    R2_9 = (mreal) I2_1;
    R2_9 = R2_9 * R2_5;
    R2_11 = R2_2 * R2_2;
    R2_13 = 1 / R2_6;
    R2_14 = pow(R2_1, R2_7);
    R2_15 = pow(R2_0, R2_8);
    R2_16 = pow(R2_1, R2_8);
    R2_17 = -R2_16;
    R2_15 = R2_15 + R2_17;
    R2_17 = 1 / R2_8;
    R2_16 = (mreal) I2_2;
    R2_16 = R2_16 * R2_1;
    R2_18 = (mreal) I2_1;
    R2_18 = R2_18 * R2_3;
    R2_16 = R2_16 + R2_18;
    R2_14 = R2_14 * R2_15 * R2_17 * R2_16 * R2_10 * R2_6;
    R2_15 = -R2_14;
    R2_17 = (mreal) I2_2;
    R2_17 = R2_17 * R2_5;
    R2_16 = pow(R2_1, R2_17);
    R2_17 = R2_1 * R2_1;
    R2_18 = (mreal) I2_3;
    R2_18 = R2_18 * R2_17 * R2_4;
    R2_17 = (mreal) I2_4;
    R2_17 = R2_17 * R2_1 * R2_3 * R2_4;
    R2_14 = R2_3 * R2_3;
    R2_20 = (mreal) I2_3;
    R2_20 = R2_20 * R2_14 * R2_4;
    R2_14 = pow(R2_1, R2_9);
    R2_21 = (mreal) I2_5;
    R2_21 = R2_21 * R2_14 * R2_5 * R2_11;
    R2_14 = (mreal) I2_7;
    R2_14 = R2_14 + R2_9;
    R2_22 = pow(R2_1, R2_14);
    R2_14 = (mreal) I2_6;
    R2_14 = R2_14 * R2_22 * R2_5 * R2_3 * R2_11;
    R2_18 = R2_18 + R2_17 + R2_20 + R2_21 + R2_14;
    R2_17 = R2_6 * R2_6;
    R2_20 = R2_19 * R2_16 * R2_10 * R2_18 * R2_17;
    R2_15 = R2_15 + R2_20;
    R2_20 = R2_12 * R2_13 * R2_15;
    *Res = R2_20;
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return 0;
}

DLLEXPORT int
grad4(WolframLibraryData libData, mreal A1, mreal A2, mreal A3, mreal A4, mreal A5, mreal A6, mreal A7, mreal *Res) {
    mreal R3_0;
    mreal R3_1;
    mreal R3_2;
    mreal R3_3;
    mreal R3_4;
    mreal R3_5;
    mreal R3_6;
    mreal R3_7;
    mreal R3_8;
    mreal R3_9;
    mreal R3_10;
    mreal R3_11;
    mreal R3_12;
    mreal R3_13;
    mreal R3_14;
    mreal R3_15;
    mreal R3_16;
    mreal R3_17;
    mreal R3_18;
    mreal R3_19;
    mreal R3_20;
    mreal R3_21;
    mreal R3_22;
    mreal R3_23;
    mreal R3_24;
    mreal R3_25;
    mreal R3_26;
    mreal R3_27;
    mreal R3_28;
    mreal R3_29;
    mreal R3_30;
    mreal R3_31;
    mreal R3_32;
    mreal R3_33;
    mreal R3_34;
    mreal R3_35;
    mreal R3_36;
    mreal R3_37;
    mreal R3_38;
    mreal R3_39;
    mreal R3_41;
    mreal R3_42;
    mreal R3_43;
    mreal R3_44;
    mreal R3_45;
    mreal R3_47;
    mreal R3_48;
    mreal R3_49;
    mreal R3_50;
    mreal R3_51;
    mreal R3_52;
    mreal R3_54;
    mreal R3_55;
    mreal R3_56;
    int err = 0;
    R3_0 = A1;
    R3_1 = A2;
    R3_2 = A3;
    R3_3 = A4;
    R3_4 = A5;
    R3_5 = A6;
    R3_6 = A7;
    R3_7 = (mreal) I3_0;
    R3_7 = R3_7 * R3_5;
    R3_8 = (mreal) I3_1;
    R3_8 = R3_8 + R3_7;
    R3_9 = -R3_5;
    R3_10 = (mreal) I3_2;
    R3_10 = R3_10 + R3_9;
    R3_11 = pow(R3_0, R3_10);
    R3_12 = pow(R3_1, R3_10);
    R3_13 = R3_2 * R3_2;
    R3_14 = 1 / R3_13;
    R3_13 = (mreal) I3_1;
    R3_13 = R3_13 * R3_5;
    R3_15 = pow(R3_1, R3_9);
    R3_16 = -R3_12;
    R3_17 = R3_11 + R3_16;
    R3_18 = (mreal) I3_0;
    R3_18 = R3_18 * R3_1 * R3_4;
    R3_19 = (mreal) I3_1;
    R3_19 = R3_19 * R3_3 * R3_4;
    R3_20 = (mreal) I3_3;
    R3_20 = R3_20 + R3_13;
    R3_21 = pow(R3_1, R3_20);
    R3_22 = R3_2 * R3_2;
    R3_23 = R3_21 * R3_5 * R3_22;
    R3_24 = -R3_23;
    R3_23 = R3_18 + R3_19 + R3_24;
    R3_25 = log(R3_1);
    R3_26 = R3_4 * R3_4;
    R3_27 = R3_5 * R3_5;
    R3_28 = 1 / R3_10;
    R3_29 = (mreal) I3_2;
    R3_29 = R3_29 + R3_7 + R3_27;
    R3_30 = pow(R3_0, R3_8);
    R3_31 = log(R3_0);
    R3_32 = pow(R3_1, R3_8);
    R3_33 = pow(R3_1, R3_7);
    R3_34 = R3_6 * R3_6;
    R3_35 = pow(R3_1, R3_13);
    R3_36 = (mreal) I3_4;
    R3_36 = R3_36 * R3_5;
    R3_37 = (mreal) I3_0;
    R3_37 = R3_37 + R3_36;
    R3_38 = pow(R3_1, R3_37);
    if (I3_4 == 0) {
        if (R3_2 == 0) {
            err = 1;
            goto error_label;
        } else {
            R3_39 = 1;
        }
    } else {
        mint S0 = I3_4;
        mreal S1 = R3_2;
        mbool S2 = 0;
        if (S0 < 0) {
            S2 = 1;
            S0 = -S0;
        }
        R3_39 = 1;
        while (S0) {
            if (S0 & 1) {
                R3_39 = S1 * R3_39;
            }
            S1 = S1 * S1;
            S0 = S0 >> 1;
        }
        if (S2) {
            R3_39 = 1 / R3_39;
        }
    }
    R3_41 = 1 / R3_6;
    R3_42 = (mreal) I3_0;
    R3_42 = R3_42 * R3_11 * R3_12;
    R3_43 = R3_30 + R3_32 + R3_42;
    R3_42 = (mreal) I3_0;
    R3_42 = R3_42 + R3_13;
    R3_44 = R3_29 * R3_29;
    R3_45 = 1 / R3_44;
    R3_43 = R3_43 * R3_42 * R3_45 * R3_14;
    R3_42 = -R3_43;
    R3_43 = R3_10 * R3_10;
    R3_45 = 1 / R3_43;
    R3_43 = R3_15 * R3_17 * R3_45 * R3_14 * R3_23 * R3_6;
    R3_45 = -R3_43;
    R3_43 = R3_15 * R3_17 * R3_28 * R3_14 * R3_23 * R3_6 * R3_25;
    R3_44 = R3_1 * R3_1;
    R3_47 = (mreal) I3_4;
    R3_47 = R3_47 * R3_44 * R3_26;
    R3_44 = (mreal) I3_5;
    R3_44 = R3_44 * R3_1 * R3_3 * R3_26;
    R3_48 = R3_3 * R3_3;
    R3_49 = (mreal) I3_4;
    R3_49 = R3_49 * R3_48 * R3_26;
    R3_48 = (mreal) I3_4;
    R3_48 = R3_48 * R3_35 * R3_5 * R3_4 * R3_22;
    R3_50 = (mreal) I3_6;
    R3_50 = R3_50 * R3_21 * R3_5 * R3_3 * R3_4 * R3_22;
    R3_51 = R3_38 * R3_27 * R3_39;
    R3_47 = R3_47 + R3_44 + R3_49 + R3_48 + R3_50 + R3_51;
    R3_44 = R3_46 * R3_33 * R3_14 * R3_47 * R3_34 * R3_25;
    R3_47 = R3_11 * R3_31;
    R3_49 = -R3_47;
    R3_47 = R3_12 * R3_25;
    R3_49 = R3_49 + R3_47;
    R3_47 = R3_15 * R3_28 * R3_14 * R3_23 * R3_6 * R3_49;
    R3_49 = -R3_47;
    R3_47 = 1 / R3_29;
    R3_48 = (mreal) I3_0;
    R3_48 = R3_48 * R3_30 * R3_31;
    R3_50 = (mreal) I3_1;
    R3_50 = R3_50 * R3_11 * R3_12 * R3_31;
    R3_51 = (mreal) I3_0;
    R3_51 = R3_51 * R3_32 * R3_25;
    R3_52 = (mreal) I3_1;
    R3_52 = R3_52 * R3_11 * R3_12 * R3_25;
    R3_48 = R3_48 + R3_50 + R3_51 + R3_52;
    R3_47 = R3_47 * R3_14 * R3_48;
    R3_48 = R3_21 * R3_22;
    R3_50 = -R3_48;
    R3_48 = (mreal) I3_0;
    R3_48 = R3_48 * R3_21 * R3_5 * R3_22 * R3_25;
    R3_50 = R3_50 + R3_48;
    R3_48 = R3_15 * R3_17 * R3_28 * R3_14 * R3_6 * R3_50;
    R3_50 = -R3_48;
    R3_51 = (mreal) I3_4;
    R3_51 = R3_51 * R3_35 * R3_4 * R3_22;
    R3_52 = (mreal) I3_6;
    R3_52 = R3_52 * R3_21 * R3_3 * R3_4 * R3_22;
    R3_48 = (mreal) I3_1;
    R3_48 = R3_48 * R3_38 * R3_5 * R3_39;
    R3_54 = (mreal) I3_7;
    R3_54 = R3_54 * R3_35 * R3_5 * R3_4 * R3_22 * R3_25;
    R3_55 = (mreal) I3_5;
    R3_55 = R3_55 * R3_21 * R3_5 * R3_3 * R3_4 * R3_22 * R3_25;
    R3_56 = (mreal) I3_4;
    R3_56 = R3_56 * R3_38 * R3_27 * R3_39 * R3_25;
    R3_51 = R3_51 + R3_52 + R3_48 + R3_54 + R3_55 + R3_56;
    R3_52 = R3_53 * R3_33 * R3_14 * R3_34 * R3_51;
    R3_42 = R3_42 + R3_45 + R3_43 + R3_44 + R3_49 + R3_47 + R3_50 + R3_52;
    R3_45 = R3_40 * R3_41 * R3_42;
    R3_41 = R3_25 + R3_45;
    *Res = R3_41;
    error_label:
    funStructCompile->WolframLibraryData_cleanUp(libData, 1);
    return err;
}

