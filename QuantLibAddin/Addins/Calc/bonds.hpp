
/*  
 Copyright (C) 2006, 2007 Chiara Fornarola
 Copyright (C) 2006, 2007, 2008, 2009, 2010, 2011 Ferdinando Ametrano
 Copyright (C) 2005, 2006 Eric Ehlers
 Copyright (C) 2005 Plamen Neykov
 Copyright (C) 2005 Walter Penschke
 Copyright (C) 2009 Piter Dias
 
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

#ifndef ql_calc_bonds_hpp
#define ql_calc_bonds_hpp

    SEQSEQ(ANY) SAL_CALL qlBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &Calendar,
        const ANY &FaceAmount,
        const ANY &MaturityDate,
        const ANY &IssueDate,
        const ANY &LegID,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondAccrualDays(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondAccrualEndDate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondAccrualPeriod(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondAccrualStartDate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondAccruedAmount(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondAccruedDays(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondAccruedPeriod(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondAtmRateFromYieldTermStructure(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &SettlementDate,
        const ANY &CleanPrice,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondBpsFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondBpsFromYieldTermStructure(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondCalendar(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondCleanPrice(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondCleanPriceFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondCleanPriceFromYieldTermStructure(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondCleanPriceFromZSpread(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &ZSpread,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondConvexityFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondCurrency(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondDescription(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondDirtyPriceFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondDurationFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &DurationType,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondFlowAnalysis(
        const ANY &ObjectId,
        const ANY &AfterDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondIsTradable(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondIssueDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondMaturityDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondNextCashFlowAmount(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondNextCashFlowDate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondNextCouponRate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondNotional(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondNotionals(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondPreviousCashFlowAmount(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondPreviousCashFlowDate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondPreviousCouponRate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondReferencePeriodEnd(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondReferencePeriodStart(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondSetCouponPricer(
        const ANY &ObjectId,
        const ANY &FloatingRateCouponPricer,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondSetCouponPricers(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &FloatingRateCouponPricer,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondSettlementDate(
        const ANY &ObjectId,
        const ANY &EvaluationDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondSettlementDays(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondStartDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondYieldFromCleanPrice(
        const ANY &ObjectId,
        const ANY &CleanPrice,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Accuracy,
        const ANY &MaxIterations,
        const ANY &Guess,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlBondZSpreadFromCleanPrice(
        const ANY &ObjectId,
        const ANY &CleanPrice,
        const ANY &YieldCurve,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Accuracy,
        const ANY &MaxIterations,
        const ANY &Guess,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCmsRateBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &PaymentBDC,
        const ANY &FaceAmount,
        const ANY &ScheduleID,
        const ANY &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &SwapIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const ANY &Redemption,
        const ANY &IssueDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlFixedRateBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &FaceAmount,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &Coupons,
        const ANY &DayCounter,
        const ANY &PaymentBDC,
        const ANY &Redemption,
        const ANY &IssueDate,
        const ANY &PaymentCalendar,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlFixedRateBond2(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &FaceAmount,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &Coupons,
        const ANY &PaymentBDC,
        const ANY &Redemption,
        const ANY &IssueDate,
        const ANY &PaymentCalendar,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlFloatingRateBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &PaymentBDC,
        const ANY &FaceAmount,
        const ANY &ScheduleID,
        const ANY &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &IborIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const ANY &Redemption,
        const ANY &IssueDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlZeroCouponBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &Calendar,
        const ANY &FaceAmount,
        const ANY &Maturity,
        const ANY &PaymentBDC,
        const ANY &Redemption,
        const ANY &IssueDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);



#endif

