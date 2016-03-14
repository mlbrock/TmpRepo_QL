
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

#ifndef ql_calc_marketmodels_hpp
#define ql_calc_marketmodels_hpp

    SEQSEQ(ANY) SAL_CALL qlAbcdVol(
        const ANY &ObjectId,
        const ANY &A,
        const ANY &B,
        const ANY &C,
        const ANY &D,
        const SEQSEQ(ANY) &Ks,
        const ANY &Correlations,
        const ANY &EvolutionDescription,
        const ANY &Factors,
        const SEQSEQ(ANY) &InitialRates,
        const SEQSEQ(ANY) &Displacements,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlAnnuity(
        const ANY &CurveState,
        const ANY &StartIndex,
        const ANY &EndIndex,
        const ANY &NumeraireIndex,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCmSwapForwardJacobian(
        const ANY &CurveState,
        const ANY &SpanningForwards,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCmSwapZedMatrix(
        const ANY &CurveState,
        const ANY &SpanningForwards,
        const ANY &Displacement,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCoinitialSwapForwardJacobian(
        const ANY &CurveState,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCoinitialSwapZedMatrix(
        const ANY &CurveState,
        const ANY &Displacement,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCotSwapToFwdAdapter(
        const ANY &ObjectId,
        const ANY &CoterminalModel,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCoterminalSwapForwardJacobian(
        const ANY &CurveState,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlCoterminalSwapZedMatrix(
        const ANY &CurveState,
        const ANY &Displacement,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlFlatVol(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &Volatilities,
        const ANY &Correlations,
        const ANY &EvolutionDescription,
        const ANY &Factors,
        const SEQSEQ(ANY) &InitialRates,
        const SEQSEQ(ANY) &Displacements,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlFlatVolFactory(
        const ANY &ObjectId,
        const ANY &LongTermCorr,
        const ANY &Beta,
        const SEQSEQ(ANY) &Times,
        const SEQSEQ(ANY) &Volatilities,
        const ANY &YieldCurve,
        const ANY &Displacement,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlFwdPeriodAdapter(
        const ANY &ObjectId,
        const ANY &LargeModel,
        const ANY &Period,
        const ANY &Offset,
        const SEQSEQ(ANY) &Displacements,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlFwdToCotSwapAdapter(
        const ANY &ObjectId,
        const ANY &ForwardModel,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelCovariance(
        const ANY &ObjectId,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelDisplacements(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelInitialRates(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelNumberOfFactors(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelNumberOfRates(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelNumberOfSteps(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelPseudoRoot(
        const ANY &ObjectId,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelTimeDependentVolatility(
        const ANY &ObjectId,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlMarketModelTotalCovariance(
        const ANY &ObjectId,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlPseudoRootFacade(
        const ANY &ObjectId,
        const ANY &Calibrator,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRateInstVolDifferences(
        const ANY &MarketModel1,
        const ANY &MarketModel2,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlRateVolDifferences(
        const ANY &MarketModel1,
        const ANY &MarketModel2,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSwapDerivative(
        const ANY &CurveState,
        const ANY &StartIndex,
        const ANY &EndIndex,
        const ANY &FwdRateIndex,
        const ANY &Trigger) throw(RuntimeException);



#endif

