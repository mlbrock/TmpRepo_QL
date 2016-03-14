
/*  
 Copyright (C) 2006, 2007, 2009 Ferdinando Ametrano
 Copyright (C) 2006, 2007 Cristina Duminuco
 Copyright (C) 2006, 2007 Giorgio Facchinetti
 Copyright (C) 2005 Aurelien Chanudet
 
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

#ifndef ql_calc_couponvectors_hpp
#define ql_calc_couponvectors_hpp

    SEQSEQ(ANY) SAL_CALL qlCmsCouponPricer(
        const ANY &ObjectId,
        const ANY &Volatility,
        const ANY &CmsCouponPricerType,
        const ANY &YieldCurveModel,
        const ANY &MeanReversion,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCmsLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &SwapIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCmsZeroLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &SwapIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlConundrumPricerByNumericalIntegration(
        const ANY &ObjectId,
        const ANY &SwaptionVol,
        const ANY &YieldCurveModel,
        const ANY &MeanReversion,
        const ANY &LowerLimit,
        const ANY &UpperLimit,
        const ANY &Precision,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlDigitalCmsLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Gearings,
        const ANY &SwapIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &CallStrikes,
        const ANY &CallSpecs,
        const SEQSEQ(ANY) &CallPayoff,
        const SEQSEQ(ANY) &PutStrikes,
        const ANY &PutSpecs,
        const SEQSEQ(ANY) &PutPayoff,
        const ANY &Replication,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlDigitalIborLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Gearings,
        const ANY &IborIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &CallStrikes,
        const ANY &CallSpecs,
        const SEQSEQ(ANY) &CallPayoff,
        const SEQSEQ(ANY) &PutStrikes,
        const ANY &PutSpecs,
        const SEQSEQ(ANY) &PutPayoff,
        const ANY &Replication,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlFixedRateLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &Coupons,
        const ANY &DayCounter,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlFixedRateLeg2(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &Coupons,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlIborCouponPricer(
        const ANY &ObjectId,
        const ANY &Volatility,
        const ANY &IborCouponPricerType,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlIborLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &IborIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &LowerStrikes,
        const SEQSEQ(ANY) &Gearings,
        const ANY &IborIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &UpperStrikes,
        const ANY &ObservationsTenor,
        const ANY &ObservationsBDC,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);



#endif

