
/*  
 Copyright (C) 2006, 2007 Ferdinando Ametrano
 Copyright (C) 2007 Chiara Fornarola
 Copyright (C) 2007 Katiuscia Manzoni
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

#ifndef ql_calc_correlation_hpp
#define ql_calc_correlation_hpp

    SEQSEQ(ANY) SAL_CALL qlCotSwapFromFwdCorrelation(
        const ANY &ObjectId,
        const ANY &FwdCorr,
        const ANY &CurveState,
        const ANY &Displacement,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlExponentialCorrelations(
        const SEQSEQ(ANY) &RateTimes,
        const ANY &LongTermCorr,
        const ANY &Beta,
        const ANY &Gamma,
        const ANY &Time,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlExponentialForwardCorrelation(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &RateTimes,
        const ANY &LongTermCorr,
        const ANY &Beta,
        const ANY &Gamma,
        const SEQSEQ(ANY) &Times,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelLmLinearExponentialCorrelationModel(
        const ANY &ObjectId,
        const ANY &Size,
        const ANY &Rho,
        const ANY &Beta,
        const ANY &Factors,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlPiecewiseConstantCorrelationCorrelation(
        const ANY &ObjectId,
        const ANY &TimeIndex,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlPiecewiseConstantCorrelationNumberOfRates(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlPiecewiseConstantCorrelationTimes(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlTimeHomogeneousForwardCorrelation(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &FwdCorrMatrix,
        const SEQSEQ(ANY) &RateTimes,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);



#endif

