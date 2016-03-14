
/*  
 Copyright (C) 2006, 2007 Giorgio Facchinetti
 
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

#ifndef ql_calc_rangeaccrual_hpp
#define ql_calc_rangeaccrual_hpp

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualFloatersCoupon(
        const ANY &ObjectId,
        const ANY &Nominal,
        const ANY &PaymentDate,
        const ANY &IborIndex,
        const ANY &StartDate,
        const ANY &EndDate,
        const ANY &FixingDays,
        const ANY &DayCountID,
        const ANY &Gearings,
        const ANY &Spreads,
        const ANY &RefPeriodStart,
        const ANY &RefPeriodEnd,
        const ANY &ObserSchedID,
        const ANY &LowerTrigger,
        const ANY &UpperTrigger,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualFloatersCouponEndDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualFloatersCouponFromLeg(
        const ANY &ObjectId,
        const ANY &RangeAccrualLeg,
        const ANY &Position,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualFloatersCouponObservationDates(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualFloatersCouponObservationsNo(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualFloatersCouponSetPricer(
        const ANY &ObjectId,
        const ANY &RangeAccrualPricer,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualFloatersCouponStarDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualFloatersPrice(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRangeAccrualPricerByBgm(
        const ANY &ObjectId,
        const ANY &Correlation,
        const ANY &SmileOnStartDateID,
        const ANY &SmileOnEndDateID,
        const sal_Int32 WithSmile,
        const sal_Int32 ByCallSpread,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSimpleFloaterPrice(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &Trigger) throw(RuntimeException);



#endif

