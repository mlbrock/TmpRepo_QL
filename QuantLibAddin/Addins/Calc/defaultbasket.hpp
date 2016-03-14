
/*  
 Copyright (C) 2014 Jose Aparicio
 
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

#ifndef ql_calc_defaultbasket_hpp
#define ql_calc_defaultbasket_hpp

    SEQSEQ(ANY) SAL_CALL qlCreditBasket(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &IssuerNames,
        const SEQSEQ(ANY) &Issuers,
        const SEQSEQ(ANY) &Notionals,
        const ANY &ReferenceDate,
        const ANY &AttachmentRatio,
        const ANY &DettachmentRatio,
        const sal_Int32 Amortizing,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException);



#endif
