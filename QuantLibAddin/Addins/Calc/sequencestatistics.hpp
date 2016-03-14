
/*  
 Copyright (C) 2007, 2008 Ferdinando Ametrano
 Copyright (C) 2006, 2007 Cristina Duminuco
 
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

#ifndef ql_calc_sequencestatistics_hpp
#define ql_calc_sequencestatistics_hpp

    SEQSEQ(ANY) SAL_CALL qlSequenceStatistics(
        const ANY &ObjectId,
        const ANY &Dimension,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatistics2(
        const ANY &ObjectId,
        const ANY &Dimension,
        const SEQSEQ(ANY) &Values,
        const SEQSEQ(ANY) &Weights,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsAverageShortfall(
        const ANY &ObjectId,
        const ANY &Target,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsCorrelation(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsCovariance(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsDownsideDeviation(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsDownsideVariance(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsErrorEstimate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsGaussianAverageShortfall(
        const ANY &ObjectId,
        const ANY &Target,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsGaussianPercentile(
        const ANY &ObjectId,
        const ANY &X,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsGaussianPotentialUpside(
        const ANY &ObjectId,
        const ANY &Target,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsGaussianShortfall(
        const ANY &ObjectId,
        const ANY &Target,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsGaussianValueAtRisk(
        const ANY &ObjectId,
        const ANY &Target,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsInc(
        const ANY &ObjectId,
        const ANY &Dimension,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsInc2(
        const ANY &ObjectId,
        const ANY &Dimension,
        const SEQSEQ(ANY) &Values,
        const SEQSEQ(ANY) &Weights,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsKurtosis(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsMax(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsMean(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsMin(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsPercentile(
        const ANY &ObjectId,
        const ANY &X,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsPotentialUpside(
        const ANY &ObjectId,
        const ANY &Centile,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsRegret(
        const ANY &ObjectId,
        const ANY &Target,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsSamples(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsSemiDeviation(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsSemiVariance(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsShortfall(
        const ANY &ObjectId,
        const ANY &Target,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsSize(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsSkewness(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsStandardDeviation(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsValueAtRisk(
        const ANY &ObjectId,
        const ANY &Target,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsVariance(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSequenceStatisticsWeightSum(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);



#endif

