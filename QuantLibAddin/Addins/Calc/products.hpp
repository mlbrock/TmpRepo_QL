
/*  
 Copyright (C) 2006, 2007 Ferdinando Ametrano
 Copyright (C) 2007 Chiara Fornarola
 Copyright (C) 2006, 2007 Marco Bianchetti
 Copyright (C) 2006, 2007 Cristina Duminuco
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

#ifndef ql_calc_products_hpp
#define ql_calc_products_hpp

    SEQSEQ(ANY) SAL_CALL qlMarketModelMultiProductComposite(
        const ANY &ObjectId,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelMultiProductCompositeAdd(
        const ANY &ObjectId,
        const ANY &Product,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelMultiProductCompositeFinalize(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelMultiProductMaxNumberOfCashFlowsPerProductPerStep(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelMultiProductNumberOfProducts(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelMultiProductPossibleCashFlowTimes(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelMultiProductSuggestedNumeraires(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelMultiStepRatchet(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &RateTimes,
        const SEQSEQ(ANY) &Accruals,
        const SEQSEQ(ANY) &PaymentTimes,
        const ANY &GearingOfFloor,
        const ANY &GearingOfFixing,
        const ANY &SpreadOfFloor,
        const ANY &SpreadOfFixing,
        const ANY &InitialFloor,
        const sal_Int32 Payer,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelOneStepForwards(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &RateTimes,
        const SEQSEQ(ANY) &Accruals,
        const SEQSEQ(ANY) &PaymentTimes,
        const SEQSEQ(ANY) &Strikes,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelOneStepOptionlets(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &RateTimes,
        const SEQSEQ(ANY) &Accruals,
        const SEQSEQ(ANY) &PaymentTimes,
        const SEQSEQ(ANY) &Payoffs,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);



#endif

