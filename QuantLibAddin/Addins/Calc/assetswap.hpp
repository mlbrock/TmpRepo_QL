
/*  
 Copyright (C) 2009, 2011 Ferdinando Ametrano
 Copyright (C) 2006, 2007, Chiara Fornarola
 
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

#ifndef ql_calc_assetswap_hpp
#define ql_calc_assetswap_hpp

    SEQSEQ(ANY) SAL_CALL qlAssetSwap(
        const ANY &ObjectId,
        const sal_Int32 PayBondCoupon,
        const ANY &Bond,
        const ANY &CleanPrice,
        const ANY &IborIndex,
        const ANY &Spread,
        const ANY &FloatingLegSchedule,
        const ANY &FloatingLegDayCounter,
        const sal_Int32 ParAssetSwap,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlAssetSwap2(
        const ANY &ObjectId,
        const sal_Int32 ParAssetSwap,
        const ANY &Bond,
        const ANY &CleanPrice,
        const ANY &NonParRepayment,
        const ANY &Gearing,
        const ANY &IborIndex,
        const ANY &Spread,
        const ANY &FloatingLegDayCounter,
        const ANY &DealMaturity,
        const sal_Int32 PayBondCoupon,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlAssetSwapFairCleanPrice(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlAssetSwapFairNonParRepayment(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlAssetSwapFairSpread(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlAssetSwapFloatingLegAnalysis(
        const ANY &ObjectId,
        const ANY &AfterDate,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlAssetSwapFloatingLegBPS(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlAssetSwapParSwap(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlAssetSwapPayBondCoupon(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);



#endif

