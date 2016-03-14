
/*  
 Copyright (C) 2015 Paolo Mazzocchi
 
 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it
 under the terms of the QuantLib license.  You should have received a
 copy of the license along with this program; if not, please email
 <quantlib-dev@lists.sf.net>. The license is also available online at
 <http://quantlib.org/license.shtml>.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

// This file was generated automatically by gensrc.py.  If you edit this file
// manually then your changes will be lost the next time gensrc runs.

// This source code file was generated from the following stub:
//      gensrc/gensrc/stubs/stub.calc.category

#ifndef ql_calc_calibrationhelpers_hpp
#define ql_calc_calibrationhelpers_hpp

    SEQSEQ(ANY) SAL_CALL qlCalibrationHelperImpliedVolatility(
        const ANY &ObjectId,
        const ANY &TargetValue,
        const ANY &Accuracy,
        const ANY &MaxEvaluations,
        const ANY &MinVol,
        const ANY &MaxVol,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCalibrationHelperSetPricingEngine(
        const ANY &ObjectId,
        const ANY &PricingEngine,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlModelG2Calibrate(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &CalibrationHelpers,
        const ANY &Method,
        const ANY &EndCriteria,
        const ANY &Constraint,
        const SEQSEQ(ANY) &Weights,
        const SEQSEQ(ANY) &FixedCoeff,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlOneFactorAffineModelCalibrate(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &CalibrationHelpers,
        const ANY &Method,
        const ANY &EndCriteria,
        const ANY &Constraint,
        const SEQSEQ(ANY) &Weights,
        const SEQSEQ(ANY) &FixedCoeff,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSwaptionHelper(
        const ANY &ObjectId,
        const ANY &OptionTenor,
        const ANY &Length,
        const ANY &Volatility,
        const ANY &IborIndex,
        const ANY &FixedLegTenor,
        const ANY &FixedLegDayCounter,
        const ANY &FloatingLegDayCounter,
        const ANY &YieldCurve,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSwaptionHelperModelValue(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);



#endif

