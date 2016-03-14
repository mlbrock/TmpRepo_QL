
/*  
 Copyright (C) 2005 Eric Ehlers
 Copyright (C) 2006, 2007, 2011 Ferdinando Ametrano
 Copyright (C) 2005 Aurelien Chanudet
 Copyright (C) 2005 Plamen Neykov
 Copyright (C) 2006 Katiuscia Manzoni
 
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

#ifndef ql_calc_swap_hpp
#define ql_calc_swap_hpp

    SEQSEQ(ANY) SAL_CALL qlMakeCms(
        const ANY &ObjectId,
        const ANY &SwapTenor,
        const ANY &SwapIndex,
        const ANY &IborIndex,
        const ANY &IborSpread,
        const ANY &ForwardStart,
        const ANY &CmsCouponPricer,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSwapLegBPS(
        const ANY &ObjectId,
        const ANY &LegNumber,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSwapLegNPV(
        const ANY &ObjectId,
        const ANY &LegNumber,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSwapMaturityDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL qlSwapStartDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException);



#endif

