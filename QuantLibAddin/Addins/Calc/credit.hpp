
/*  
 Copyright (C) 2010 Roland Lichters
 
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

#ifndef ql_calc_credit_hpp
#define ql_calc_credit_hpp

    SEQSEQ(ANY) SAL_CALL qlBlackCdsOptionEngine(
        const ANY &ObjectId,
        const ANY &DefaultCurve,
        const ANY &RecoveryRate,
        const ANY &YieldCurve,
        const ANY &BlackVol,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCDSOption(
        const ANY &ObjectId,
        const ANY &UnderlyingCDS,
        const ANY &Exercise,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCreditDefaultSwap(
        const ANY &ObjectId,
        const ANY &BuyerSeller,
        const ANY &Notional,
        const ANY &Upfront,
        const ANY &Spread,
        const ANY &PremiumSchedule,
        const ANY &PaymentConvention,
        const ANY &DayCounter,
        const sal_Int32 SettlesAccrual,
        const sal_Int32 PayAtDefault,
        const ANY &ProtectionStart,
        const ANY &UpfrontDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlHazardRateCurve(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &CurveDates,
        const SEQSEQ(ANY) &CurveRates,
        const ANY &DayCounter,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMidPointCdsEngine(
        const ANY &ObjectId,
        const ANY &DefaultCurve,
        const ANY &RecoveryRate,
        const ANY &YieldCurve,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlPiecewiseFlatForwardCurve(
        const ANY &ObjectId,
        const ANY &ReferenceDate,
        const SEQSEQ(ANY) &RateHelpers,
        const ANY &DayCounter,
        const ANY &Accuracy,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlPiecewiseHazardRateCurve(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &Helpers,
        const ANY &DayCounter,
        const ANY &Calendar,
        const ANY &Interpolation,
        const ANY &Accuracy,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRiskyFixedBond(
        const ANY &ObjectId,
        const ANY &Bondname,
        const ANY &Currency,
        const ANY &Recovery,
        const ANY &DefaultCurve,
        const ANY &Schedule,
        const ANY &Rate,
        const ANY &DayCounter,
        const ANY &PaymentConvention,
        const ANY &Notional,
        const ANY &DiscountingCurve,
        const ANY &PricingDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSpreadCdsHelper(
        const ANY &ObjectId,
        const ANY &RunningSpread,
        const ANY &Tenor,
        const ANY &SettlementDays,
        const ANY &Calendar,
        const ANY &Frequency,
        const ANY &PaymentConvention,
        const ANY &GenRule,
        const ANY &DayCounter,
        const ANY &RecoveryRate,
        const ANY &DiscountingCurve,
        const sal_Int32 SettleAccrual,
        const sal_Int32 PayAtDefault,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlUpfrontCdsHelper(
        const ANY &ObjectId,
        const ANY &UpfrontSpread,
        const ANY &RunningSpread,
        const ANY &Tenor,
        const ANY &SettlementDays,
        const ANY &Calendar,
        const ANY &Frequency,
        const ANY &PaymentConvention,
        const ANY &GenRule,
        const ANY &DayCounter,
        const ANY &RecRate,
        const ANY &DiscCurve,
        const ANY &UpfSettlDays,
        const sal_Int32 SettlAccr,
        const sal_Int32 PayAtDefault,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);



#endif

