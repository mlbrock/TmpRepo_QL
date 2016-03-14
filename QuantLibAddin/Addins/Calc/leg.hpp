
/*  
 Copyright (C) 2006, 2007, 2009, 2010, 2011 Ferdinando Ametrano
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

#ifndef ql_calc_leg_hpp
#define ql_calc_leg_hpp

    SEQSEQ(ANY) SAL_CALL qlInterestRate(
        const ANY &ObjectId,
        const ANY &Rate,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlInterestRateCompoundFactor(
        const ANY &ObjectId,
        const ANY &StartDate,
        const ANY &EndDate,
        const ANY &RefPeriodStart,
        const ANY &RefPeriodEnd,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlInterestRateCompounding(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlInterestRateDayCounter(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlInterestRateDiscountFactor(
        const ANY &ObjectId,
        const ANY &StartDate,
        const ANY &EndDate,
        const ANY &RefPeriodStart,
        const ANY &RefPeriodEnd,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlInterestRateFrequency(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlInterestRateRate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlLeg(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &Amounts,
        const SEQSEQ(ANY) &Dates,
        const sal_Int32 ToBeSorted,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlLegFromCapFloor(
        const ANY &ObjectId,
        const ANY &CapFloor,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlLegFromSwap(
        const ANY &ObjectId,
        const ANY &Swap,
        const ANY &LegNumber,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);



#endif

